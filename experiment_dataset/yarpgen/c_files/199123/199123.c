/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 19;i_3 += 1)
                    {
                        var_21 = (((arr_1 [i_2 - 4] [i_0]) & (arr_5 [i_0 + 1] [i_2 - 2] [i_0])));
                        var_22 = ((var_17 / (arr_1 [i_0] [i_0])));
                        var_23 = arr_8 [i_3] [i_2] [i_0] [i_0];
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_24 = (arr_6 [i_0] [i_0] [i_2 - 2] [i_0 - 1]);
                        var_25 = (min(var_25, (arr_12 [i_2] [i_2] [i_2])));
                        var_26 = ((~(arr_13 [i_2 - 4] [i_2 - 1] [i_2 + 1] [i_2])));
                    }
                    var_27 = (max(var_6, (((!((min(36028797018963967, (arr_9 [i_0] [i_0] [i_0 + 1] [16] [i_0] [i_0 + 1])))))))));
                    var_28 = var_8;

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_29 = (((((((-(arr_6 [i_0] [i_0] [i_2] [i_5]))) - var_12))) - (max((arr_0 [i_2 - 3]), (arr_0 [i_2 - 3])))));
                        var_30 = (((arr_12 [i_2 - 4] [i_1] [i_0 - 1]) >= (arr_12 [i_2 - 1] [i_2 - 1] [i_0 + 1])));
                        var_31 += ((!(arr_12 [i_2 - 2] [i_0 - 1] [i_0 - 1])));
                        var_32 = (((((~((1728768789 << (((arr_3 [i_0 + 1] [i_1] [i_0 + 1]) - 6574412383241307197))))))) ? (-var_2 >= var_13) : ((((arr_13 [i_2 + 1] [i_2 - 2] [i_0 - 1] [i_0 + 1]) == (arr_13 [i_2 - 4] [i_2 - 3] [i_0 + 1] [i_0 - 1]))))));
                        var_33 = (max(var_33, (((var_7 != var_3) * (((arr_13 [i_0 + 1] [i_1] [i_2] [i_5]) ? var_19 : 67108863))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
