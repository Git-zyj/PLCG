/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (~39403);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 += ((15 ? -2 : ((((arr_2 [i_0]) ? var_9 : (arr_2 [i_0]))))));
                var_16 = (((-(arr_2 [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_17 &= (((+((1493003723 ? (arr_0 [4]) : 15)))));
                            arr_11 [i_2] = ((-(arr_4 [i_0])));
                        }
                    }
                }
                var_18 = (min(var_18, (((var_5 ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (((~(arr_5 [i_0] [i_1])))))))));
                arr_12 [i_0] = (min(((((((arr_0 [7]) + 2147483647)) << (((((~var_8) + 70)) - 16))))), ((var_5 ? (max(var_4, (arr_4 [i_0]))) : 3242239578173299085))));
            }
        }
    }
    #pragma endscop
}
