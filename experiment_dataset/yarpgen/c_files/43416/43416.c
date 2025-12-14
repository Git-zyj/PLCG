/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] = ((((arr_3 [i_1] [i_1] [i_1]) ? var_11 : (arr_3 [i_1] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [8] [8] [i_3] [i_3] [i_1] |= (~128);
                            var_18 = -117;
                        }
                    }
                }
                arr_13 [i_1] [i_1] [i_1] = (arr_10 [i_1] [i_0] [i_0 + 1] [i_1]);
            }
        }
    }
    var_19 &= (((min(17684166080042250965, 27)) == (((var_9 ? (32764 <= var_0) : ((var_12 ? var_3 : -17719)))))));
    var_20 = var_3;
    var_21 = var_5;
    #pragma endscop
}
