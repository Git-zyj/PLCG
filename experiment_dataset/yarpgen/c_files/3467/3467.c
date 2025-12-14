/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((!24638) ? 22481 : ((var_9 ? var_8 : var_15))))) ? 3057437857 : ((((3368839815 < 3276803831) << (!var_9)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (max((-32767 - 1), 3072));
                    arr_10 [i_0] [i_0] = ((+(((arr_0 [i_0 + 3]) >> (var_1 + 7922)))));
                    var_20 = var_3;
                    arr_11 [i_2] [i_2] [i_1] [i_0] = 1990469261;

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        var_21 = 1178;
                        var_22 = ((32752 ? var_9 : (!31337)));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                    {
                        var_23 = (((arr_13 [i_1 - 1] [i_0 - 2] [i_0 - 2]) ? 17080 : (((arr_3 [i_2]) / (arr_0 [16])))));
                        arr_16 [i_0] [i_1] [i_0] [i_4] [i_1] [i_2] = 3;
                        arr_17 [i_0] [9] [i_0] [i_4] = var_2;
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        var_24 = min(2041966176, (((arr_18 [i_5] [i_5] [i_0 + 1] [i_5]) ? var_9 : 1331660694)));
                        arr_20 [i_5] [17] [i_2] [i_2] = ((((((arr_6 [i_1 - 2] [i_1] [i_1 - 1] [i_1]) * (arr_6 [i_1 - 1] [i_1 - 1] [i_1 + 1] [12])))) ? (((arr_14 [i_0] [i_1] [4] [i_5]) >> (!3020551053))) : ((((!((max(3015302011, (arr_14 [i_5] [i_2] [14] [i_0]))))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
