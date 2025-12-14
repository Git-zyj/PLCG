/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((var_9 ? ((27 ? 0 : var_4)) : (((min(20, 228)))))), (max((var_4 / var_7), var_8))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_12 = (min(var_12, (((-(min((arr_1 [i_1]), var_10)))))));
            var_13 ^= (~2069442202951300022);
        }
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            arr_10 [i_0] [i_2] = ((((~(((arr_5 [i_0] [i_2 - 2] [i_2 - 2]) ? var_2 : (arr_0 [i_0] [i_2]))))) * ((((var_7 < (arr_0 [i_0] [14]))) ? (((((arr_7 [i_0] [i_0] [i_0]) + 2147483647)) << (1 - 1))) : 3))));
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_14 = (827036529 << 1);
                            arr_18 [i_2] [i_4] [i_3] [13] [1] [i_2] = ((((((var_6 * var_3) ? var_7 : ((((arr_15 [i_4] [i_3] [i_0] [i_0]) | var_2)))))) ? 4294967295 : (arr_14 [i_0] [i_2] [i_3] [5])));
                        }
                    }
                }
            }
            var_15 = ((((~((17022 ? (arr_14 [i_0] [i_2] [i_2] [i_2 - 2]) : var_7))))) ? ((((min(1, 1))) ? var_4 : (((var_1 ? var_1 : (arr_15 [i_0] [i_0] [11] [i_2])))))) : 4294967275);
            var_16 -= (min(((max(1, 1))), ((7845376572323512178 << (3374552091762497091 - 3374552091762497078)))));
            var_17 = arr_17 [i_2];
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_18 = 48517;
            arr_22 [i_0] [i_0] [i_0] = (((!var_4) ? ((-(arr_14 [6] [i_0] [i_6] [i_6]))) : (var_10 >= 13)));
            var_19 &= ((!((max((arr_13 [16] [i_0] [i_0]), (~221))))));
        }
        var_20 = (((((arr_14 [i_0] [i_0] [i_0] [i_0]) && (arr_14 [i_0] [i_0] [i_0] [i_0]))) ? (min(43, 16635899167157421658)) : (max(2365564112374964263, -1))));
        var_21 = (arr_16 [1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    for (int i_7 = 1; i_7 < 11;i_7 += 1)
    {
        arr_26 [i_7] [i_7] = (~3013252831360185377);
        arr_27 [i_7] = ((((max((var_4 ^ 3), var_3))) == ((((max(0, -10))) ? (arr_8 [3] [i_7 + 1]) : (arr_19 [i_7] [10] [i_7 - 1])))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 12;i_11 += 1)
                        {
                            {
                                var_22 = (max(var_22, ((((9410964927081355353 * ((var_5 ? var_9 : var_9)))) << (((!(!var_6))))))));
                                var_23 = var_5;
                                arr_38 [i_11] [i_7] [i_10] [10] [10] [i_7] = ((((max((arr_9 [i_11]), (!13)))) / (arr_4 [3] [i_8] [i_9 - 1])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        for (int i_13 = 3; i_13 < 11;i_13 += 1)
                        {
                            {
                                var_24 = ((~(((arr_40 [i_13 - 1] [i_9 - 1]) * (arr_40 [i_13 - 2] [i_9 - 1])))));
                                var_25 += (arr_41 [i_7] [9] [i_9 + 1] [9] [i_13]);
                                var_26 = (max(var_26, ((1073741823 != (((((var_8 ? (arr_9 [i_12]) : 2147483647))) ? (!4294967288) : (((arr_24 [i_7]) / (arr_36 [i_7 + 1] [i_8] [i_8] [i_9 - 1] [i_9 - 1] [i_12] [i_13])))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
