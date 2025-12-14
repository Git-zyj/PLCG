/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= (((((min(var_11, var_13))) & 16586658586071659473)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = ((1860085487637892143 ? 16586658586071659473 : 16586658586071659465));
        var_19 = (min(var_7, (arr_2 [i_0] [1])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_20 -= var_8;

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                var_21 = (((arr_5 [i_1] [i_1]) >> (((((arr_3 [1] [12]) & var_14)) - 758399210447317057))));
                var_22 = 1860085487637892142;
            }
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_23 = ((51 + ((var_11 ? var_2 : var_13))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_24 = 0;
                            var_25 ^= (arr_16 [i_0] [i_0] [i_0] [i_4] [i_0]);
                            var_26 = (max(var_26, (((((((arr_7 [i_0] [7] [i_0] [i_0]) ? var_5 : var_9))) ? ((var_16 / (arr_13 [i_1 + 1] [i_3] [i_4] [i_5]))) : (((var_5 & (arr_15 [i_0] [i_1] [i_4] [i_4] [i_4] [i_5])))))))));
                            var_27 = (arr_13 [i_0] [i_0] [i_3] [i_4]);
                        }
                    }
                }
                arr_18 [i_1] = var_0;

                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    var_28 ^= (arr_16 [i_0] [i_0] [i_1] [i_0] [i_6]);
                    var_29 &= 4005311865;
                    var_30 += ((!(arr_13 [i_1] [i_1] [i_3] [i_6 - 1])));
                }
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    var_31 &= (((((arr_2 [i_7] [i_1]) * var_7)) >> (!var_11)));
                    var_32 = (max(var_32, (arr_16 [i_1] [i_1] [i_1 + 1] [i_3] [i_1 + 1])));
                }
                var_33 = var_2;
            }
            var_34 = (min(var_34, ((((arr_3 [i_0] [i_1 + 1]) + var_8)))));
            var_35 -= ((((arr_3 [i_0] [i_1]) >> (((arr_21 [16] [i_1] [i_0] [i_1]) - 87497308)))));
        }
        var_36 = (6454909198082369707 / -1);
    }
    var_37 = ((((max(var_3, var_12))) ^ (var_14 + var_16)));
    #pragma endscop
}
