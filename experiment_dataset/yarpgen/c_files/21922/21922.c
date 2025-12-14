/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_8 [i_3] [i_3] [i_1] [i_1] [2] = (max((~3908675611), ((25477 ? 64 : (arr_2 [i_1])))));
                        var_18 = (!var_13);
                        arr_9 [i_0] [i_0] [i_0] [i_1] = (191 <= 536869888);
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        var_19 = ((8388096 ? 1040187392 : 9105));
                        var_20 = (min(var_20, (((-(!192))))));
                        arr_13 [2] [i_1] [i_2] = ((-((187 ? -116 : 19342))));
                        var_21 = (min(var_21, (!1248016820)));
                    }
                    var_22 = (~2027755830);
                    var_23 = (min(var_23, ((((~1) || (((~((401700784 ? var_2 : 82))))))))));
                    arr_14 [i_1] = ((((0 ? (arr_2 [i_1]) : (arr_4 [i_2] [1] [13]))) == -7919));
                    var_24 += (211 || 82);
                }
                var_25 = var_16;
            }
        }
    }
    var_26 = (((((~(79 > -16384)))) && (((1430258223 <= var_10) > (~var_15)))));
    var_27 |= var_3;
    var_28 = var_14;
    #pragma endscop
}
