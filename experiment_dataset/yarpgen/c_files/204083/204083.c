/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204083
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 125;
    var_18 = (-125 & (var_4 & var_13));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_8 [8] [i_3] [8] [i_0] [i_3] [i_0] &= 800131648;
                            var_19 = (((arr_6 [i_0 - 2] [i_0 - 3] [i_1]) ? (((arr_5 [i_0]) ? var_0 : 15)) : ((max(3115588000, (!2508020774))))));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    var_20 = 7557697805903394215;
                    var_21 = (1 && 23965);
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    arr_15 [i_1] = 53999;
                    var_22 = 7625;
                    arr_16 [9] [i_1] = (min(((var_12 ? (arr_12 [i_5] [i_5] [i_5]) : 3)), (((-(arr_7 [i_0 - 1] [5] [i_0]))))));
                    var_23 = ((~(((var_3 | -1171288333) ? (arr_13 [1]) : (arr_9 [i_0] [1])))));
                }
                var_24 = (max(1, 41181393));
                var_25 = ((((!(((var_12 ? var_11 : 65526))))) ? (((!((((arr_10 [i_0] [i_0 - 2] [i_1]) ? (arr_11 [i_1] [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0] [i_0]))))))) : ((max((arr_2 [i_0 - 1]), (arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 1]))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 6;i_7 += 1)
                    {
                        {
                            var_26 = (-28406 ? (arr_20 [i_7] [i_1] [i_0 - 1] [i_7] [i_0] [i_6]) : (((max(1, 37270)))));
                            var_27 = (((~var_15) || (arr_20 [i_7 - 1] [i_0 + 1] [i_0] [9] [i_0 + 1] [i_0])));

                            /* vectorizable */
                            for (int i_8 = 1; i_8 < 6;i_8 += 1)
                            {
                                arr_26 [i_1] [i_1] [i_6] [i_7] [i_8] = (((arr_5 [i_0 + 1]) || (arr_5 [i_0 - 1])));
                                var_28 = (min(var_28, (((var_12 != (var_7 && -7601))))));
                            }
                            var_29 = ((~((~(arr_18 [i_0 - 3] [i_7 - 1] [8] [i_7 + 3])))));
                        }
                    }
                }
            }
        }
    }
    var_30 = var_4;
    var_31 = (-((min(119, 1))));
    #pragma endscop
}
