/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((((min(-14222, ((24 ? 65535 : var_15))))) ? (arr_3 [i_1]) : ((~((-(arr_3 [i_1])))))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 ^= (var_15 && 0);
                                var_20 = (max(var_20, -551087297605184957));
                            }
                        }
                    }
                    var_21 |= (max((!2801475284), (min((min(1945435277, 0)), ((((arr_7 [1] [i_1] [i_1] [i_1]) % var_0)))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            {
                                arr_18 [i_5] [i_1] = 1;
                                arr_19 [i_1] [i_6] = var_8;
                                var_22 = (((arr_3 [i_1]) ? var_14 : ((((arr_9 [1] [12] [i_1]) == (0 < 21))))));
                            }
                        }
                    }
                    var_23 = 1;
                }
                for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
                {
                    var_24 = (arr_20 [i_0]);
                    var_25 = (max(var_1, (max(14233, -7500917512156737051))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            {
                                var_26 = var_6;
                                var_27 ^= (((((9109378260719803489 == (min((arr_5 [i_7] [1] [i_9]), var_11))))) + (min((arr_25 [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 + 1] [12] [i_0 + 2]), (var_6 & 51313)))));
                            }
                        }
                    }
                }
                for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        arr_31 [2] [i_10] [i_1] [i_1] [i_0] = ((~(~50)));
                        var_28 = (min(var_28, (arr_13 [4] [i_1] [i_10] [i_11])));

                        for (int i_12 = 0; i_12 < 14;i_12 += 1)
                        {
                            var_29 ^= (arr_21 [0] [0] [8]);
                            var_30 ^= ((0 || (((((var_1 ? var_13 : var_14)) + var_3)))));
                            var_31 = 0;
                        }
                        arr_34 [i_1] [i_0] [5] [i_1] = var_7;
                    }
                    var_32 = ((((arr_7 [i_10] [i_1] [i_1] [10]) ? (min((arr_8 [i_0]), (arr_29 [i_10] [i_1] [i_10] [10] [i_10]))) : (arr_12 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_1] [i_1] [i_10]))) == 132120576);
                    var_33 -= -1912957134;
                }
            }
        }
    }
    var_34 = 215;
    #pragma endscop
}
