/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [4] |= ((+(((arr_0 [i_1]) | ((-(arr_3 [8])))))));
                var_19 = var_3;
                var_20 = (max(var_20, (((-var_5 | (((~(arr_4 [i_1] [i_0])))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            {
                var_21 = ((+((+(((arr_11 [i_2]) * var_4))))));
                var_22 = (min((arr_6 [i_2]), ((1615845863 + (((var_3 + (arr_12 [8] [14] [i_3]))))))));
                var_23 -= (min((var_10 & var_6), 13767095147364368939));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_18 [i_2] = ((max(var_7, (max((arr_9 [i_2] [i_5]), var_6)))) % var_8);
                            var_24 *= (arr_9 [i_2] [i_2]);
                            var_25 = ((13767095147364368936 | (max(var_14, ((((arr_17 [i_2] [i_2]) == var_16)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
