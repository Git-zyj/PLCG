/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_1));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((var_13 * (arr_0 [i_0]))))));
                var_18 = ((((-((max(0, (arr_1 [i_0] [i_1])))))) != var_8));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_19 = ((((min(294809091116624990, 3104423802792617146)) ? (((-(arr_6 [i_0] [11] [i_4])))) : ((1212640951678273454 / (arr_13 [i_0] [i_0] [i_1]))))));
                                var_20 = var_3;
                                var_21 = max(-3104423802792617157, 1);
                            }
                        }
                    }
                }
                arr_14 [i_0 - 1] [i_1] [i_1] = (arr_8 [i_1]);
            }
        }
    }
    var_22 = 1;
    #pragma endscop
}
