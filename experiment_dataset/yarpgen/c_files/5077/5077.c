/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (~var_8);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_17 = (arr_3 [i_0] [i_1] [i_0]);
            var_18 = (arr_0 [i_0] [i_1]);
            var_19 = 3160394887808810092;
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_20 = (((arr_5 [i_0] [i_1] [i_2] [i_1]) || var_9));
                            arr_15 [i_0] [i_3] [i_1] [i_3] [i_2] = ((!(arr_5 [i_0] [i_1] [i_2] [i_1])));
                            var_21 *= (((((arr_13 [i_0] [i_4] [i_2] [i_0] [15]) && var_13)) ? 132 : 6473224025716042792));
                            var_22 ^= (arr_14 [i_2]);
                        }
                    }
                }
            }
            arr_16 [i_0] [i_1] [i_0] &= 45;
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            var_23 = var_3;
            var_24 = 15307;
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            var_25 = 3284;
            var_26 = 1263355685;
            var_27 = 24610;
            var_28 ^= 172;
        }
        var_29 = (max(var_29, (arr_3 [i_0] [i_0] [i_0])));
        var_30 = (max(var_30, 50));
    }
    var_31 = ((var_2 ? (((min(var_5, 0)))) : ((var_4 & (((min(var_1, var_11))))))));
    #pragma endscop
}
