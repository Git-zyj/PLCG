/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= (((min((min(2406352443120845182, var_8)), (min(-4661871522674436520, -7473464271206463199)))) / (((var_1 % -7473464271206463191) / (var_0 * var_12)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [18] |= (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((max(((var_1 % (arr_0 [10]))), (arr_0 [9]))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            arr_17 [i_4] [i_4] [i_0] = (min((71 / 39), ((var_5 ? (arr_14 [8] [0] [0] [i_4 + 1] [i_0]) : (arr_15 [i_4] [i_4] [i_4 + 1] [i_4 - 2] [i_4] [i_4 + 1] [i_4])))));
                            var_14 = (!-217);
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_15 = ((~(~39)));
                            arr_20 [i_0] [i_1] [i_0] [i_0] [i_5] = var_2;
                            var_16 = ((~((((min(var_7, var_2)) == (min(var_6, var_1)))))));
                        }
                        var_17 = (max(((((arr_8 [i_0] [i_1] [i_2] [i_3]) ? var_4 : (((arr_0 [i_3]) + 7473464271206463197))))), ((((((arr_18 [i_0] [i_1] [4] [i_2] [4] [3] [i_0]) ? var_6 : (arr_10 [i_0] [i_1] [11] [i_3])))) - (arr_1 [i_0])))));
                    }
                }
            }
        }
    }
    var_18 = -var_11;
    #pragma endscop
}
