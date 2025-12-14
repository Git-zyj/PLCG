/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_0, var_15));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_18 = (min(-125, 14176));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [16] [i_0] = ((!(!var_14)));
                    arr_8 [i_0] [i_1] [4] [i_2] = (min(((min(var_2, var_12))), (min(var_2, var_6))));
                }
            }
        }
        var_19 = var_1;

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_20 = 20;
            arr_11 [i_0] [i_3] = ((min(var_16, var_14)));
            arr_12 [i_0] = (min(((min(var_7, var_13))), (min(var_6, var_3))));
        }
        for (int i_4 = 1; i_4 < 18;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            arr_26 [i_4] [i_4 + 1] [i_4] [i_7] [i_7] = (~16021340922913745306);
                            arr_27 [i_0 + 2] [i_5] [i_4 - 1] [i_6] [i_6] [i_6] [i_4] = (min((((~(-2147483647 - 1)))), (min((min(var_14, var_6)), ((min(var_11, var_16)))))));
                            var_21 = (~(min(var_9, var_12)));
                            arr_28 [15] [15] [i_5] [5] [i_4] = (min(var_13, ((min(var_10, var_11)))));
                        }
                    }
                }
                var_22 = min(320112685, 20582);

                for (int i_8 = 3; i_8 < 17;i_8 += 1) /* same iter space */
                {
                    arr_32 [0] [i_4] [15] [i_8 + 2] = min((min(1, 12898)), -var_0);
                    var_23 = var_15;
                    var_24 = (max(var_24, ((min((min(var_12, var_4)), (~var_14))))));
                }
                for (int i_9 = 3; i_9 < 17;i_9 += 1) /* same iter space */
                {
                    var_25 += (min(533992865, (min(268427264, var_4))));
                    arr_35 [i_0] [i_4 + 1] [i_4] [16] [10] = min(108, (min(-431253779, -1)));
                    arr_36 [i_0 + 3] [i_0] [i_4] [17] [i_5] [i_4] = var_9;
                }
                arr_37 [i_0 - 1] [i_4] = var_12;
                arr_38 [i_4] [15] [i_5] = (min(var_6, ((min(var_0, var_11)))));
            }
            arr_39 [i_4] [16] = (min((min(var_14, var_1)), var_14));
            arr_40 [i_4] [i_4] = (min(var_3, (min(var_7, var_5))));
            var_26 = (min((min(var_11, var_13)), var_13));
            var_27 |= (min((min(var_0, (min(4408278226633002146, -35)))), (min(var_12, var_4))));
        }
        for (int i_10 = 1; i_10 < 17;i_10 += 1)
        {
            arr_44 [i_10] [12] [i_0] = var_9;
            var_28 = (min(var_28, var_12));
            var_29 ^= (min((min(var_0, -539308687)), ((~(min(var_14, var_14))))));
            var_30 = (min(((min(0, -454205989))), (min(1202975618, 1))));
        }
    }
    var_31 -= 1977607567;
    var_32 = var_14;
    #pragma endscop
}
