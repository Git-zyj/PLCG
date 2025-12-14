/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((!(((((var_8 ? 18446744073709551615 : 7138177918124887581)) ^ (((var_6 ? var_7 : -5504221035673083180))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_11 ^= ((!(((1 ? ((min((arr_1 [i_0]), 1))) : (arr_3 [8]))))));
                var_12 = (min(((~(((1 > (arr_4 [i_0])))))), var_0));
                var_13 = ((((arr_2 [i_0]) < (arr_2 [i_0]))));
                var_14 = (min((min((arr_2 [i_0]), (arr_2 [i_0]))), ((33895 > (arr_1 [8])))));
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, ((max(-5504221035673083208, 1073741823)))));
                                arr_13 [i_0] [i_0] [i_2] [i_3 + 1] [i_4] = ((min((arr_2 [i_0]), -12)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
