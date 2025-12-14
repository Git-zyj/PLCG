/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_20 = (max(var_20, var_8));
        var_21 = (min((min((min(var_12, var_1)), (var_2 / var_12))), var_11));
        var_22 = (max(var_22, var_14));
        arr_3 [i_0] [i_0 + 3] = 3;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_23 = (min((((arr_5 [i_1]) ? (arr_5 [i_1]) : (arr_1 [i_1]))), (((arr_5 [i_1]) ? -1409147963 : (arr_1 [i_1])))));
        arr_7 [i_1] = (min(var_17, ((((min(var_12, var_4))) >> (min(13864924759974196840, 1))))));
        arr_8 [i_1] [i_1] = 16;
    }
    var_24 = max((!var_7), 1);
    var_25 &= (var_8 && ((min((max(var_5, var_8)), ((var_11 ? var_0 : 18446744073709551605))))));
    #pragma endscop
}
