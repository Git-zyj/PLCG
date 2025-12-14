/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_14 = (min(var_14, ((((((2835248216 ? 1 : var_3))) && 1)))));
                                var_15 = ((var_3 ? (arr_9 [i_2] [i_3] [i_3] [i_3 + 1] [i_3]) : (arr_9 [i_2] [0] [i_2] [i_3 + 1] [i_3])));
                            }
                            for (int i_5 = 0; i_5 < 16;i_5 += 1)
                            {
                                var_16 += ((max((arr_7 [i_3 + 1]), (max(0, 1)))));
                                var_17 = (((arr_15 [i_3] [i_2] [i_0] [i_0]) ? (-2147483647 % 19) : var_3));
                                var_18 = (((arr_5 [i_0] [1] [i_2]) / ((((arr_5 [i_5] [i_1] [i_0]) * 32767)))));
                                var_19 = ((((var_7 ^ (min(1, 7137678557673346982)))) < -27761));
                                var_20 = (max(var_20, (arr_0 [i_2])));
                            }

                            for (int i_6 = 2; i_6 < 15;i_6 += 1)
                            {
                                var_21 = (max(1051944669, ((((arr_15 [i_3 + 1] [i_6] [i_2] [1]) > (arr_16 [i_3 + 1] [i_1] [i_6 + 1] [i_3] [i_6] [9]))))));
                                arr_20 [8] [i_1] [i_3] [i_3] [9] = ((32768 * (((arr_18 [i_3] [i_6 - 1] [i_6] [i_6 + 1] [i_6] [i_3]) / (max((arr_2 [i_1]), 0))))));
                                arr_21 [i_0] [i_0] [4] [i_0] [7] [i_0] = (var_2 < 3965970149);
                                var_22 = (min(var_22, var_5));
                            }
                            arr_22 [i_0] [i_1] [i_2] = ((!(((640264818 ? 1 : ((((arr_2 [i_1]) && 1046528))))))));
                        }
                    }
                }
                arr_23 [i_1] |= 127;
            }
        }
    }
    var_23 *= ((var_3 ? (max(109, ((35283 ? 3965970149 : 7260)))) : (~4294967295)));
    var_24 &= var_7;
    var_25 = (min(((1 ? (var_7 && 127) : var_3)), ((((max(var_11, (-9223372036854775807 - 1))) + (!var_6))))));
    #pragma endscop
}
