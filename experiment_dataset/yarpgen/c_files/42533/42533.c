/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((-(max(752934519, -752934520)))), -752934520));
    var_12 = (max(var_12, var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = ((+(max((arr_6 [i_1]), (arr_6 [i_0])))));
                var_14 = ((var_1 ? 65 : (1128915703 * 1)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_15 = (arr_3 [i_2]);
                    arr_11 [i_0] [i_1] [i_2] = -66;
                    var_16 = (max(var_16, (arr_7 [i_1] [i_0])));
                    var_17 = var_10;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_18 = (184 ^ -65);
                    var_19 = (max(var_19, ((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_1]))))));
                    var_20 = (arr_9 [i_0]);
                    var_21 = (752934520 > -752934520);
                }
                var_22 = (max(var_22, (((-66 ? ((((var_5 ? var_5 : (arr_4 [i_0] [i_0]))) | (((!(arr_14 [i_0] [i_1] [i_1])))))) : ((~(var_2 < var_4))))))));
            }
        }
    }
    #pragma endscop
}
