/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, 63));

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_19 = ((!((max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_20 = ((((((4294967295 ? 0 : 65535))) ? var_12 : ((((-18867 >= (arr_0 [i_0]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = 1;
        arr_6 [i_1] = ((((arr_4 [i_1]) ? 1 : 0)));
    }
    var_21 = -118;
    var_22 = ((1984 ? var_3 : (~var_12)));
    #pragma endscop
}
