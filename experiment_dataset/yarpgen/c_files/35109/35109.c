/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_2] = ((((104 ? 96 : 512)) < ((50856 >> (!2306)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_12 = ((((~(arr_8 [i_2] [i_2] [i_2]))) >= (25165824 * var_7)));
                                var_13 = ((((max(var_9, var_5)))) ? (25165813 + 2940546721620114688) : (((-25165830 ? (max((arr_0 [i_0]), -25165833)) : var_1))));
                                var_14 = (arr_6 [i_0] [i_1]);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_2] = ((((-3974725480221278492 + (arr_7 [14] [14] [i_2]))) >= (arr_2 [i_1])));
                            }
                        }
                    }
                    var_15 = ((+(((arr_1 [i_0]) ? (arr_1 [i_0]) : -25165824))));
                }
            }
        }
    }
    var_16 = ((-((25165847 ? var_11 : -25165831))));
    #pragma endscop
}
