/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_10 = (max(((((var_7 << (((arr_1 [i_0]) - 26144)))))), var_0));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_11 ^= (((((((((arr_7 [i_2]) ? var_0 : 19785))) ? var_7 : ((var_4 ? var_3 : 19785))))) <= (min(((var_5 ? var_1 : var_0)), ((var_8 ? (arr_5 [20] [i_3 - 1]) : (arr_0 [21])))))));
                            var_12 |= (((84 || 599461522) > ((((arr_2 [i_0]) == (arr_7 [i_3 + 1]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 17;i_6 += 1)
            {
                {
                    var_13 = var_0;
                    var_14 = (min(var_14, ((((((var_5 ? (arr_5 [i_5] [i_5]) : (var_6 - var_4)))) ? (((96 ? (arr_8 [i_4 + 2] [i_4 - 1] [1] [i_6 - 1]) : (arr_8 [10] [i_4 - 2] [i_5] [i_6 - 1])))) : (((((-(arr_20 [10])))) | (arr_16 [i_5] [i_6 - 2]))))))));
                }
            }
        }
    }
    var_15 = ((((var_9 ? var_6 : 42418)) > ((max(7936, var_8)))));
    var_16 = ((var_5 ? var_7 : var_0));
    #pragma endscop
}
