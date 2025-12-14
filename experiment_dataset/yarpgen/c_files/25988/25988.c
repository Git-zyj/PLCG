/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((!(((var_5 ? (~2656528780) : 32761)))));
    var_11 = (~-1781384360);
    var_12 = min((min(62, var_6)), (((min(var_5, var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 *= ((((!((min((arr_0 [i_0]), (arr_3 [5])))))) ? (arr_1 [i_0]) : (((((-(arr_2 [i_1] [i_0] [i_1]))) << ((((arr_2 [i_0 - 2] [i_0] [5]) || (arr_1 [i_0])))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] |= var_4;
                            var_14 += ((var_7 ? var_6 : ((((((arr_5 [i_0] [i_0] [22]) ? -2147483635 : 1781384360))) & 4294967295))));
                        }
                    }
                }
                var_15 = var_3;
            }
        }
    }
    #pragma endscop
}
