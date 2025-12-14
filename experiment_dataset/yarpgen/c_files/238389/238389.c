/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((((~8212) ? -8433675156784218150 : -var_6))) ? var_11 : ((((((var_6 ? var_4 : var_0))) ? var_3 : var_3))));
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_11 [i_2] [i_3] = ((57324 ? -4 : ((max(1, 3)))));
                            var_14 = (min(var_14, ((max((((-var_8 && (arr_5 [i_1 - 1] [i_1 + 2] [i_1 + 2])))), (min((var_8 / var_8), var_5)))))));
                            var_15 = ((~(((arr_7 [i_1 + 1] [i_1 + 2]) ? (arr_1 [i_0] [i_0]) : -16192))));
                            var_16 = ((1 ? 14 : 13627117011779135592));
                        }
                    }
                }
                var_17 ^= ((max((min(57323, 18446744073709551610)), (arr_1 [i_1 - 1] [i_1]))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_19 [i_1] [i_1] [i_1] [i_1] = (max(((0 ? 24334 : 128)), (((!(~var_2))))));
                            var_18 = (min(0, 13627117011779135592));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
