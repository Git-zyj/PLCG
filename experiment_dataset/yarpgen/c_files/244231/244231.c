/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(var_7, var_1))) ? (!-30243) : (max((min(69, var_4)), (var_7 <= 4294967272)))));
    var_11 = (var_8 * (((max(var_9, var_8)) % var_8)));
    var_12 = ((((((var_8 >= var_4) ? ((114 ? 147 : 1)) : var_1))) ? 67 : -1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_13 &= (-2147483647 - 1);
                var_14 ^= ((((min((min(2147483647, 0)), (((!(arr_3 [10] [i_1]))))))) ? (!1) : ((((((arr_2 [i_0] [5]) ? (arr_1 [i_1]) : (arr_0 [i_1])))) ? (((min(12026, -119)))) : (arr_2 [1] [i_1])))));

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [12] [i_0] [i_1] [0] [i_3] [i_4 + 3] = var_5;
                                var_15 = (((((-(arr_10 [i_4 - 2] [i_4 + 2] [i_4 - 2])))) ? 262046408 : (arr_10 [i_0] [i_1] [i_3])));
                                arr_14 [i_0] [0] [i_2] = ((-(((arr_3 [i_2] [i_0]) * 0))));
                            }
                        }
                    }
                    var_16 = ((-48 ? (arr_10 [i_0] [i_0] [i_0]) : (((((!(arr_11 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_17 = (i_0 % 2 == zero) ? ((((max((max((arr_6 [i_2]), 2147483647)), (~var_5))) << ((((var_2 ? (arr_11 [i_2] [i_0] [i_2] [1]) : (arr_11 [i_0] [i_0] [i_1] [i_1]))) - 41647))))) : ((((max((max((arr_6 [i_2]), 2147483647)), (~var_5))) << ((((((var_2 ? (arr_11 [i_2] [i_0] [i_2] [1]) : (arr_11 [i_0] [i_0] [i_1] [i_1]))) - 41647)) - 5504)))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_18 = (min((max(((min(-48, var_2))), (max((arr_7 [i_0]), var_0)))), (((+(((arr_6 [i_0]) + (arr_9 [i_0] [i_0] [i_2 + 1]))))))));
                                var_19 = ((!(((var_9 >> (var_9 - 1742281624))))));
                                var_20 = (((((~70) ? (min(1, var_9)) : (((max(-100, 1))))))) ? (((((var_7 ? (arr_16 [i_1] [3] [i_6]) : (arr_9 [1] [i_0] [i_2 - 2])))) ? ((1 ? (arr_6 [i_6]) : 196521822)) : var_7)) : (!1303766638024052760));
                                arr_20 [i_2] [i_1] [i_2 - 2] [i_0] [1] = (((arr_8 [i_0] [i_0] [i_0] [i_0] [1]) != (~0)));
                                var_21 = ((2147483647 < ((4294967291 ? -1 : 22))));
                            }
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    var_22 |= (max(((((min(var_4, var_6))) ? (((50963 ? -1543082243 : 1))) : (min(var_7, (arr_1 [i_0]))))), ((((((arr_1 [i_7]) ? (arr_5 [i_0] [1] [1] [i_7]) : 50963))) ? ((((arr_17 [i_0] [i_0] [i_0] [3] [i_0]) & var_5))) : (arr_8 [i_0] [i_0] [i_1] [i_7] [i_7])))));
                    var_23 = (((((7304207510249927779 && (arr_2 [i_0] [i_0])))) & ((((var_3 ? 0 : (arr_6 [i_0]))) * (!4294967294)))));
                }
            }
        }
    }
    #pragma endscop
}
