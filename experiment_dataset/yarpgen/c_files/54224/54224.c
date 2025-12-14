/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (((((max(2276682138281584233, -12543)))) ? (-2147483647 - 1) : (((max((-9223372036854775807 - 1), 1879048192)) - ((((arr_4 [13] [13]) / 81)))))));
                    var_15 &= var_3;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_16 = (((arr_1 [i_3] [i_4]) ? var_12 : var_9));

                    for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
                    {
                        arr_18 [i_4] [i_5] [i_4] = var_10;
                        arr_19 [i_4] [i_4] [i_5] [i_6] = (((arr_4 [16] [2]) || (arr_15 [i_6 - 1] [i_6 - 2] [0] [i_6 - 1] [i_6 + 1] [i_4])));
                        arr_20 [i_3] [i_5] [i_3] &= (((arr_8 [i_3] [i_6 - 1] [i_6 - 1] [i_3]) <= (arr_8 [i_6] [i_6 - 1] [10] [i_3])));
                    }
                    for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
                    {
                        var_17 = var_5;

                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            arr_25 [i_3] [i_4] = 1879048186;
                            var_18 = var_0;
                        }
                        var_19 = (max(var_19, ((((var_13 / 9223372036854775807) != 10751563942940063245)))));
                    }
                    for (int i_9 = 2; i_9 < 14;i_9 += 1) /* same iter space */
                    {
                        arr_30 [8] [i_4] [i_5] [i_9 - 2] = ((var_4 || (arr_21 [i_3] [i_4] [i_5] [i_9] [i_9 + 1])));
                        var_20 = (min(var_20, 2921));
                    }
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    arr_33 [i_4] [i_4] [i_3] = (~6223);
                    var_21 = -134261293;
                    var_22 = (max(var_22, 994077220));
                }
                var_23 -= (((((-(arr_7 [i_3] [i_4] [i_3])))) ? ((+(((-2147483647 - 1) / (arr_31 [i_3]))))) : (((arr_29 [i_3]) ? (arr_16 [i_3] [i_4] [i_4]) : (((arr_32 [i_3]) ? var_8 : 32))))));
                arr_34 [i_4] = var_1;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_11 = 2; i_11 < 20;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 22;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 21;i_13 += 1)
            {
                {
                    var_24 = (min(var_24, (((((-218 ? (1 | var_13) : (((arr_39 [i_11 - 2] [i_11 - 2]) | var_5)))) < (!var_11))))));
                    var_25 = 895195093;
                    var_26 = (max(var_26, 73));
                }
            }
        }
    }
    var_27 = (max(var_27, var_3));
    #pragma endscop
}
