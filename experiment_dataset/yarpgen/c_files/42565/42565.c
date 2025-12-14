/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -74;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_13 = (((arr_3 [i_0 - 4] [i_1] [i_1 + 2]) / (arr_3 [i_0 - 4] [i_1] [i_1 - 1])));
                    arr_7 [i_1] = ((-(arr_4 [6] [i_0 - 1])));
                }
                arr_8 [i_0 - 3] [8] |= ((((~((var_8 ? 74 : (arr_2 [i_1 + 4]))))) < ((((((arr_4 [11] [3]) ^ -8196628724587855997)) < (arr_3 [i_0 - 1] [14] [i_0 - 1]))))));
                var_14 = (arr_0 [i_0]);
                arr_9 [i_0 + 1] [i_0] [i_1] = ((arr_2 [i_0 - 4]) ? ((((((arr_6 [i_0 - 1]) ? (arr_2 [i_0]) : var_3)) >> (((arr_2 [0]) - 1388367524))))) : (arr_4 [i_0] [i_1 + 2]));
            }
        }
    }
    var_15 = (((var_3 % -74) ^ (max(var_6, 98))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                var_16 = ((((((arr_12 [i_3]) & 98))) ? (var_9 - 4178075155) : (min((((85 ? 116 : var_11))), (((arr_14 [i_3 + 1]) ? 2949 : var_9))))));
                var_17 |= ((-(arr_12 [i_3 + 1])));
                arr_16 [i_3] = ((~(!3630036954)));
            }
        }
    }
    #pragma endscop
}
