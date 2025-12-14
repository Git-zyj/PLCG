/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213375
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0 + 2] = (((var_9 | 0) ^ (255 & var_18)));
        var_20 = (min(((((1 + 331310586) * var_18))), ((((min(var_10, var_16))) ? (max(28664, var_4)) : (!-28664)))));

        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            var_21 = (((max(((max(28688, 28688))), var_2)) / (16952836245573465790 - var_1)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_1] [i_1] = ((((max(var_15, var_7))) ^ (4294967295 & -1000151612)));
                        arr_13 [i_1] [i_0] = ((((max(2374588981, 1))) - (max(-1, 16012282203057064319))));
                        var_22 = (max(((16952836245573465790 ? var_14 : 19)), (!-392826873)));

                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            var_23 = (min((min(28664, 6965188846902410883)), ((max(255, -63)))));
                            var_24 = ((max(((var_6 ? 63 : 105)), 117)));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_25 = var_11;
                            arr_19 [i_0] [i_5] [i_5] = (((((-2147483647 - 1) <= 12769168883021107000))));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_26 = ((max(var_11, 6965188846902410883)));
                            var_27 = 25;
                            var_28 = (max(4294967281, 18446744073709551612));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            arr_25 [i_7] [i_0] = 443167642;
            var_29 = (!var_6);
            var_30 = (--16952836245573465790);
        }
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            var_31 = ((-28665 ? -62 : 4294967295));
            arr_28 [i_0] [i_8] = min((-2147483647 - 1), 682837085);
            var_32 = min(-22295, -var_0);
        }
        var_33 = ((((min(var_8, -32766))) ? (!-11149928824410837627) : 19986));
    }
    var_34 = var_6;
    var_35 = var_16;
    var_36 = (var_12 % -var_12);
    #pragma endscop
}
