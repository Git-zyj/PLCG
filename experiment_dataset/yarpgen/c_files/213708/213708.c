/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_8 < -var_3);
    var_11 = (((var_2 * var_6) ? var_4 : -4166702245));
    var_12 = (4166702245 | -5456902900825282628);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = (arr_5 [i_4 + 1] [i_2 - 1]);
                                arr_15 [i_0] [14] [i_2] [i_0] [i_0] [i_0 + 2] [i_2] = (((((arr_2 [i_0 + 1]) + (var_8 < var_5))) ^ ((((~5) < 10521135579992530404)))));
                            }
                        }
                    }
                    var_14 ^= (~5456902900825282624);
                }
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    var_15 -= ((((((arr_0 [i_0]) - (arr_0 [i_0])))) ? (((var_7 <= (arr_0 [i_0])))) : (((arr_9 [i_0] [i_0 - 1]) ? var_6 : var_6))));
                    var_16 = (min(var_16, (((-20806 ? ((((122 || (((-5456902900825282628 ? 1106471552 : var_8))))))) : (min(((var_4 + (arr_4 [i_0 - 1]))), (~15246))))))));
                }
                var_17 -= (min((((arr_2 [i_1]) - (((arr_5 [7] [7]) >> (251 - 236))))), 5));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_28 [0] [i_0] [i_0] [i_7] [i_6] [9] [2] = (((~((var_5 ? 0 : var_5)))));
                                arr_29 [i_8] [i_0] [i_7] [i_7] [i_6] [i_1] [i_0] = ((((12573880285235518447 ? 498499145 : 251)) < var_7));
                            }
                        }
                    }
                }
                var_18 = arr_1 [i_0] [i_0];
                var_19 = ((-(((var_2 < ((min(var_9, 0))))))));
            }
        }
    }
    #pragma endscop
}
