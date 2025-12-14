/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 |= (arr_0 [i_0]);
        var_19 = max((max(var_3, var_8)), ((max(1, -93))));
        arr_2 [i_0] [i_0] = ((-(((arr_0 [i_0]) ? (arr_0 [i_0]) : 1))));
        arr_3 [i_0] = (max((max(8253611053484394893, 4294967281)), ((max(((var_13 ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))), (max(1, (arr_1 [i_0] [i_0]))))))));
        arr_4 [i_0] [i_0] = (max((max((arr_0 [i_0]), (arr_1 [i_0] [i_0]))), (((((max(8253611053484394893, var_1))) || (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((((((arr_6 [i_1] [i_1]) ? var_7 : (arr_1 [i_1] [i_1])))) ? (arr_6 [i_1] [i_1]) : ((((arr_1 [i_1] [i_1]) > 238)))));
        arr_9 [i_1] = (((arr_6 [i_1] [i_1 - 1]) ? (arr_6 [i_1] [i_1 - 1]) : var_15));
    }
    var_20 = 238;
    #pragma endscop
}
