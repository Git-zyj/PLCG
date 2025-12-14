/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_1] [i_1] [7] [i_3] = arr_6 [i_0];
                            arr_12 [i_0] = (((!(arr_7 [i_0] [i_0] [i_0 + 4]))));
                            var_10 = ((~(arr_1 [1] [i_0])));
                            var_11 = (((max((min((arr_8 [i_0] [i_0] [i_3] [i_3]), -7245063791181422390)), (arr_6 [i_0]))) <= (((27 ? (((var_8 == (arr_7 [i_2] [i_2] [i_1])))) : (arr_8 [i_0 + 3] [i_0 + 3] [i_0 + 3] [1]))))));
                        }
                    }
                }
                var_12 = (min(var_12, (((((64349 ? 4294967295 : -6226882023752067696)) == (arr_2 [4]))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_13 = (max(((min(((((arr_6 [i_0]) | (arr_7 [i_0] [i_1] [i_0])))), ((16 ? (arr_15 [i_1] [i_1] [i_0]) : 49525))))), (max((arr_9 [i_0] [i_0] [i_0 - 2] [i_0]), 1))));
                                var_14 = ((var_2 * (var_0 >= 94)));
                                arr_22 [i_0 + 2] [i_0] = max(((((max((arr_3 [i_0 - 3] [i_1] [i_4]), (arr_7 [4] [i_1] [i_1])))) ? -127 : (-9223372036854775807 - 1))), (min(((~(arr_5 [i_0] [i_0] [i_0]))), (-99 ^ 99))));
                                arr_23 [i_0] [i_1] [4] [i_4] [i_6] &= (~((((arr_5 [i_6] [i_4] [i_0]) > var_4))));
                                arr_24 [i_4] [i_1] [i_4] [i_5] [i_4] [i_6] &= (((((((max(112, 125))) != ((((arr_1 [i_4] [i_4]) < -127)))))) == ((min((max(-12466, 127)), (min((arr_13 [i_4] [i_1] [i_1]), (arr_2 [i_0]))))))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 13;i_8 += 1)
                    {
                        {
                            var_15 = (1435087826 % -115);
                            var_16 |= (~-49);

                            for (int i_9 = 2; i_9 < 11;i_9 += 1) /* same iter space */
                            {
                                var_17 ^= (min((((~(69 <= 1435087826)))), ((-78 ? -1789047238340047347 : -32121))));
                                var_18 = (min((max((arr_29 [i_0] [i_1] [i_7] [i_7] [i_7]), (((arr_1 [i_0 + 3] [i_0]) | 1683060461)))), (((~((48 | (arr_18 [i_0] [i_1] [i_0] [i_8] [i_1]))))))));
                                arr_33 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0] = ((min((arr_15 [i_0] [11] [i_0]), (!-79))));
                                var_19 = 99;
                            }
                            for (int i_10 = 2; i_10 < 11;i_10 += 1) /* same iter space */
                            {
                                var_20 = (min(var_20, ((((114 ? -1110682189 : -1435087828))))));
                                arr_36 [i_0] [i_1] [i_8 + 1] [i_10] = (max(120, (!1)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 2; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 12;i_13 += 1)
                        {
                            {
                                arr_45 [i_0] [i_1] [i_0] [i_12] [i_13] = (48 == 2644334985);
                                var_21 = ((((max(5325252386514750326, 1650632316)) >> 12)));
                                var_22 = (min(((min((!3707797643), (max((arr_8 [i_0] [i_1] [i_12] [7]), 1))))), (max((min((arr_44 [i_13] [i_12] [i_11 + 1] [i_1] [i_0]), -3133817499193861254)), ((((arr_9 [i_0 - 2] [i_0 - 2] [i_11] [i_12]) <= -1435087821)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_14 = 1; i_14 < 17;i_14 += 1)
    {
        for (int i_15 = 0; i_15 < 20;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 17;i_16 += 1)
            {
                {
                    arr_54 [i_14] [i_15] [i_15] = min(1, ((-(arr_50 [i_14 + 1]))));
                    var_23 = (!-1425675377);
                    arr_55 [i_14] [i_15] = ((((max((arr_48 [i_14 + 2]), (var_0 != 29)))) ? (!7) : (max(120, (((arr_49 [i_14] [i_16 + 1]) ? var_3 : (arr_49 [i_14] [i_14])))))));
                }
            }
        }
    }
    var_24 = (var_5 | (0 % 1));
    var_25 = (max(var_25, (var_0 == var_6)));
    #pragma endscop
}
