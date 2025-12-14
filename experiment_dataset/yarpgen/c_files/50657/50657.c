/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -27146;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_15 += ((((((arr_5 [i_0] [i_0] [i_0]) ? 27134 : -32752))) ? (arr_4 [i_0] [i_1]) : ((var_4 ? var_4 : var_3))));

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                var_16 = (max(var_16, (arr_6 [i_0] [i_1] [i_1])));
                var_17 = ((-(arr_6 [i_0] [i_1] [i_1])));
                var_18 = ((~(arr_0 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            var_19 = ((var_0 ? 1 : (var_5 + var_12)));
                            var_20 = ((27119 || (arr_2 [i_3 + 3])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_21 = -237;
                            var_22 = (((arr_4 [i_5 - 1] [i_2]) <= ((49152 ? var_10 : 134217727))));
                            var_23 = (arr_3 [i_6]);
                            var_24 = (max(var_24, ((((arr_14 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [6]) ? (arr_11 [13] [i_5 + 1] [i_5 + 1] [i_6] [i_6] [i_6]) : (var_2 + var_4))))));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                var_25 = (max(var_25, (((27145 || (28674 << 1))))));
                var_26 = (max(var_26, (((~((~(arr_23 [7] [i_1]))))))));
                var_27 = 134217726;
                var_28 -= 42;
                var_29 = (((~2044) & (var_6 | var_4)));
            }
            for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
            {
                var_30 = (((((var_12 ? var_5 : (arr_2 [i_0])))) ? 49136 : 27152));
                var_31 = (var_3 / var_10);
                var_32 = (((arr_8 [i_0] [i_0] [i_0]) * (arr_19 [i_0] [i_0] [16] [i_8])));
                var_33 &= (65510 < 65192);
            }
            for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
            {
                var_34 = 27149;
                var_35 = (max(var_35, (((!(arr_0 [i_0] [10]))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_36 = (-137 & 1);
                            var_37 = (!(49121 && 15));
                            var_38 = var_2;
                        }
                    }
                }
                var_39 = (max(var_39, ((((arr_27 [15]) ^ var_5)))));
            }
        }
        var_40 = 116;
    }
    var_41 = ((-27119 ? var_2 : var_1));
    #pragma endscop
}
