/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] &= (~var_13);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 *= (arr_5 [i_2]);
                        var_20 = (((arr_10 [i_3] [i_3] [i_3] [i_3]) != -5386760297966335733));
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_21 &= (~var_12);
                                arr_17 [i_0] [i_2] [i_2] [i_2] [8] [i_0] &= (((((max(306, var_10))) ? var_0 : var_12)));
                                var_22 = 65220;
                                var_23 = 284073959;
                            }
                        }
                    }
                    arr_18 [i_2] [i_2] [i_2] [i_2] = (min(52673, ((~(arr_5 [i_0])))));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 8;i_7 += 1)
                    {
                        arr_26 [i_7] [i_6] [i_7] = var_12;
                        arr_27 [0] [i_0] [i_0] [i_6] &= (~var_15);
                        var_24 += var_10;
                    }
                    var_25 = 1340193609;
                }
                var_26 = (max(var_26, var_14));
            }
        }
    }
    var_27 = (max(var_27, 4258510308));
    var_28 = (max(var_28, 3068885177));
    var_29 &= 4258510309;
    var_30 += -var_7;
    #pragma endscop
}
