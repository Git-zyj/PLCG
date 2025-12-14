/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (-1632390355 | var_5);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0 + 2] [i_0] [i_1] = ((~3431) ? (min((!var_3), 1136061393)) : (max((((!(arr_4 [i_0] [i_0] [10])))), ((var_4 ^ (arr_2 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_11 = 1136061393;
                            arr_13 [i_1] [i_1] = min(((min((arr_0 [i_2 + 1] [i_3]), (arr_10 [i_1 - 1] [i_2 + 3] [i_2 + 3] [i_0 - 2] [i_2 - 1])))), (min((min((arr_3 [i_2 + 2] [i_1]), (arr_2 [i_0] [i_0]))), var_5)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_12 = ((((~(arr_3 [i_0 - 3] [i_1 - 1]))) / (((arr_3 [i_0 - 3] [i_1 - 1]) ? (arr_3 [i_0 + 2] [i_1 - 1]) : (arr_3 [i_0 - 1] [i_1 - 2])))));
                            arr_20 [i_1] [i_4] [i_1] [3] [i_1] [i_1] = ((-(arr_8 [i_0] [i_1] [i_1] [i_1])));
                        }
                    }
                }
            }
        }
    }
    var_13 = var_0;
    #pragma endscop
}
