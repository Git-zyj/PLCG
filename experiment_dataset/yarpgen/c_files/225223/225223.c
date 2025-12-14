/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((~(max(((var_7 ? var_0 : (-9223372036854775807 - 1))), (((var_11 ? var_3 : var_0)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] [i_3] [i_2] [1] [i_0] = ((((((var_9 - 29) >> 8))) & ((((-117 ? 1 : -3591166518618139275)) & (var_1 == var_4)))));
                                var_12 ^= ((((6 && (arr_11 [i_1] [3] [i_1 - 1] [i_1] [i_1]))) ? (((!(arr_4 [7] [i_1 + 1])))) : (max(var_9, 215))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_25 [i_7] [i_7] = (((((((0 * (arr_2 [i_0] [i_6])))) ? (arr_18 [i_7 + 1]) : (3042535761 | 34))) > ((((((-(arr_13 [i_7] [0] [15])))) ? (((arr_2 [i_6] [i_7]) ? var_4 : var_3)) : (444 - var_5))))));
                                arr_26 [i_0] [17] [i_5] [i_5] [i_5] [i_7] [i_7] = (((((((var_0 ? 6793360632979856369 : (arr_16 [i_0]))) + 0))) ? -var_4 : ((((max((arr_19 [i_7] [i_6] [i_5] [i_1] [1]), 9063801290926473446)) < 189)))));
                            }
                        }
                    }
                }
                arr_27 [i_0] = var_10;
            }
        }
    }
    var_13 ^= var_4;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            {
                var_14 = (+-3685632513968984414);
                var_15 = (max(var_15, (((((((124 ? 251 : -7508192627341353777)))) ? ((~((29 ? 18 : 18446744073709551607)))) : ((((min(85, -112))) ? (~18) : 255)))))));
            }
        }
    }
    var_16 &= (((-5684231212301712559 / 8575188126176739317) & var_10));
    var_17 |= (((((12 ? 87 : -1120293376))) ? 9223372036854775805 : 18446744073709551615));
    #pragma endscop
}
