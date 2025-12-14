/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = (min(var_15, ((max((((7615262899153369100 ? 30750 : 0))), 1959550167321411297)))));
        var_16 *= var_14;
        var_17 = ((((-(arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) / 78)) : -188);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = var_12;
        var_18 |= (min(34795, ((-1362490633 ? -1416366027 : 30741))));
        var_19 -= (var_2 ? ((min(-22140, var_14))) : (~22139));
        arr_6 [i_1] = 20615;
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_20 = (((max((arr_9 [i_3]), var_12)) ? (-22139 >= var_14) : ((0 ? 8313488315329978242 : 67))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            var_21 = (max(((var_1 ? (((1005410205 ? 46600 : 30731))) : (((arr_9 [i_3]) ? 14478843968608225538 : 6040)))), (((!(arr_18 [i_2] [i_3] [i_4] [i_3] [i_6]))))));
                            var_22 = -30626;
                            arr_20 [i_2] [i_3] [i_4] [i_5] [i_6] |= var_2;
                            var_23 = (min(var_23, (arr_17 [i_4])));
                        }
                        var_24 &= ((((var_12 ? 105 : (arr_17 [i_4])))));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            var_25 = (min((arr_31 [i_7] [i_7] [i_7] [i_8] [i_10] [i_9]), ((((((1 ? 40942 : var_6))) <= ((54 ? -8184872202877341233 : 108)))))));
                            var_26 = var_1;
                        }
                    }
                }
            }
            var_27 = (min(var_27, (((((max((((var_1 ? var_4 : -3332579459679625289))), (((arr_31 [16] [i_7] [i_2] [4] [i_2] [i_2]) ? 22140 : var_8))))) ? ((((min(34795, 7197))) ? 10427 : ((var_13 ? var_8 : var_14)))) : (((((var_5 ? 103 : -11026))))))))));
        }
        var_28 = ((!(((-188402797570448139 ? (!808935370731384578) : var_7)))));
    }
    var_29 = var_10;
    #pragma endscop
}
