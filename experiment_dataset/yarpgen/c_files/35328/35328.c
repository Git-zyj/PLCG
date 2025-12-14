/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((1 ? ((18 ? 1638591975 : var_7)) : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 |= (((((min(4094318777, 30707)))) ? (((34829 || ((min(var_3, var_16)))))) : (((var_3 <= (arr_3 [i_1] [i_2] [i_4]))))));
                                var_22 *= ((((max(-var_7, var_6))) ? (arr_6 [i_0]) : ((-30707 ? -var_10 : (arr_6 [i_0])))));
                                var_23 += var_0;
                            }
                        }
                    }
                    var_24 = (min(var_24, ((~((-1 ? 1 : 2200761315))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        {
                            var_25 |= ((((min((arr_13 [i_7]), var_1))) ? (min(12, (arr_13 [i_5 + 2]))) : ((((!(arr_13 [i_5 + 1])))))));
                            var_26 = (((((((min(var_8, 3614760707))) ? (arr_10 [i_5]) : (min((arr_18 [i_7]), 13306213284540210573))))) ? (max(((13 ? (arr_17 [i_5] [i_6] [i_7] [i_8]) : 13)), var_9)) : 2297208359));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 18;i_10 += 1)
                    {
                        {
                            var_27 = var_11;
                            var_28 |= (arr_22 [i_5] [i_6] [i_9] [i_10]);
                            var_29 += var_3;
                            var_30 = ((~(10771 - 72055395014672384)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        {
                            var_31 *= min((arr_11 [i_6]), (arr_16 [i_6 - 2] [i_5] [i_5] [i_5 + 3]));
                            var_32 = (~9643);
                            var_33 = (min(var_33, var_8));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
