/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = 3177928837;
                arr_5 [i_1] = (-(((arr_2 [i_0]) ? 3177928851 : var_10)));
                var_18 = 9223372036854775807;
                var_19 = 42807;

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_8 [2] [i_1] [i_0] = -var_13;
                    arr_9 [i_0] [i_1] [i_1] = ((-var_6 ? (arr_4 [i_1] [i_1]) : (arr_4 [i_0] [i_1])));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                {
                    var_20 *= var_7;
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_21 *= (((arr_4 [4] [i_0]) || ((var_0 <= (((8160602229360623473 ? -2147483618 : 1117038444)))))));
                                var_22 = 4989146550413977938;
                                var_23 = (+((var_3 ? (arr_7 [1] [i_1] [i_1 - 3]) : (arr_7 [i_0] [i_1] [i_1 - 3]))));
                                var_24 -= (((arr_16 [i_0] [i_0] [i_3] [i_4] [i_5]) ? ((((arr_10 [i_0] [24] [i_0] [i_5]) ? var_6 : var_4))) : ((1117038443 ? var_2 : var_1))));
                                var_25 *= var_7;
                            }
                        }
                    }
                    var_26 *= var_15;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    var_27 = (((((~var_11) != -1)) ? (max(((54084661 ? (arr_15 [i_6] [i_6] [i_6] [i_6] [24] [i_6]) : -32)), (arr_7 [i_6] [i_6] [i_6]))) : (((((45499 == (arr_20 [i_8] [i_7])))) + (((arr_4 [i_6] [i_6]) ? (arr_18 [i_6] [i_7]) : var_5))))));
                    var_28 ^= var_5;
                    var_29 = ((var_16 < ((((var_4 || (var_16 <= 22721)))))));
                }
            }
        }
    }
    var_30 = (min(var_30, 8));
    #pragma endscop
}
