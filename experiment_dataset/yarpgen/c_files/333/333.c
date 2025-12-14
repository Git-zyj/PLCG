/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 = ((-(max((arr_7 [i_0 + 3] [i_2] [i_2]), (arr_7 [i_0 - 2] [i_2] [i_0 - 2])))));
                            arr_11 [i_2] [i_2] [i_2] [i_2] = -77;
                        }
                    }
                }
                var_15 = (min(var_15, 3431198121));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                            {
                                var_16 = (max(var_16, ((((((1439568892792673874 ? 37435 : (((arr_16 [i_0] [i_0] [i_4 + 2]) ? (arr_1 [i_0]) : (arr_16 [i_4] [4] [i_6])))))) ? 4294967295 : ((110 ? 2417 : 17791413052449106918)))))));
                                var_17 = (max(var_17, 121));
                            }
                            for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                            {
                                var_18 = ((((((arr_14 [i_0 - 1] [i_1] [i_5] [i_7]) & 32752))) ? (arr_12 [11] [i_1] [11] [i_5]) : (arr_14 [i_0] [i_1] [i_1] [i_5])));
                                arr_22 [5] [i_5] [i_4] [i_4] [i_1] [i_0] = ((+((((arr_10 [i_0] [i_0]) + 162)))));
                                var_19 = (!3431198121);
                                var_20 -= (arr_21 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_0]);
                                arr_23 [i_7] [i_5] [i_4 + 3] [i_1] [i_0] = (((((57344 ? (min((arr_16 [i_0] [i_0] [i_0]), (arr_17 [1] [i_1] [i_0]))) : (((min((arr_14 [i_0] [i_1] [i_4] [i_5]), 1))))))) ? (arr_5 [i_0] [i_1] [8] [i_5]) : ((-(arr_7 [i_0 + 2] [i_5] [i_0])))));
                            }
                            var_21 = (min(var_21, ((((arr_13 [i_0] [i_0] [i_0]) * (((!(((1 ? (arr_3 [i_0 + 3] [i_1]) : 1782003689)))))))))));
                        }
                    }
                }
                var_22 ^= ((12 ? (((!(arr_17 [i_0] [i_0 + 3] [5]))) : (121 && 1))));
            }
        }
    }
    var_23 = var_2;
    #pragma endscop
}
