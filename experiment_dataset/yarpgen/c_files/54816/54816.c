/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((-(((arr_3 [i_1]) - var_4))));
                arr_5 [i_1] [i_1] = ((min((arr_1 [i_0] [i_1 - 1]), ((((arr_0 [i_0]) << (((arr_0 [i_0]) - 4131012055))))))) | -4160863512026461949);
                arr_6 [i_0] = (7399022222215069534 ? var_9 : (!var_3));
                arr_7 [i_0] [i_1 - 1] = (max(var_7, (arr_2 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_10 = (min(var_10, (4160863512026461939 > 0)));
                            arr_12 [i_0] [i_0] [i_0] [i_1 + 2] = -7422513445961152263;
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((arr_3 [i_1]) / (arr_3 [i_1 - 1]))) > 4294967294));
                            var_11 = (arr_2 [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_12 &= var_2;
    var_13 = var_5;
    #pragma endscop
}
