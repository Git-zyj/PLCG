/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(!-109)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_11 = (max(((!((min(var_1, (arr_0 [i_0] [i_0 - 1])))))), ((!((min((arr_0 [i_0] [i_1]), var_0)))))));
                var_12 = (min(var_12, (((((((8247707904254201548 ? 3 : 2147483647))) ? (min(var_5, (arr_3 [i_0] [1]))) : (arr_3 [i_1 + 4] [i_0 + 1])))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_13 = (min(var_13, (arr_0 [i_1 + 1] [9])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 -= (min(((~(arr_8 [i_0 + 1] [i_3 - 1]))), (!-32)));
                                var_15 = var_0;
                            }
                        }
                    }
                }
                var_16 = ((-((2577129418 ? -var_8 : ((-3831959681847445746 ? -8777 : -1758674739))))));
            }
        }
    }
    #pragma endscop
}
