/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min((min((min(5602820089717495785, -90)), (min(5995090806903400691, 5995090806903400691)))), var_12));
    var_15 = var_5;
    var_16 = var_4;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_17 = (min(var_13, (~var_3)));
        var_18 = (min((min(5995090806903400692, 1)), 1));
        arr_2 [i_0] [i_0] = var_9;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            {
                var_19 &= var_3;
                var_20 = (min(var_2, (!var_12)));
                arr_7 [1] [i_2] = (min(var_7, (min(var_6, var_11))));
                var_21 = var_11;

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {

                    for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_22 *= var_5;
                        var_23 = (min(var_1, ((min(-var_3, (min(var_4, var_9)))))));
                        var_24 = ((~(min((min(var_12, var_11)), var_4))));
                    }
                    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        var_25 = (~3513231815140353887);
                        arr_16 [i_3] [i_2] [i_2] [i_2] [i_2] = (min(-var_10, var_9));
                        var_26 = ((-((-((min(var_10, var_11)))))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                arr_24 [i_3] = 4294967295;
                                var_27 = (max(var_27, (((!(~6869174032419803411))))));
                                arr_25 [i_1] [i_2] [i_3] [0] [i_2] |= (min(((min(var_12, var_6))), var_8));
                                var_28 = (min((min(var_3, var_0)), (min(192, -11461))));
                                var_29 = (min(7736469025256429087, -12451653266806150915));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
