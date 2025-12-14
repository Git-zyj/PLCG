/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_1] = ((2490906582919846172 | (((-((-(arr_8 [i_1] [i_1] [0]))))))));
                            arr_11 [5] [1] [i_2 - 1] [i_1] [i_3 + 1] [i_3 + 1] = (max(((((arr_6 [i_2 - 1] [i_1] [i_2]) < var_9))), 788236517));
                            var_10 = arr_8 [i_1] [i_2] [i_3 + 1];
                            var_11 = min((((-(min((arr_1 [i_0] [i_3]), 2))))), -var_1);
                        }
                    }
                }
                var_12 = (arr_9 [i_0] [i_1] [i_0]);
                arr_12 [i_1] [i_1] [11] = (((((-(min(1, (arr_0 [i_1])))))) & ((~(max(2500753223, 5865667299529389482))))));
                arr_13 [i_1] [i_1] = ((-(((arr_4 [1] [i_1]) ? -40 : (arr_5 [i_0] [i_0] [0])))));
            }
        }
    }
    var_13 = (((((3002387806 ? 2 : 16554774206332115501))) ? (max(var_7, var_0)) : ((min(var_9, -1502709797)))));
    #pragma endscop
}
