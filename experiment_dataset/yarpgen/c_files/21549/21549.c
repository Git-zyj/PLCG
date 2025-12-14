/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 += -6420015099290451891;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            arr_16 [i_0 + 3] [i_1 + 1] [i_2] [i_3] [i_4] = 1;
                            var_20 = (min(-65532, (min(-6420015099290451898, 10421))));
                            var_21 = (min(-1, (min(763921194, 230))));
                            var_22 = (min(32756, 6420015099290451870));
                        }
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            var_23 &= (min((min(-6420015099290451899, 10434)), ((min(763921214, 53)))));
                            arr_19 [i_1] |= ((~((min(32745, 192)))));
                        }
                        for (int i_6 = 4; i_6 < 12;i_6 += 1)
                        {
                            var_24 = -1;
                            var_25 = 10018645373726413553;
                        }
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            var_26 = ((-((min(1, -70)))));
                            arr_26 [i_0 + 1] [i_1 + 1] [i_2] [i_3] [i_7 + 1] = (min(8280740666422198168, 0));
                            var_27 = -1;
                            var_28 = 1456767229;
                        }
                        arr_27 [i_0 + 1] [i_1 - 1] [i_2] [i_3] &= (~-1293797219);
                        var_29 = 89;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        arr_31 [i_0 - 1] [i_1 - 2] = (~-29);
                        var_30 = (--4294967295);
                        var_31 = (max(var_31, -8280740666422198141));
                        var_32 -= (~65522);
                    }
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {

                        for (int i_10 = 2; i_10 < 9;i_10 += 1)
                        {
                            var_33 *= -32755;
                            var_34 += (min(2147483647, 8280740666422198148));
                            var_35 &= ((~((min(1, 109)))));
                            arr_37 [i_0 + 1] [i_1 - 2] [i_2] [i_9 + 2] [i_10 - 1] = 65529;
                        }
                        var_36 ^= (min(14730, (min(4110793744, 32763))));
                        var_37 = (min(var_37, 2689441970128304967));
                    }
                    arr_38 [i_0 + 3] [i_0 + 2] [i_1 - 1] [i_2] = 8323072;
                }
            }
        }
    }
    var_38 ^= (!9223372036854775782);
    #pragma endscop
}
