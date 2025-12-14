/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (min(-18446744073709551615, (max((0 | 9), (arr_3 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 = (~63);
                            var_14 = (max(var_14, (((~(min(((12026082403427298779 ? var_0 : var_3)), ((((arr_7 [i_3] [i_0]) & (arr_4 [i_2])))))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 16;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_1] [i_1] [i_4] [i_5] = -11664;
                            var_15 = 18446744073709551615;
                            arr_19 [i_0] [i_1] [i_1] [i_5] = (((!(arr_3 [i_0]))) ? (((var_6 ? (((arr_6 [i_0] [i_1] [i_0] [i_0]) ? 65 : -92)) : 1))) : var_4);
                            var_16 ^= ((((arr_12 [8] [i_4 + 1] [8]) ? var_5 : (arr_10 [i_0] [i_1]))));
                        }
                    }
                }
            }
        }
    }
    var_17 = (var_0 >= var_2);
    var_18 = var_11;
    #pragma endscop
}
