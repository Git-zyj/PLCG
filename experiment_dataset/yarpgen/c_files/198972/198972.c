/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_19 -= 2498164612;
                    var_20 ^= (65138 - 5);
                    var_21 = -18569;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_22 = ((((((arr_3 [7]) ? 397819444894086243 : 18570))) ? 1 : -92));
                                arr_14 [i_0] [i_0] [9] [4] [i_0] = ((!(400 + -419307433)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 ^= -22492;
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 16;i_6 += 1)
        {
            {
                arr_19 [i_5] = 1376178442;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_24 = ((((((max(3926273808, 522286689))) / (min((arr_17 [0]), -18568)))) ^ ((((1 <= (arr_7 [i_5] [i_6 + 2])))))));
                            var_25 -= (((((-419307433 - ((-22492 ? (arr_5 [i_5]) : 0))))) ? ((~(arr_7 [i_6] [i_6]))) : ((((arr_21 [i_5 + 1] [i_5 - 1]) ^ 41)))));
                            var_26 += -6;
                            var_27 = (max(var_27, 522286685));
                        }
                    }
                }
                var_28 = 62040;
                var_29 ^= (1 > -114);
                arr_25 [1] [i_6] |= ((((1 != ((1 ? 1 : (arr_17 [i_5]))))) ? 0 : (max(18446744073709551607, 1))));
            }
        }
    }
    var_30 = ((~((var_15 << (((((var_6 * -5988233865881103651) + 5988233865881103673)) - 16))))));
    #pragma endscop
}
