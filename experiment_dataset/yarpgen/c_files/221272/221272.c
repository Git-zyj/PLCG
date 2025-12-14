/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((!var_7) || ((((var_2 ? var_8 : 0))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = (arr_0 [i_0]);
        var_15 -= (arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_16 = (((arr_3 [i_1]) / (arr_0 [i_1])));
        var_17 = (((arr_0 [i_1]) ? var_1 : (arr_0 [i_1])));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_7 [i_1] = (arr_4 [i_2]);
            var_18 = 18210;
            arr_8 [i_2] = (arr_0 [i_1]);
            var_19 |= (arr_4 [i_1]);
            arr_9 [5] = 1;
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_20 = ((+(max((((arr_2 [7]) ? var_1 : (arr_10 [i_3] [i_3]))), ((0 ? var_1 : -1))))));
        var_21 = ((((((((2298838823 ? -72 : -36592292))) ? 4294967295 : (((min(-1118, var_4))))))) ? (arr_0 [i_3]) : ((-1217 ? ((29734206 ? var_11 : (arr_0 [i_3]))) : (arr_2 [i_3])))));
    }
    var_22 = (((((min(var_9, var_12)))) / -1128));
    #pragma endscop
}
