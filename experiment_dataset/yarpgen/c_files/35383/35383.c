/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= 12701816818936682116;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_17 ^= ((((arr_0 [i_1]) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_0 [i_0]))) | (((((arr_3 [i_0] [i_0] [i_0]) && (arr_3 [i_0] [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_18 ^= (((arr_6 [i_0] [i_0]) != (arr_5 [i_0] [20] [i_3])));
                            var_19 = (arr_2 [i_2] [i_2]);
                            var_20 = (((arr_9 [i_0] [i_2] [i_3]) ? 15 : ((min(((((arr_4 [i_0]) || -7219226019934253505))), (arr_6 [i_0] [i_2]))))));
                            arr_10 [i_0] [i_2] [i_1] [i_2] [i_3] = ((!((max((arr_9 [i_0] [i_2] [i_3]), (arr_9 [i_0] [i_2] [i_0]))))));
                            var_21 = ((var_15 ? (min((min((arr_2 [i_1] [i_2]), (arr_6 [i_0] [i_2]))), (((var_4 ? (arr_1 [i_2]) : (arr_0 [i_1])))))) : (arr_0 [i_3])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
