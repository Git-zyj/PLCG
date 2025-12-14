/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((((~var_3) ? (~var_2) : (max(var_1, 7881299347898368)))));
    var_17 ^= var_14;
    var_18 = var_6;
    var_19 -= (~2147483633);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_0] [i_2] [i_3] |= var_10;

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_20 = ((max(1631762376, 0)));
                                var_21 = (!-7881299347898363);
                                arr_15 [i_0] [i_1] [i_2] [i_1] [1] [i_4] = -18438862774361653225;
                                var_22 = min(((((!(arr_7 [i_0]))))), ((1165545974 ? (((var_5 ? var_8 : var_7))) : 4294967294)));
                                arr_16 [i_4] [i_1] [i_2] [i_1] [i_4] = ((((((var_9 ? 7881299347898363 : 18438862774361653267))) ? ((var_0 ? 7881299347898385 : 19864)) : (~-1))));
                            }
                            for (int i_5 = 0; i_5 < 23;i_5 += 1)
                            {
                                arr_20 [i_0] [i_1] [2] [i_2] [i_1] [4] [12] = ((!((max(var_9, -132445793)))));
                                arr_21 [i_0] [i_1] [i_1] [14] [i_1] [i_5] [i_5] = (arr_18 [i_1] [i_1] [i_1]);
                                arr_22 [i_0] [i_1] [0] [i_3] [i_5] = ((1 ? -132445806 : -132445793));
                                var_23 ^= 1335839181;
                            }
                            arr_23 [i_1] [i_1] = (min((arr_6 [i_1]), (arr_17 [i_0] [8] [i_1] [12] [i_1] [i_3] [i_3])));
                        }
                    }
                }
                var_24 &= (((((arr_7 [i_0]) ? (arr_7 [i_0]) : var_8))) ? (arr_7 [i_0]) : (~var_0));
            }
        }
    }
    #pragma endscop
}
