/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_20 = ((((((arr_0 [i_0 + 3] [i_1 - 2]) ? (arr_0 [i_0 + 2] [i_1 - 1]) : (arr_0 [i_0 + 3] [i_1 - 2])))) ? ((~(arr_0 [i_0 + 1] [i_1 - 2]))) : (var_8 >= -1177522953)));
                arr_6 [i_0] [i_1] [i_0] = (((arr_0 [i_1 + 1] [i_1 - 2]) ? ((3748431858 ? 546535447 : -112)) : (arr_1 [i_0 + 2])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_21 = (max(var_21, (((((121 ? -114 : 3748431858)) <= (arr_11 [i_0] [i_1] [i_2 - 1] [i_3 - 2] [i_2 - 1]))))));

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
                            {
                                var_22 = ((-118 ? 816735605998186714 : -2917578144515692610));
                                var_23 = -2373298680855087030;
                                arr_14 [i_0] [i_0] [i_0] [i_3] [i_4] = (52792 + 942191235);
                            }
                            for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                            {
                                var_24 += ((arr_8 [i_5 - 1] [i_2 - 2] [i_3 - 1]) && ((min((arr_8 [i_5 + 1] [i_2 + 1] [i_3 - 4]), 1))));
                                var_25 += -20;
                                arr_17 [1] [i_0] = -196834543;
                            }
                            for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_0 + 3] [i_0] [i_0] [i_0] [i_0] = (((((2128955123787215886 ? 144526858 : (arr_2 [i_0] [i_1] [i_0]))) > ((((((arr_18 [2] [i_2] [7]) + 2147483647)) >> (var_14 - 6862684967111504566)))))));
                                arr_23 [i_0 + 2] [i_0 + 2] [4] [i_0] |= ((1 && (-127 - 1)));
                            }
                            /* vectorizable */
                            for (int i_7 = 1; i_7 < 9;i_7 += 1) /* same iter space */
                            {
                                arr_26 [i_7] = 192;
                                var_26 = -4610;
                                var_27 -= 20568;
                            }
                            var_28 = (1 * 3748431848);
                        }
                    }
                }
                arr_27 [i_0] [i_0] [i_0 + 3] = ((!(arr_15 [i_0] [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 2] [i_0] [i_1 - 2])));
            }
        }
    }
    var_29 = (var_17 >= -2760871454);
    var_30 ^= var_17;
    #pragma endscop
}
