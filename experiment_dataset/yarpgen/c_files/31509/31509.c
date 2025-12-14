/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] &= max(((max((!744586938), (min((arr_1 [i_0]), 226577717))))), (arr_0 [i_0]));
                var_15 = ((max((arr_4 [i_0 - 2] [i_0 + 1] [i_0 + 1]), -9007)));
                var_16 ^= ((min((arr_4 [i_0] [i_0] [i_0]), ((max(-9007, -9003))))));
            }
        }
    }
    var_17 = ((!var_13) + (max(var_4, (~var_1))));
    var_18 = var_9;
    var_19 = ((-1 ? 8988 : 0));
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_20 *= (((var_2 ? ((71296049 ? 64 : (arr_6 [i_3])) : (((max(-9004, var_11))))))));
                    arr_12 [i_2] [i_2] [i_4] [i_2] = var_8;
                    arr_13 [i_2] [i_4] = (max((min(30364, 65526)), (arr_6 [i_2])));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_21 = ((var_13 ? (max((arr_11 [i_2] [i_3]), (var_2 / 8885251907191329606))) : ((var_5 ? (max(3937301517518431910, 12)) : (((var_13 ? 63079 : 2008917327)))))));
                                var_22 = var_13;
                            }
                        }
                    }
                    var_23 -= (((((2147483647 ? ((((arr_9 [i_4]) / var_9))) : ((44263 ? (arr_6 [i_2]) : (arr_7 [i_2])))))) ? (max(var_6, var_14)) : (((-2627667120687259437 ? -2713635486948767256 : 1090389141)))));
                }
            }
        }
    }
    #pragma endscop
}
