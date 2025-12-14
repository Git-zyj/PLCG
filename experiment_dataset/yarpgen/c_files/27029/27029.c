/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((~((4294967295 ? 4294967267 : 6))))) || ((min(12, var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_1 - 2] [i_1] [i_0 - 1] = ((!((max((arr_1 [i_0 - 1]), var_9)))));
                arr_5 [i_0] = ((-(((~var_0) >> var_7))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_3] [i_2 + 3] [i_3] [i_0] = var_9;
                            var_11 = (max(var_6, var_1));
                            arr_11 [i_3] [i_2] [16] [i_1 - 1] [16] [i_3] = (min(var_4, (min((min(29, var_4)), (((-(arr_1 [14]))))))));
                        }
                    }
                }
                arr_12 [i_0] [i_0 - 1] [i_1 - 2] = (min((((!(arr_7 [i_0] [i_1 + 1] [i_1] [12])))), (min((min(var_1, var_6)), (1582611692 || var_5)))));
            }
        }
    }
    var_12 ^= 4294967293;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {

                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    var_13 = ((-(((413500885 ^ 4294967271) ? 37 : (arr_15 [i_4])))));
                    arr_20 [i_4] [i_4] = ((((~(-4 && var_6))) | -4));
                    arr_21 [i_4] [i_5] [i_4] = (arr_16 [i_4] [i_4] [i_6]);
                }
                var_14 = var_2;
                var_15 = (((max(((((arr_2 [i_4]) + var_2))), -var_3)) - (((4192256 + var_3) ? 4290775040 : ((var_5 ? var_3 : 37))))));
            }
        }
    }
    #pragma endscop
}
