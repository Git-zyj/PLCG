/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (arr_10 [i_0])));
                                var_14 -= ((52549 / ((-(min(var_6, var_7))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_15 = (((arr_12 [i_0] [i_1] [i_2] [i_5]) && (((var_7 ? (arr_7 [i_0] [i_1] [i_0]) : (arr_12 [i_0] [i_1] [i_0] [i_0]))))));
                        arr_14 [i_0] [i_5] [i_5] [i_5] = var_9;
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        var_16 = 52549;
                        var_17 = ((var_1 ? (((min((arr_4 [i_6] [i_2] [i_1] [i_0]), var_7)))) : (((var_8 || var_12) ? (max((arr_3 [i_0] [i_6]), 56873)) : (((arr_9 [i_0] [i_1]) ? var_11 : (arr_1 [i_0])))))));
                    }
                    for (int i_7 = 1; i_7 < 1;i_7 += 1)
                    {
                        var_18 = var_0;
                        var_19 = (min((arr_18 [i_7 - 1] [i_7 - 1] [i_7 - 1]), (arr_13 [i_7 - 1] [i_1] [i_2] [i_7 - 1])));
                        var_20 = (((39761 && 52549) * (arr_12 [i_0] [i_1] [i_2] [i_7 - 1])));
                        var_21 = (arr_16 [i_0] [i_0]);
                    }
                }
            }
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_22 = ((~(!1)));
        var_23 = ((--754434619) ? (min(((((arr_21 [i_8] [i_8]) ? (arr_21 [i_8] [i_8]) : (arr_23 [i_8] [i_8])))), var_11)) : (((var_2 ? 32194 : -var_10))));
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_24 ^= var_1;
        var_25 -= (((((((var_10 ? var_6 : var_5))) * (((arr_22 [i_9] [i_9]) ? (arr_21 [i_9] [i_9]) : var_4))))) && ((max((arr_24 [0]), (min(-32179, var_6))))));
    }
    var_26 = (max(var_26, ((((((0 ? -754434625 : 8679))) ? (var_8 && var_9) : ((~(52549 * 10266811399797556912))))))));
    #pragma endscop
}
