/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (1 == 4710);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_0] = (((((-9223372036854775807 - 1) && 60826)) ? (((arr_3 [i_2 - 1] [0]) ? (arr_0 [i_2 + 1]) : (arr_3 [i_0] [i_0]))) : (min(var_5, (arr_3 [i_0] [i_0])))));
                    arr_9 [i_1] [i_1] = ((min((!1), (4710 < 23))));
                    var_14 = (((~4720) && (((~(arr_5 [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_15 = (min((arr_3 [i_0] [i_1]), ((((233 ? var_12 : var_1)) - 3305528963))));
                                var_16 = -3707496128834582647;
                                var_17 = ((~((-1073741822 ? (arr_6 [i_1 - 2] [i_2 - 1] [i_3 - 2]) : ((min(3305528956, 3305528963)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
