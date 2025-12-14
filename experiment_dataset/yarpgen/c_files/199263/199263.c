/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = (max(576459652791795712, ((min(((60 ? 71 : -71)), (arr_6 [i_1]))))));
                    var_18 = (110 < 12756);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_4, -72));
                                var_20 = ((((~(arr_1 [i_1 - 2] [i_2 - 2]))) > (((arr_0 [i_1 - 2] [i_1]) % (arr_0 [i_1 - 2] [i_1 - 2])))));
                                arr_13 [i_1] [i_1 - 1] = var_2;
                            }
                        }
                    }
                    var_21 = (arr_8 [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 - 1] [i_2 - 2]);
                }
            }
        }
    }
    var_22 = var_1;
    var_23 = (min(var_23, 76));
    var_24 = var_5;
    #pragma endscop
}
