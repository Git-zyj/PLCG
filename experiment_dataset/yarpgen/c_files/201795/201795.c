/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 -= (min(54914, 12416846296357675689));
                arr_6 [i_0] = (((((12416846296357675687 ? (arr_4 [i_0 - 2]) : (arr_4 [i_0 - 2])))) ^ (((arr_4 [i_0 - 1]) ? (arr_4 [i_0 - 2]) : var_12))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_10 [i_0] [i_0] [i_0] [2] = var_1;
                    var_21 = (arr_5 [8] [i_1] [i_0 + 1]);
                    arr_11 [i_0] [i_1] |= (!31421);
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    var_22 = var_1;
                    var_23 = ((min((((2147483647 ? -1 : 1))), ((-30733 ? 12 : 1)))));
                    arr_14 [i_0] [i_3] [i_3] = max(((((6029897777351875904 | var_15) != (arr_0 [i_0 + 1])))), (((((arr_12 [i_0] [i_1] [i_1]) - var_9)) - -var_0)));
                    var_24 = ((var_0 ? (((arr_9 [i_1] [i_3]) ? (arr_3 [i_0] [13] [i_0]) : (arr_9 [i_1] [i_3]))) : (((max(var_10, 0))))));
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_18 [i_0] [i_0 + 1] [i_1] [i_4] = ((-22907 && 7) ? ((var_17 ? ((var_1 ? -1089953411 : var_17)) : ((var_14 << (-2113040865130409734 + 2113040865130409763))))) : (((arr_12 [i_0 - 2] [i_0] [i_0 + 1]) >> (9223372036854775807 - 9223372036854775778))));
                    var_25 = (arr_0 [i_1]);
                }
                arr_19 [i_0] [2] [i_0] = (max((((-26828 ? 96 : 921637721))), (((max(1152921503533105152, 6029897777351875929)) * (((min(var_0, var_4))))))));
            }
        }
    }
    var_26 = ((var_15 << (((var_0 + 8774) - 17))));
    var_27 = var_9;
    #pragma endscop
}
