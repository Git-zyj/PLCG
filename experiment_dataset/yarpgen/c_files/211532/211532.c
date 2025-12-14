/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_18 = ((-(arr_1 [i_0])));
                    var_19 = (((((1625404335 == (arr_2 [i_0] [i_2])))) != var_9));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_20 |= var_14;
                        var_21 = ((!(!-9934)));
                        arr_8 [4] [4] [i_1] [i_0] = (((arr_2 [i_0] [i_0]) < (arr_7 [5] [i_2] [0] [5])));
                    }
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        arr_11 [i_4] [i_4] [i_4] = var_15;
                        arr_12 [i_0] [i_0] [i_0] [i_0] &= var_12;
                        var_22 *= var_16;
                        var_23 = (((((arr_1 [i_4 + 1]) >= (arr_4 [i_4 + 2] [i_4 + 1] [i_4 - 1]))) ? ((((arr_0 [i_2]) || -45))) : (((!(arr_3 [i_2] [i_1] [i_0]))))));
                    }
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_1] = max(21481, ((6450 ? var_1 : 0)));
                    arr_17 [i_0] [12] [i_1] [3] = (min(44029, 3847575588010603164));
                    var_24 = ((((arr_0 [i_0]) ? 6438 : (max((arr_14 [7] [i_0] [i_0]), var_12)))));
                }
                for (int i_6 = 2; i_6 < 15;i_6 += 1)
                {
                    arr_21 [i_0] [i_0] [i_6] = (min(((max(1663098346989807492, 30275))), (max((arr_15 [i_6 - 1] [i_6] [i_6 - 1] [13]), var_10))));
                    var_25 = ((!((max(4611686018427387903, 1)))));
                }
                var_26 |= (((max((((arr_20 [i_1] [i_1] [i_0]) >> (-4611686018427387903 + 4611686018427387908))), 106)) / (100663296 ^ 33423360)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 9;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            {
                arr_29 [i_7] = var_7;
                var_27 = ((!(((808344848461857224 ? var_11 : (arr_15 [i_7 - 3] [i_7] [i_7] [i_7]))))));
                var_28 = (((~63) / (~21510)));
                var_29 += var_13;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    arr_39 [i_9] [22] &= (((~40) ? (((var_0 ? (arr_36 [i_9]) : var_0))) : (((~(((arr_31 [13]) >> (((arr_35 [i_9] [10] [i_9]) - 2392)))))))));

                    for (int i_12 = 0; i_12 < 23;i_12 += 1)
                    {
                        arr_42 [7] [i_10] [i_10] = (((~-121) ? -var_1 : (var_0 - -1268457466)));
                        arr_43 [i_9] |= 127;
                    }
                    var_30 = (((max(((-1 ? 0 : 31)), 121)) != 100663297));
                }
            }
        }
    }
    #pragma endscop
}
