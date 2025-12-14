/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = 6;
                    var_16 = ((-((min((arr_0 [i_0] [1]), (arr_0 [i_2] [i_1]))))));
                    arr_6 [i_0] [i_1] [i_1] = (-3224858821578987185 ? (arr_0 [i_0] [i_0]) : (((1 >> (((arr_1 [i_2] [i_2]) - 4480696518667162503))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_1] = (!((!(arr_12 [i_1] [i_1] [4] [i_1] [i_1]))));
                                var_17 = ((((-(arr_10 [7] [7] [0] [7] [i_1] [i_1] [i_1]))) + -1));
                                arr_15 [i_0] [i_1] [1] [1] [i_0] = (!(((var_9 ? ((((arr_9 [i_0] [i_0] [i_0]) - 1))) : 4294967290))));
                                arr_16 [i_0] [i_1] [i_1] [11] [i_1] [6] = ((+(((arr_9 [i_2] [i_2] [i_2]) ? (arr_9 [i_1] [i_2] [10]) : (arr_9 [11] [6] [3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = ((((min(var_5, var_4))) ? -var_4 : (var_7 ^ 65515)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_19 = (min(((~(arr_7 [i_5] [i_8 - 1] [i_8 - 1]))), (((arr_8 [i_5] [i_5] [i_8] [i_8] [3] [4]) << (var_2 - 27881)))));
                                arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_8] [i_5] = (arr_2 [i_6] [i_6]);
                                var_20 = (((arr_21 [i_5]) ? (((arr_21 [i_5]) ? (arr_21 [i_5]) : (arr_21 [i_5]))) : 1));
                                var_21 -= (((((((-(arr_2 [i_7] [i_7]))) && ((max(65511, 0))))))));
                                var_22 *= 4294967289;
                            }
                        }
                    }
                }
                arr_32 [i_5] [i_5] = (((((arr_27 [i_6] [i_5] [i_5] [i_5] [i_5]) * (arr_1 [i_5] [i_5]))) * ((var_2 * (arr_1 [i_5] [i_5])))));
            }
        }
    }
    #pragma endscop
}
