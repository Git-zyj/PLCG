/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((((((((var_14 ? (arr_1 [i_0]) : (arr_1 [i_0 + 1])))) ? ((max(510, -5))) : 16972768083880401216))) ? (((!1473975989829150400) * (var_6 > var_7))) : (arr_3 [i_0 + 1] [i_0] [i_0])));
                arr_5 [18] [18] |= ((((max((arr_4 [i_0 + 1] [4]), (arr_4 [i_0 - 1] [22])))) ? (max((arr_4 [i_0 + 1] [14]), (arr_4 [i_0 - 1] [18]))) : ((1 ? var_15 : (arr_4 [i_0 + 1] [8])))));
                arr_6 [i_1] = (max(var_7, (arr_1 [i_0])));
                var_21 ^= (arr_1 [2]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            {
                var_22 = (max(var_22, (((((!((((((arr_1 [i_2]) + 2147483647)) << (((((arr_3 [i_2] [i_3 - 1] [13]) + 1913387348)) - 15))))))) ? ((((max(var_17, var_0))) ? ((var_7 ? var_4 : (arr_10 [i_2 - 4]))) : (arr_7 [5] [i_3]))) : ((~(((arr_3 [i_3] [i_3] [i_3]) ^ (arr_0 [i_2]))))))))));
                var_23 = 61894;
                var_24 = (max(var_24, (((((arr_9 [i_2 - 4]) | -5))))));
                var_25 = var_8;
            }
        }
    }
    #pragma endscop
}
