/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_14;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_21 = (2693506347 - 0);
        var_22 = (min(var_22, ((((106 > -26345) + (max(var_19, (var_3 >> 6))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_23 ^= (!-0);
                            var_24 = 18446744073709551615;
                        }
                        arr_13 [i_0] [i_2] [i_1] [i_2] [i_3] [i_3] = (((((12375 ? -1054456465 : -171923359))) ? var_15 : (max(((1 >> (-26345 + 26353))), -829363434))));
                        arr_14 [i_2] [i_2] [i_0] = (max(48725, (((max(18446744073709551615, 1)) >> (35768 - 35756)))));
                        arr_15 [i_2] [0] [i_2] [i_3] [i_2] = (max(((0 ? 6 : 332913305)), ((var_13 ? var_19 : 6))));
                    }
                }
            }
        }
        var_25 = (((((var_10 ? -585837629 : 171923327))) ? ((0 ? 21569 : 37177)) : -81));
    }
    var_26 = var_9;
    #pragma endscop
}
