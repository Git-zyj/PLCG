/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~(min(var_6, (min(var_10, 13301263231609757596)))));
    var_13 = min((max((2233118785994127266 && 1464223621), ((var_7 ? var_9 : 9223372036854775807)))), ((((~2809209023) || ((max(var_6, 1371835163)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_15 [7] [i_4] [i_4] [i_3] [i_4 + 3] [i_2] = (((arr_2 [i_0] [i_3]) || (arr_9 [i_4] [i_2 + 2] [i_2 + 1] [i_2] [i_2 + 1] [i_2])));
                                var_14 ^= ((arr_6 [i_2 + 2] [i_1] [i_1] [i_1]) ? (arr_11 [i_0] [i_1] [i_2] [i_3] [i_4]) : (arr_6 [i_0] [i_1] [i_2 + 2] [i_3]));
                            }
                        }
                    }
                    arr_16 [i_0] = (((arr_13 [8]) << (3167968405396113707 >= 8775341320824796544)));
                    arr_17 [i_0 + 1] [i_0 + 1] [i_2] = (arr_4 [4] [i_0] [i_1] [i_2]);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_15 = ((~(arr_0 [i_0 - 1])));
                    var_16 = (((16689834520313797025 >= (arr_0 [i_0]))) ? 8062614226451178389 : (~14271003315402561862));
                    var_17 = (((arr_7 [i_0 - 1] [i_1] [i_5]) * ((((!(arr_5 [i_5] [i_1] [i_0])))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_18 |= (!576460752303423488);
                    var_19 = 1429195477;
                    var_20 = (((arr_13 [i_6]) ? 9223372036854775804 : (arr_6 [i_0 - 1] [i_0 + 1] [8] [i_0 - 1])));
                }
                var_21 = (min(var_21, ((min(((-(arr_2 [i_0 + 1] [i_0 + 1]))), ((((arr_2 [i_0 - 1] [i_0 - 1]) == (arr_9 [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1] [5] [i_1])))))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_22 = ((((min((arr_19 [i_8] [i_7] [i_1]), ((~(arr_0 [9])))))) ? ((((((min(-7711023623689554098, 9223372036854775782)) + 9223372036854775807)) << 1))) : (((4175740758306989737 - (arr_18 [i_7]))))));
                            var_23 = (max(var_23, (arr_10 [2] [i_0 - 1] [i_7])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
