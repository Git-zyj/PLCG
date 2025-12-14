/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {
                    var_20 = ((((-(109 * var_5)))) ? (arr_0 [1]) : 0);

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_11 [i_2] [i_1] [17] [i_2] [i_1] [i_2] = var_12;
                            var_21 = (((((((var_11 ? (arr_0 [i_0]) : var_11))))) != var_14));
                            var_22 = 18222;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_23 = (min(var_23, ((((arr_3 [i_0 - 2] [i_2 - 1]) <= var_11)))));
                            var_24 = var_3;
                            var_25 = (--5);
                        }
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            arr_16 [i_0] [i_0] [i_2] = (~32762);
                            arr_17 [i_0] [4] [4] [i_0] [16] [i_2] = ((var_4 >= var_0) > ((min((var_17 < var_17), 147))));
                        }
                        var_26 = (min(var_26, (arr_3 [i_0] [i_3])));
                    }
                    for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                    {
                        arr_22 [i_2] = ((((((arr_5 [2] [i_2] [i_2 - 1] [i_2]) & (arr_20 [i_0 - 3] [i_2 - 1])))) < ((var_3 + (min((arr_5 [i_7] [i_2] [i_0] [i_0]), var_1))))));
                        var_27 ^= (0 && -18223);
                        var_28 = (((((0 << (((((arr_14 [i_0] [i_1] [i_1] [i_0] [i_2] [i_0]) ? var_3 : 18220)) - 25839))))) < (-18205 * var_13)));
                        var_29 = (arr_5 [i_0] [i_0] [i_0] [i_7]);
                        var_30 = (min(var_30, (((-(((((var_19 << (var_8 - 18134171222960202299)))) * (max((arr_4 [i_7] [i_1] [i_0] [20]), 36)))))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                arr_28 [i_0] [i_2] [i_0] [i_0] [8] = (arr_0 [i_0]);
                                var_31 = ((~(var_9 > var_17)));
                                var_32 |= var_14;
                                var_33 = ((var_16 >> (-18247 + 18252)));
                            }
                        }
                    }
                    var_34 = var_2;
                }
            }
        }
    }
    var_35 = var_8;
    var_36 = (~var_6);
    #pragma endscop
}
