/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (min((min(34629096, 268435455)), ((((arr_6 [i_1]) ? (arr_5 [i_0] [i_0]) : 8)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_12 [i_2] [4] [4] [i_1] = (max(((((arr_5 [i_1] [i_0]) > (arr_5 [i_0] [i_0])))), 68));

                            for (int i_4 = 1; i_4 < 8;i_4 += 1)
                            {
                                var_15 = ((18446744073441116141 | (((arr_3 [i_4 + 1]) << ((((68 ? 12290 : 111)) - 12282))))));
                                var_16 = 4276770240026579096;
                            }
                            var_17 = (max(var_17, ((min(1, 31839)))));
                            var_18 = (max((((arr_9 [i_1] [i_1] [i_1]) ? (3779530956487395985 ^ -7613846550061996097) : (((1 | (arr_0 [i_0])))))), (max(31, 7384784077250801991))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 19;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        {

                            for (int i_9 = 3; i_9 < 17;i_9 += 1)
                            {
                                arr_29 [i_5] [i_6] [i_7] [i_8] [i_9] [i_5] = ((~((min((arr_16 [i_8] [i_9]), (!511))))));
                                arr_30 [i_9] [i_7] [i_5] = max(201, -93);
                                var_19 = (min(268435440, 100));
                                arr_31 [i_9] [i_7] [i_7] [9] [i_7] [i_5 - 1] = 1;
                            }
                            var_20 = ((~(((((-118 ? 48 : -16578))) ? 493 : ((-1501256213 ? 25005 : 486))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        {
                            var_21 = (min(var_21, 0));
                            arr_37 [i_5] [i_6 - 1] [i_10] [i_5] = ((8 <= (~1)));
                            var_22 ^= (min(54264, ((((((arr_16 [i_6 + 1] [i_6 + 1]) ? (-2147483647 - 1) : (arr_17 [i_10])))) - (min((arr_36 [i_11] [i_6] [i_10] [i_10]), 4294966802))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_23 = 405641522548782596;
                            var_24 = (min(var_24, ((((((!(arr_21 [i_5] [i_5 + 1])) ? ((min(-35, 11271))) : 32762)))))));
                            arr_43 [i_13] [i_12] [i_6] [i_5] = (max((((-14382 == 54264) ? (1 && 11283) : 127)), ((((((arr_33 [2]) ? 25165824 : (arr_16 [i_12] [i_5]))) != 4294966811)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
