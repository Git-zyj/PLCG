/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += 3954055059;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 ^= (((arr_3 [i_0]) ? ((~(~var_4))) : ((((((arr_6 [i_1] [i_1] [i_1] [i_0]) ? var_11 : (arr_5 [i_0] [i_0] [i_2] [i_1]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [4] [i_3] [7] [i_1] = ((~(((~var_3) * ((var_6 ? var_6 : (arr_8 [2] [i_1] [i_2 + 1] [6] [i_4])))))));
                                var_16 = ((~(((((~(arr_3 [i_1])))) % (arr_0 [i_0])))));
                                var_17 *= (~53);
                                var_18 = ((((((((arr_6 [i_1] [i_1] [i_1] [i_1]) | (arr_6 [i_0] [i_1] [i_2] [i_1])))) * 101)) * (((((var_6 && (arr_6 [i_1 + 1] [i_2] [i_3] [i_1]))))))));
                                var_19 = ((~(arr_7 [i_1] [i_1])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
