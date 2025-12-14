/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((!2986629625) ? ((max(3, var_14))) : (var_5 < var_15))) >> (((var_9 | var_2) + 52))));
    var_18 = (4497994111736226242 << var_3);
    var_19 = (max(((((~var_3) & var_16))), (max((var_5 + 4619700933421147574), var_15))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((-var_15 + ((var_14 ? var_0 : 1780862007)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_21 = (((60 + (7276252855053513297 - 1308337660))));
                            var_22 = (max((((arr_5 [i_2] [i_1] [i_2] [i_2]) ? var_15 : (arr_5 [i_0] [i_1] [i_2] [11]))), (2986629633 - var_3)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_23 ^= (var_5 ^ var_8);
                            arr_16 [i_0] [i_1] [i_4] [i_4] [2] [i_5] = (max(((-1 | (var_0 & 16382))), (((!((((arr_12 [i_0] [i_1]) ? var_16 : (arr_14 [i_0] [i_0] [i_0] [1] [i_4] [1])))))))));
                            arr_17 [i_1] [i_1] [i_4] [i_4] = ((var_9 != ((((var_16 - var_8) || ((min(1468682333, (arr_7 [i_0] [i_1] [i_1] [i_1] [1] [i_1])))))))));
                            var_24 = (arr_10 [i_5] [7] [i_1] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_25 = ((max(var_5, ((min(var_6, var_15))))));
    #pragma endscop
}
