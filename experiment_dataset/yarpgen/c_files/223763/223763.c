/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 0));
    var_18 = (!3);
    var_19 = (22 & 29);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (!-16);

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_21 = (4 & -18);
                    arr_10 [i_0] [i_1] = (~28);
                    var_22 = (max(var_22, (((!(-127 - 1))))));

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 4; i_4 < 12;i_4 += 1)
                        {
                            arr_16 [i_0] [13] [i_2] [11] [i_2] [i_0] = (!-36);
                            var_23 = (~4740658578543156222);
                        }
                        for (int i_5 = 3; i_5 < 11;i_5 += 1)
                        {
                            arr_21 [i_0 - 1] [i_1] [i_0] [i_1] [i_5 + 3] = 4740658578543156222;
                            arr_22 [i_0] [i_1] [i_0] [i_3] [i_5] [i_1] [i_0] = (-16 & 56779);
                            var_24 = (-17 + -8243213029344951575);
                        }
                        var_25 = (!52);
                        var_26 = -2;

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_26 [i_0 + 2] [i_0 - 1] [i_0] [i_0 - 2] [i_0] = 2153825167659871409;
                            arr_27 [i_1] [i_1] [i_1] [i_0] [i_1] = ((~(~45)));
                        }
                        arr_28 [i_0] [i_0] [i_2] [i_3] = -28;
                    }
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_27 = (min(var_27, (~93)));
                            var_28 += (!-4740658578543156223);
                            var_29 ^= (4740658578543156237 <= 64249);
                            var_30 &= 64260;
                        }
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            arr_37 [i_0] [i_0] = -15;
                            var_31 = (!-15);
                        }
                        var_32 = 73;
                    }
                    var_33 ^= 1;
                }
            }
        }
    }
    #pragma endscop
}
