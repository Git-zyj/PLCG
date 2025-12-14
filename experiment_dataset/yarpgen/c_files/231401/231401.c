/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 &= (max((((!(((arr_2 [i_0]) != 84))))), (((arr_0 [i_0]) ? ((((arr_1 [i_0]) ? 56 : (arr_0 [i_0])))) : 0))));
        arr_3 [i_0] = 13780088460096197927;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_13 = (((var_5 >= (arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2]))) ? (max((arr_0 [i_0]), (max(4, (arr_0 [i_0]))))) : (arr_0 [5]));
                        arr_12 [i_3] [i_1 + 1] [i_2] [i_3] [i_3] = (arr_10 [i_0] [i_0] [i_2] [6] [i_3]);
                        arr_13 [i_0] [i_0] [i_0] [i_2] [i_2 + 1] [i_2] = 6937862110449842322;
                        arr_14 [i_0] [i_0] [i_1] [i_2] [i_0] |= (((arr_0 [i_0]) && (arr_5 [i_1] [0] [i_3])));
                    }
                }
            }
        }
        arr_15 [i_0] = (((((max((arr_5 [i_0] [i_0] [i_0]), var_10)))) ? ((var_8 >> ((((var_10 ? 13780088460096197956 : (arr_2 [i_0]))) - 13780088460096197929)))) : (((!((max(var_11, 13780088460096197959))))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                arr_21 [i_4] [i_4] [i_5] = ((((~(max(var_3, var_8)))) & 31202));
                var_14 *= ((+((((arr_18 [i_5]) - var_3)))));
            }
        }
    }
    #pragma endscop
}
