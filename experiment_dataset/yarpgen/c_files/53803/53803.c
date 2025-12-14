/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((min(var_5, var_13))), var_12));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 -= var_13;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_12 [2] [i_2] [i_2] [i_0] = (i_0 % 2 == zero) ? ((var_16 << (((((arr_3 [i_0 - 3] [i_0]) ? (arr_3 [i_0 + 1] [i_0]) : (arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_3 + 1]))) - 79)))) : ((var_16 << (((((((arr_3 [i_0 - 3] [i_0]) ? (arr_3 [i_0 + 1] [i_0]) : (arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_3 + 1]))) - 79)) + 134))));
                            arr_13 [i_0] = ((+(max((arr_5 [19] [i_1] [i_0]), var_16))));
                            arr_14 [21] [i_0] [i_2] [i_3 + 1] [i_2] [i_2] = ((-var_14 < (arr_2 [i_0])));
                        }
                    }
                }
                arr_15 [i_0] [i_0] = ((+((min((arr_4 [i_0 - 2]), (arr_4 [i_0 + 1]))))));
                var_22 = ((((min((arr_0 [i_0]), (arr_0 [i_0])))) ? (max((arr_0 [i_0]), (arr_0 [i_0]))) : (arr_0 [i_0])));
            }
        }
    }
    var_23 = (min(var_17, ((((-283142782 + 2147483647) << (18446744073642442752 - 18446744073642442752))))));
    #pragma endscop
}
