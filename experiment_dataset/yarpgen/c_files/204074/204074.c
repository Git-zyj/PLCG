/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((max(178, (min(7894536478043571053, (max(10552207595665980563, 7894536478043571053)))))))));
                var_15 = (((arr_2 [i_1]) < (max((!152), var_1))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 19;i_3 += 1)
        {
            {
                var_16 = (((((-(arr_4 [i_2] [i_3 - 2] [5])))) ? var_11 : (157 * 3149186453)));
                var_17 = var_5;
                var_18 = (((arr_9 [i_2] [i_2] [i_3]) & (((!(0 && 7894536478043571069))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            {
                var_19 += (((((arr_3 [i_4] [i_4] [i_5]) ? (arr_3 [i_4] [i_4] [i_5]) : (arr_3 [i_4] [i_5] [i_5]))) >= ((max((((arr_6 [i_4] [i_5]) ? (arr_1 [i_5] [6]) : 162)), ((1 ? 109 : 384)))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {

                            for (int i_8 = 0; i_8 < 17;i_8 += 1)
                            {
                                var_20 = (((~var_10) ? (((arr_21 [i_6] [i_6]) ? (arr_23 [i_5] [i_6] [i_8]) : 1)) : (arr_21 [i_6] [i_7])));
                                var_21 = (((((7894536478043571030 ? 109 : 9))) ? (arr_12 [i_4]) : (((max((arr_8 [i_7]), (arr_8 [i_7])))))));
                                var_22 = (((1099511627772 <= -1) >= (min(((var_6 ? var_8 : 0)), 119))));
                                var_23 = 109;
                            }
                            for (int i_9 = 0; i_9 < 17;i_9 += 1)
                            {
                                var_24 -= 126;
                                var_25 = (min((arr_0 [i_7]), ((-((var_4 ? var_6 : var_12))))));
                            }
                            var_26 = var_11;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
