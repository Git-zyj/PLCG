/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((-798170742 / 2044432709) < (var_6 & var_7))) ? var_1 : ((var_1 - (-701088962749453266 != var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 = ((((((var_0 && (arr_0 [i_0 - 2]))))) >= -5492148036083065301));
                var_12 += (max((((arr_3 [i_0] [i_0 + 4]) & 3516600454143522932)), (min((arr_2 [i_0 + 2]), (arr_3 [i_0 + 2] [i_0 + 4])))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_13 = ((~(((arr_0 [i_0 - 2]) & (arr_0 [i_0 + 3])))));
                            var_14 = (((-(var_1 || var_2))));
                            var_15 = (((((3852621045 / (arr_4 [i_0 - 1] [i_1] [i_2 + 1] [i_1])))) + 96));
                        }
                    }
                }
                var_16 = (-var_0 - var_4);
            }
        }
    }
    var_17 |= ((var_3 <= (((1124137874672297211 << (var_0 - 710862109))))));
    #pragma endscop
}
