/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-8192 < -11);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 *= (arr_3 [i_0 + 1] [i_3] [5]);
                                arr_12 [i_0 - 2] [i_1] [i_2] [i_3] [i_4 + 2] = ((-(arr_2 [i_0 - 1] [i_0 + 1])));
                                var_18 = (max(var_18, ((min((arr_10 [i_1] [i_1] [i_2] [i_0 + 1] [i_4 + 1]), ((((arr_2 [i_4 - 2] [i_4 + 2]) & (arr_2 [i_4 + 1] [i_4 + 2])))))))));
                            }
                        }
                    }
                }
                var_19 -= (arr_6 [i_0 - 2] [11] [11]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_26 [i_5] [i_6] [i_6] [i_7 + 1] [i_7 - 1] [i_6] = ((((min((arr_24 [i_5] [i_6]), (arr_21 [i_5] [i_6] [i_7 - 2] [i_8])))) ? (arr_22 [i_7 + 1] [i_5] [i_7 - 1] [i_7 - 1]) : (min((-8266962133417789936 ^ var_0), 10985))));
                            arr_27 [i_8] [i_8] [i_5] [1] = (max(((-((-114 ? -8266962133417789941 : -8848)))), ((min(-8266962133417789930, (arr_13 [i_5] [i_5]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_20 += (((arr_29 [i_9 + 1] [i_9 - 1] [i_9 - 1] [i_9 + 1]) < (((arr_29 [i_9 - 1] [i_9] [i_9 + 1] [i_9]) / (arr_29 [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])))));
                            var_21 = -var_3;
                            arr_34 [i_5] [i_5] [19] [i_5] [7] = 8266962133417789920;
                        }
                    }
                }
                arr_35 [i_5] = ((min(1678773679, (arr_13 [i_5] [i_5]))));
                var_22 = (((((((((arr_16 [10] [i_6]) ? (arr_24 [i_5] [i_5]) : (arr_24 [i_5] [i_6])))) ? (arr_25 [i_5] [i_5] [i_5] [i_6] [i_6] [i_6]) : -930255575))) ? (min(var_4, (arr_24 [i_5] [i_5]))) : (((((arr_23 [i_6] [i_6] [i_5]) || (arr_23 [i_5] [10] [i_5])))))));
            }
        }
    }
    var_23 ^= ((((-(var_11 >= var_9))) < (-12936 >= 1998776843)));
    #pragma endscop
}
