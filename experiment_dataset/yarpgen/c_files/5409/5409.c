/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (~var_6);
    var_21 = (max((~var_7), var_11));
    var_22 = (1125899906834432 ? 944133573237798038 : -1125899906834418);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] = ((((min((arr_4 [i_0 + 1] [i_1]), (arr_4 [i_0 + 2] [12])))) * (arr_0 [i_0] [i_1])));
                    var_23 = ((((max(((var_19 ? -1125899906834449 : 1)), (arr_1 [i_0 - 2]))) + 9223372036854775807)) << (((arr_3 [i_0 + 2] [i_1] [i_0 - 1]) / 1125899906834434)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [14] = ((((max((((~(arr_12 [i_0 + 3] [i_0] [1] [i_3] [i_3] [i_2] [i_1])))), 1125899906834432))) ? (max((max(1125899906834449, (arr_14 [i_0] [i_1] [i_2] [i_3] [i_4]))), (arr_2 [i_0 + 1]))) : (-1125899906834420 > -1125899906834436)));
                                var_24 = (((((arr_0 [i_0] [i_0 - 1]) | (arr_0 [i_0] [i_0 - 3]))) << (!var_19)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
