/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_18 = ((((((((var_8 ? (arr_0 [i_0 + 2]) : var_3))) + ((~(arr_1 [i_2] [i_3])))))) < (max(var_15, (max(5385789070253656750, -23584))))));
                        var_19 = (min(var_19, ((min(var_12, 25005)))));
                        var_20 -= 10364071302785041707;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            {
                                arr_15 [i_0 + 2] [i_1] [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = 2798232356;
                                arr_16 [i_1] [i_1] = (arr_0 [i_4]);
                            }
                        }
                    }
                    arr_17 [i_1] = (max((arr_7 [i_1] [i_1]), (((min((arr_12 [1] [i_2]), (arr_6 [3] [i_1] [i_2])))))));
                }
            }
        }
    }
    var_21 |= (((((11714 ? -9973 : 71)) == 239)));
    var_22 |= ((var_6 ? (var_11 & 58714) : 700367296));
    #pragma endscop
}
