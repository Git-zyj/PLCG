/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48141
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_9 <= (min(var_4, var_5))));
    var_15 = (max(var_15, ((max(((var_12 ? ((max(1, var_2))) : -var_6)), var_1)))));
    var_16 = (min(var_16, (((((var_5 + ((var_1 ? var_3 : var_4)))) < (((max(61, var_7)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [11] = (!0);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_17 = (arr_0 [i_0]);
                                arr_14 [i_1] [i_1] [i_1] [i_1] [0] &= (+(((arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (arr_6 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (arr_10 [i_2 - 1] [i_2 - 1] [1]))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 9;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_18 &= ((~((((56 == (arr_13 [1] [1] [i_5] [i_5 - 2] [1])))))));
                            var_19 = ((-(arr_4 [i_0] [1] [i_6])));
                            var_20 = arr_10 [i_0] [i_1] [i_5];
                        }
                    }
                }
            }
        }
    }
    var_21 = (!(((var_1 ? var_8 : var_3))));
    #pragma endscop
}
