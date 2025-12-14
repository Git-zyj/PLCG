/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234354
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = ((4261811253 ? ((((~var_12) ? var_4 : (arr_3 [i_0] [19])))) : (max((max(4294967295, (arr_0 [i_0] [i_1]))), -6677))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_0] [i_3] = (((((7769 * (arr_8 [i_0] [i_2 - 2] [i_0]))) & (arr_12 [i_0] [i_1] [i_2 - 2] [i_2 - 2] [i_3] [i_3]))));
                            arr_14 [11] [i_1] [i_0] [i_2] [i_3] = ((~(((arr_12 [7] [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 2] [1]) / (arr_12 [i_1] [i_2 + 2] [i_2] [i_2 + 2] [i_2 + 1] [i_2 - 2])))));
                            var_18 = (i_0 % 2 == 0) ? (((!0) % (((((511 ? -32762 : 33156049))) ? (arr_8 [i_0] [i_1] [i_0]) : 501)))) : (((!0) * (((((511 ? -32762 : 33156049))) ? (arr_8 [i_0] [i_1] [i_0]) : 501))));
                        }
                    }
                }
                var_19 = (max(var_19, (((((((-var_11 == (max(4261811242, 511)))))) < (min((((arr_5 [i_0] [4]) ? var_0 : 4261811253)), (((arr_2 [i_0]) ? 33156056 : 22276)))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                arr_20 [i_4] = ((arr_12 [i_5] [i_5] [i_5] [i_5] [i_5] [i_4]) ? ((((arr_16 [i_4]) == var_10))) : var_12);
                var_20 &= 1;
            }
        }
    }
    var_21 = var_8;
    var_22 = ((min((390142227958434460 / 106), var_13)));
    #pragma endscop
}
