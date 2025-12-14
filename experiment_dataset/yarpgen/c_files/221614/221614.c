/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [i_3] [i_2 - 2] [i_3] [i_3] = 137;
                            var_17 = ((~((max(((max(var_12, var_11))), (arr_2 [i_0]))))));
                            var_18 = (max(var_18, ((min((max((arr_6 [i_0] [i_0] [i_0]), -389757468)), ((min((arr_7 [i_0] [i_0] [i_0] [i_0]), var_7))))))));
                        }
                    }
                }
                var_19 = (max(-389757451, (arr_4 [i_0])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_20 = arr_0 [i_0] [i_0];
                            var_21 = (min(var_21, var_3));
                            var_22 = 40538;
                        }
                    }
                }
            }
        }
    }
    var_23 |= (var_10 ? var_0 : ((((min(var_2, var_14))) ? 1119311865850681067 : ((var_0 ? 11461816226908287647 : var_4)))));
    var_24 = var_7;
    var_25 = (min((max(var_11, 977677430)), var_7));
    var_26 = var_7;
    #pragma endscop
}
