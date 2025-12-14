/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 ^= ((+((var_4 ? (arr_2 [i_0]) : 125))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 = (max(var_15, (((((arr_5 [i_2 + 1]) + ((max(var_10, -125)))))))));
                                arr_16 [i_4] [i_4] [i_2 - 3] [2] [i_2 - 3] [i_1] [i_0] = ((var_4 ? var_10 : (arr_3 [i_0])));
                            }
                        }
                    }
                }
                arr_17 [i_0] |= ((-((((var_8 ? (arr_9 [6] [6] [6]) : 106)) ^ var_9))));
            }
        }
    }
    var_16 = (((100 >= -99) ? (((((var_6 ? (-127 - 1) : var_3))) ? (var_1 + -100) : (var_2 >= var_1))) : ((((17266 ? var_8 : 90)) + var_12))));
    #pragma endscop
}
