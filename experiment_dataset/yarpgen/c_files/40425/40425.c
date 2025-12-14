/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_11 [i_0] = (4186206229 + 1);
                    var_18 = (min(var_18, (((14652996000955487554 ? 1 : 1)))));
                    arr_12 [i_0] [i_1] [i_2] = ((((((arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 1])))) || ((((3161799147 == 2147483634) + var_4)))));
                    arr_13 [i_0] [i_0] [i_2] [i_2] |= (((((arr_4 [i_0] [i_1 + 1]) / (arr_4 [i_0] [i_1 + 1]))) == var_15));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    var_19 = ((((125 << (var_14 - 1468494808))) - (((((arr_16 [i_3] [i_4 + 1] [i_5]) ? var_2 : 228)) * (0 - 21612)))));
                    arr_21 [i_5] = -1;
                    arr_22 [i_5] = ((var_3 - ((-10982 ? ((962047401 ? 1 : 140737488338944)) : 240))));
                    var_20 = (max(var_20, ((max((65535 % 245), 3268641283)))));
                }
            }
        }
    }
    #pragma endscop
}
