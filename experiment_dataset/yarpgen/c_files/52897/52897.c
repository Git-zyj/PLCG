/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((~var_17), var_10));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [4] [i_1] [i_1] &= (arr_5 [i_0] [i_1] [i_1] [4]);

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 7;i_3 += 1)
                    {
                        var_21 = ((((var_16 * (arr_3 [2] [0])))) ? (arr_6 [i_0] [i_1] [i_0] [i_3]) : (((arr_3 [i_3] [9]) ^ var_3)));
                        var_22 = (min(var_22, (((-(arr_1 [8] [i_1]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
