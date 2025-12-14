/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_18 = (((((arr_0 [i_0 - 1] [i_0 - 1]) | (arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) - (~var_2)));
                    var_19 = (i_1 % 2 == 0) ? (((((((((arr_2 [i_2] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_1 [5])))) ^ (min(var_4, (arr_3 [i_2] [i_1] [i_0]))))) - (((var_8 ? ((var_5 << (((arr_5 [i_0] [i_1]) - 1025051953)))) : ((((arr_0 [i_2] [i_1]) > (arr_6 [i_0] [1] [i_2])))))))))) : (((((((((arr_2 [i_2] [i_1]) ? (arr_5 [i_1] [i_1]) : (arr_1 [5])))) ^ (min(var_4, (arr_3 [i_2] [i_1] [i_0]))))) - (((var_8 ? ((var_5 << (((((arr_5 [i_0] [i_1]) - 1025051953)) - 1623590786)))) : ((((arr_0 [i_2] [i_1]) > (arr_6 [i_0] [1] [i_2]))))))))));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    arr_10 [i_0] [i_0] [1] [10] |= -50;
                    var_20 = (arr_5 [i_0 + 1] [i_1]);
                }
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    arr_14 [i_4] [i_1] [i_1] [i_0] = (!-1859051894);
                    arr_15 [i_1] [i_1] = ((var_12 ? (arr_5 [5] [i_1]) : ((((min((arr_11 [i_0 - 1] [i_1] [i_1]), 9223372036854775794))) ? (min(51440, (arr_11 [i_4] [i_4] [i_1]))) : (arr_8 [i_0] [i_0] [i_0] [i_0])))));
                    var_21 = 1859051891;
                }
                arr_16 [i_0] [i_1] [i_0] = (arr_11 [i_0 + 1] [i_0 + 1] [i_1]);
            }
        }
    }
    var_22 = (0 % var_13);
    var_23 = (((((1 ? var_14 : 4095)) <= (var_5 % 2719414998356074784))));
    #pragma endscop
}
