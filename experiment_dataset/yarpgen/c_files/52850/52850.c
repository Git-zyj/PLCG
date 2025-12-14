/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (~-65232);
                var_12 -= (min((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_1]))), (min((arr_2 [i_1]), (arr_2 [i_1])))));
                arr_7 [i_1] = ((min((arr_0 [i_1]), (arr_2 [i_0]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                arr_14 [i_2] [i_3] [i_3] = ((((((((arr_8 [i_3]) ^ 65231))) ? (arr_12 [i_3] [i_2]) : (min((arr_11 [i_2] [i_2] [0]), (arr_13 [i_2] [i_3]))))) - ((max((arr_10 [i_2 - 1]), (arr_12 [i_3] [i_2 + 1]))))));
                arr_15 [i_2] [i_3] = ((-(max(((min(var_10, var_9))), (((arr_11 [i_3] [i_3] [i_2]) ? 32760 : (arr_9 [i_2 + 1])))))));
                arr_16 [i_2] = (((~var_3) ? (arr_9 [i_2]) : (max((((-(arr_11 [i_2] [i_3] [i_3])))), (((arr_11 [i_2] [i_2] [i_2 - 1]) ? (arr_13 [i_2] [i_2 + 1]) : (arr_13 [i_2] [i_3])))))));
            }
        }
    }
    var_13 = (min((~var_5), (((!(var_1 < var_11))))));
    #pragma endscop
}
