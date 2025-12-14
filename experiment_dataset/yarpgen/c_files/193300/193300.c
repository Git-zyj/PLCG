/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += max(((var_4 != (max(var_7, var_9)))), ((((var_7 ? 1 : var_7)) < var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_8 [i_1] [i_1 + 2] = ((-((4749452639458636014 ? 12283640249740241422 : (max(12283640249740241412, var_7))))));

                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_12 = (!-4749452639458636015);
                                var_13 = ((~(arr_7 [i_0] [i_2] [i_2] [i_1] [i_4])));
                                var_14 -= 6163103823969310190;
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                var_15 -= (max(101, (arr_16 [i_1 + 4] [i_1 + 2] [i_2] [i_3] [i_1 + 4])));
                                var_16 = ((+((max((arr_9 [i_5] [i_1 + 4] [i_2] [i_1 + 4] [i_0]), var_5)))));
                            }
                            for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                            {
                                var_17 = (((arr_16 [11] [11] [11] [11] [i_0]) ? (((max((arr_0 [i_0]), -4749452639458636003)) & (arr_1 [i_2]))) : (~var_7)));
                                arr_19 [i_3] [i_3] [i_1] = (arr_10 [i_1]);
                                arr_20 [i_1] [i_2] [i_1] = (max((min((((-512 ? (arr_10 [4]) : (arr_10 [12])))), (arr_13 [i_0]))), 12283640249740241422));
                            }
                            for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                            {
                                var_18 = ((((arr_1 [i_1 + 2]) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 1]))));
                                var_19 ^= ((86 >> ((((-(arr_17 [i_7] [i_3] [i_2] [i_1 + 4] [i_0]))) + 31))));
                                arr_23 [i_2] [i_1 + 2] [i_1] [i_3] [i_7] = ((+(((arr_3 [i_2] [i_1] [i_0]) ? (arr_3 [i_1] [i_1] [i_1 + 4]) : (arr_3 [i_2] [i_1] [i_0])))));
                            }
                        }
                    }
                }
                arr_24 [i_1] = ((((((arr_21 [i_1 + 3] [i_1] [i_0] [i_1] [i_1 + 3] [i_0] [i_0]) ? var_7 : (-4749452639458636022 ^ var_5)))) ? ((~(arr_17 [i_0] [i_1] [i_0] [i_1 - 1] [i_0]))) : (((arr_6 [i_1] [i_1 + 3] [i_1] [i_0] [i_1]) ? ((~(arr_17 [i_1 + 4] [i_1] [i_1 + 2] [i_1 - 1] [i_1 + 3]))) : ((((var_2 + 2147483647) >> (((arr_11 [i_1 + 1] [i_1 + 1] [i_0] [i_1]) - 88)))))))));
                arr_25 [i_1] = ((-var_9 ? ((-((var_4 ? (arr_15 [i_1] [i_1]) : var_0)))) : ((1346879637 ? (arr_1 [i_1 + 2]) : (max(6163103823969310175, (arr_7 [i_0] [i_0] [i_1] [i_1] [i_1])))))));
                var_20 &= ((+(((90 / -1941790506) / var_8))));
                var_21 = ((((((var_3 ? 3686060411 : (arr_12 [i_0] [i_0] [i_0] [i_1] [i_1]))) > (~512))) ? -var_3 : 38947));
            }
        }
    }
    #pragma endscop
}
