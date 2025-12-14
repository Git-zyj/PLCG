/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, -1125099588));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
                        {
                            var_17 = ((min(var_14, 104)));
                            var_18 = 253;
                            var_19 = 1034412119;
                        }
                        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                        {
                            var_20 = 19447;
                            var_21 = (((((((2312634667 ? 181 : 1982332628)) << ((((min(32194, -26314))) - 32182))))) ? (arr_11 [i_0] [i_2] [i_2] [i_3] [14] [i_2]) : (arr_11 [i_5] [i_0] [i_0] [18] [i_0] [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                        {
                            var_22 = 1034412148;
                            var_23 = (arr_12 [i_0 - 2] [i_0 - 2] [1] [i_2] [i_3] [i_6]);
                        }
                        var_24 = (max(var_24, ((max(((min(24424, 63))), ((min(50281, 6546533804289221057))))))));
                        var_25 = -6546533804289221058;
                    }
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_26 = var_0;
        var_27 = -29326;
    }
    for (int i_8 = 3; i_8 < 21;i_8 += 1) /* same iter space */
    {
        var_28 = var_6;
        var_29 = (min(48, 3));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {
                        var_30 = ((-43 != (max(1790654650348973977, ((max(1, 2)))))));
                        var_31 &= (9173539251846001799 >> 1);

                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            var_32 = var_0;
                            var_33 = (max(((max((arr_0 [i_8]), var_7))), (((arr_28 [i_8] [i_12]) | (arr_9 [i_8] [i_9] [4] [i_11] [i_12])))));
                            var_34 = (max((arr_11 [i_8] [17] [i_8] [15] [i_12] [4]), ((min(((max(16712, 65528))), (16712 - 63))))));
                            var_35 = (min((min((min(53688, 9223372036854775794)), -289209882314718247)), (arr_0 [i_9])));
                            var_36 = (-9223372036854775807 - 1);
                        }
                    }
                }
            }
        }
        var_37 = ((7 ? (((((arr_13 [i_8] [1] [i_8] [13] [i_8]) * (arr_32 [20] [20] [i_8] [i_8] [i_8]))))) : 48689));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 17;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 17;i_14 += 1)
        {
            {
                var_38 = (((max((arr_29 [i_13]), 2346803008341048444))));
                var_39 = 65523;
                var_40 = (max((min(var_10, 9223372036854775807)), 2698275477));
                var_41 = (min((-9223372036854775807 - 1), (arr_13 [i_14] [i_14] [i_14] [i_14] [i_14])));
                var_42 = (min(1982332629, (min(var_4, (arr_12 [1] [i_14] [i_14] [3] [i_14] [i_14])))));
            }
        }
    }
    #pragma endscop
}
