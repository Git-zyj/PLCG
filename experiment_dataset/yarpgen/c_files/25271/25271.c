/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_9;
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max(13245, -41));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [i_1] [i_2] = 0;
                    var_17 -= 40;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_4] [12] [12] [12] &= ((((((var_5 ^ var_2) != (arr_2 [i_0 - 1] [i_0 - 1])))) * (!0)));
                                arr_14 [i_4] [i_1] [i_3] [i_1] [i_1] [11] [i_0 - 1] = ((((min(((min((arr_5 [i_0 + 2] [i_1]), 52278))), ((2932205628799123805 ? 33538048 : 18))))) - 3835422673022738565));
                                arr_15 [8] [1] [i_2] [i_0] [6] &= 3065862192;
                                var_18 -= (((2055116767 >= 4294967295) != (!15)));
                            }
                        }
                    }
                }
                var_19 |= ((((2097148 ? ((((arr_5 [1] [i_0]) == -378740716788048176))) : (min(43818, var_6))))) ? (arr_8 [i_1] [i_0] [6]) : (arr_10 [i_1] [i_0 + 3] [i_0 + 3]));
                /* LoopNest 3 */
                for (int i_5 = 2; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_20 = ((((max((arr_22 [4] [i_0 + 1] [i_1] [3] [i_1] [i_1]), (arr_25 [i_5] [i_5] [i_7] [i_5] [i_7 - 1] [i_1])))) || 124));
                                arr_27 [13] [i_1] [i_5 + 1] [i_6] [i_6] [i_1] = (var_13 && var_12);
                                var_21 *= (251 != 4294967295);
                                var_22 ^= 20823;
                                var_23 -= (((((-1019578331 ? 21 : (arr_22 [i_7] [i_5] [i_6] [i_5 - 2] [i_5] [i_0])))) && var_9));
                            }
                        }
                    }
                }
                var_24 = (max(var_24, (arr_23 [4] [i_0] [i_0 + 2] [4] [4] [i_1] [4])));
            }
        }
    }
    var_25 *= (((((var_11 < var_6) ? 15484646532989690325 : ((var_5 ? var_13 : var_12)))) << (var_13 + 9095)));
    #pragma endscop
}
