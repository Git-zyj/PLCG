/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = -342;

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [2] = -21154;
                                var_21 *= (arr_13 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_2] [i_3] [i_4]);
                            }
                        }
                    }
                    var_22 = min((max(16773120, (arr_12 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_2] [i_2]))), (((min(128, (arr_1 [i_0] [i_0]))))));
                    arr_17 [10] [i_0] [i_2] = (--5847590794373873421);
                    var_23 = (((arr_9 [1] [i_0 - 3] [1]) / (max(128, (((arr_8 [0] [i_0] [i_0]) ? (arr_8 [i_2] [i_0] [i_0]) : (arr_11 [i_0] [i_1] [10] [i_2])))))));
                }
            }
        }
    }
    var_24 = ((+(min((2067461167 <= 1), ((var_11 ? var_5 : 1))))));
    #pragma endscop
}
