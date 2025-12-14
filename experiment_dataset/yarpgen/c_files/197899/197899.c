/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_14 = ((~(((((~var_4) + 2147483647)) << (!1584103758)))));
                            var_15 = (((((~(var_1 ^ -27968)))) & ((~(arr_10 [i_1 - 2] [i_0])))));
                            arr_11 [i_0] [i_1 - 1] [i_2] [i_0] [i_3] = ((~((~(arr_7 [i_0] [i_1 - 1] [i_1 + 1])))));
                            var_16 -= (27967 / var_0);
                        }
                    }
                }
                var_17 ^= ((-8471339204322996348 / (((~(((arr_2 [17] [i_1]) & (arr_3 [i_0] [15]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            {
                var_18 = ((+(((!8471339204322996348) * -27968))));
                var_19 = (((-(arr_7 [i_5] [i_5] [19]))));
                var_20 ^= ((var_11 > ((((var_7 && (arr_7 [10] [i_5] [i_5])))))));
            }
        }
    }
    #pragma endscop
}
