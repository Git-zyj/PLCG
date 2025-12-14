/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((min((-2147483647 - 1), 4294967294))) ? var_0 : ((-var_5 ? -1036937343 : ((var_1 ? var_2 : var_4))))))));
    var_13 = (max(var_13, var_3));
    var_14 += var_2;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((((arr_0 [i_0]) && ((max(0, 10614746399324444426))))) ? (arr_1 [i_0]) : ((max((((!(arr_0 [i_0])))), (arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = ((((max((arr_6 [18] [18] [18]), (arr_4 [i_0] [i_0] [i_1])))) ? (((max((arr_3 [i_0]), (((!(arr_5 [i_1] [i_0])))))))) : (arr_0 [i_0])));
            arr_8 [i_0] [i_0] = ((((max((arr_3 [i_0]), (!3435889056)))) && ((max(var_5, (arr_6 [i_0] [i_1] [i_1]))))));
            var_15 = (!2147483647);
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                arr_14 [i_3] [i_2] [i_0] = (max((arr_10 [i_0] [i_0]), (max((arr_5 [i_0] [i_0]), ((89 ? var_9 : (arr_0 [i_0])))))));
                arr_15 [i_0] [i_0] [i_0] [i_0] |= (((((((-(arr_5 [i_0] [i_2])))) ? ((max((arr_1 [i_0]), var_9))) : (max(0, 140252738250751303)))) ^ var_9));
            }
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                arr_18 [i_0] [i_0] = ((((((arr_9 [i_4 - 2] [i_4 + 1] [i_4 - 3]) ? (arr_9 [i_4 - 3] [i_4 - 1] [i_4 - 2]) : var_9))) ? (arr_11 [i_4] [i_4] [i_4 - 3]) : ((~(max(var_9, (arr_1 [i_0])))))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 19;i_6 += 1)
                    {
                        {
                            arr_25 [i_5] [i_5 + 2] [1] [i_2] [i_5] = (arr_22 [i_0] [i_2] [i_5] [i_5] [i_6 + 1]);
                            arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] = (((((arr_12 [i_2] [i_2] [i_2] [i_2]) >> (((~15) + 20))))));
                            var_16 = (arr_5 [i_0] [i_0]);
                            var_17 += (min((~var_11), ((((arr_5 [i_5 + 1] [i_5 - 1]) ^ var_10)))));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_18 = var_0;
                arr_30 [i_0] [i_0] [i_7] = (arr_13 [i_0] [i_2] [i_7]);
            }
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_19 = ((~(((arr_35 [i_10 - 2]) ? var_3 : (~var_1)))));
                            var_20 &= (((arr_22 [i_0] [i_0] [i_9] [i_10 + 1] [i_0]) ? ((-(arr_22 [i_9] [i_2] [i_0] [i_10 + 1] [i_10]))) : (((arr_22 [i_0] [6] [i_8] [i_10 + 1] [i_10]) ? (arr_22 [i_0] [i_2] [i_2] [i_10 + 1] [i_0]) : (arr_22 [i_0] [i_2] [i_8] [i_10 + 1] [i_10])))));
                            arr_39 [i_10] = (min(((((var_0 ? var_11 : (arr_35 [i_8]))) & (((-32756 ? 1152921504606846975 : 606138998))))), (arr_32 [i_9] [i_2])));
                        }
                    }
                }
            }
            var_21 = ((((max((arr_38 [i_2] [i_2]), (arr_38 [i_0] [i_0])))) ? (arr_20 [i_0] [i_2] [i_0] [i_2] [i_2]) : (max((arr_29 [i_0] [i_2] [i_0] [i_0]), (arr_6 [i_0] [i_2] [i_2])))));
            var_22 = ((13150 ? 56613 : 2147483619));
        }
    }
    #pragma endscop
}
