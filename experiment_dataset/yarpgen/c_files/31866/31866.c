/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!3096184352);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (arr_4 [i_0] [6] [i_0]);
                arr_5 [i_0] [i_0] [16] = ((var_13 & (((min((arr_1 [i_1]), -362024721319402121))))));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_1] [i_0] = 4;

                            for (int i_4 = 2; i_4 < 18;i_4 += 1)
                            {
                                var_18 = (((((((-362024721319402121 ? var_0 : var_1))) | (max(730229187495669888, 362024721319402124)))) != (arr_10 [i_2] [15] [i_2 + 1])));
                                var_19 = (max(var_19, (((~((((var_6 || 28954) || (((var_15 & (arr_11 [19]))))))))))));
                                var_20 += (arr_1 [i_1 + 2]);
                            }
                            for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                arr_19 [i_0] [i_0] [i_2] [i_3] [i_5] [i_5] = (arr_15 [i_0] [5] [i_0] [18] [i_5]);
                                arr_20 [i_5] [i_3] [i_2 - 4] [i_1] [i_0] = var_4;
                                var_21 = (min(var_21, ((((arr_10 [i_2] [i_2] [9]) ? (arr_14 [8] [i_1 + 2] [12] [12] [1] [0] [i_5]) : (arr_16 [i_0] [i_0] [8] [i_2] [i_3] [14] [14]))))));
                                arr_21 [i_0] [i_1] [i_1] [i_0] [i_3] [i_5] = 7590046384083826821;
                                var_22 &= (min((((arr_0 [i_1]) * (((28960 - (arr_12 [i_0] [10] [10] [i_0])))))), (((max(-4123, 7680))))));
                            }
                            for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                            {
                                var_23 = (max(var_23, 32751));
                                var_24 = ((((max((arr_17 [i_2] [i_2 + 2] [i_2 - 2] [i_2 - 2] [i_2 + 2] [i_2 - 3]), (arr_17 [i_2] [i_2 - 1] [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 3])))) == ((((arr_15 [i_1 - 3] [i_1 + 2] [i_1 + 2] [i_2 - 2] [i_2 + 2]) || (arr_17 [i_2] [i_2 - 3] [i_2 + 2] [i_2 - 3] [i_2 - 2] [i_2 + 2]))))));
                                arr_26 [15] [15] [i_6] [7] = ((+((((arr_2 [i_1 - 1]) == (-1492482939 && var_10))))));
                                var_25 = ((8441 != (((arr_12 [i_0] [i_1 - 2] [i_1 - 2] [i_3]) ? 7696 : 1441624541))));
                            }
                            var_26 ^= min(((((var_13 ? 36563 : 2853342755)) * (((~(arr_25 [i_0])))))), (((((2497592072 < (arr_1 [i_1]))) || (arr_3 [i_1 + 2] [i_1])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
