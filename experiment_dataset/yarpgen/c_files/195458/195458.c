/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((~((65512 ? var_2 : 2585581365)))), (((var_9 ? (!54881) : var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_17, var_15));
                                var_18 += (arr_1 [i_1]);
                                var_19 = (max(var_19, (((((min((var_2 != 41460), (min(var_15, 10654))))) ? (((3 ? 8513 : var_13))) : (arr_10 [i_3] [i_3] [i_3]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] |= (((((16799134750786947088 ? 7469149485956943879 : 5793363392966374224))) ? -1709385930 : (((24070 + (var_3 + var_10))))));
                                var_20 = (max(var_20, (((((((arr_8 [i_1] [i_1] [i_1] [i_6]) << (((((~177) + 233)) - 55))))) ? (((((((-(arr_10 [i_6] [i_6] [i_6])))) || (((-24762 ? -1025129458 : var_0))))))) : (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_1] [i_2] [i_5] [i_6]) : (arr_10 [i_0] [i_0] [i_5]))))))));
                            }
                        }
                    }

                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        var_21 = (max(var_21, ((max((((var_5 || (((~(arr_19 [i_0] [i_2] [i_7 - 2]))))))), (((((2585581365 > (arr_11 [i_0] [i_0] [i_0])))) / (arr_16 [i_0] [i_7 - 2] [i_1] [i_1] [i_7]))))))));

                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            arr_23 [i_0] [i_1] [i_2] [i_8] = ((~(((((-(arr_19 [i_2] [i_2] [i_0])))) ? ((12653380680743177392 ? 511 : (arr_0 [i_1] [i_7 - 2]))) : (min(24089, (arr_20 [i_7] [i_7] [i_7] [i_7])))))));
                            var_22 *= ((((arr_7 [i_7 - 2]) != 41457)));
                            arr_24 [i_8] [i_1] [i_2] = (-(((12653380680743177380 > 16216586951274277775) ^ 170)));
                        }
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            var_23 = (min(var_23, (~var_5)));
                            var_24 &= 16763;
                        }
                    }
                }
            }
        }
    }
    var_25 = ((~((~((41466 ? 12653380680743177384 : var_13))))));
    var_26 *= ((-2104696208 ? 41449 : 3640605367493171260));
    #pragma endscop
}
