/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_11 = ((((min((((arr_4 [i_1]) | (arr_1 [i_0] [i_1]))), ((max((arr_0 [i_0 - 2]), (arr_4 [i_0]))))))) ? (((((260616021 >> 1) >= (((arr_1 [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_4 [i_0]))))))) : ((((((arr_0 [i_0]) ? (arr_2 [i_0 + 1] [4]) : (arr_0 [i_1])))) ? (((arr_3 [1] [1] [1]) ? 458986299 : 16376469572601831878)) : ((((arr_5 [i_0] [i_0] [i_1]) ? (arr_2 [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0]))))))));
                var_12 = ((458986286 ? (((255 ^ ((1 | (arr_5 [i_0] [i_1] [i_1])))))) : ((max(16376469572601831853, 49)))));
                arr_6 [i_0 - 2] [i_0] [16] = max((((arr_1 [i_0 - 1] [i_0 + 2]) ? (arr_1 [i_0 + 1] [i_0 - 1]) : (arr_3 [i_0] [15] [i_0 - 1]))), (arr_4 [i_1]));
            }
        }
    }
    var_13 = ((((var_9 <= var_0) ? var_2 : (var_0 ^ var_9))) != var_2);
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_14 = (max((arr_2 [i_3] [i_3 + 1]), (arr_2 [i_2] [i_3 + 3])));
                    var_15 -= (arr_1 [i_3] [i_4]);
                }
            }
        }
    }
    var_16 = (var_5 - var_5);
    #pragma endscop
}
