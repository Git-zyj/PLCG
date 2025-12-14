/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_12 = (((((1278527109902689291 ? 0 : 23759))) ? (((arr_1 [i_0]) ? (arr_0 [i_0]) : 1)) : (((arr_0 [12]) & (((arr_1 [i_0]) | (arr_1 [i_0])))))));
        var_13 = (-9 + var_1);
        arr_2 [i_0] [i_0] |= (arr_1 [0]);
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_9 [i_1] [i_1] = (arr_4 [8]);
            var_14 += (((arr_7 [i_1] [i_2]) ? (arr_5 [i_2]) : ((((((arr_3 [8]) ? (arr_3 [i_1 - 1]) : (arr_0 [i_2])))) ? (((-(arr_6 [i_1])))) : (((arr_8 [i_1] [13] [i_2]) & (arr_5 [i_1])))))));
            var_15 += ((~(arr_5 [i_2])));
            var_16 *= ((((arr_4 [i_1]) ? var_8 : (((arr_3 [i_2]) & 22)))) | (((((((arr_4 [i_1]) ? (arr_0 [i_1]) : var_3)) >= (arr_4 [i_2]))))));
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_17 = (min(var_17, ((((((~(((var_0 >= (arr_4 [i_6]))))))) ? ((((arr_15 [i_3] [i_3] [i_1 + 2]) + var_5))) : (((((0 ? (arr_12 [i_1] [i_1]) : (arr_16 [i_1])))) ? var_8 : (arr_3 [i_3]))))))));
                            arr_20 [i_1 - 2] [i_3] [i_4] [i_5] [i_4] = (17 < 9);
                        }
                        arr_21 [i_1] [i_3] [i_4] [i_4] = ((((~(((arr_10 [i_4]) ? var_6 : (arr_10 [i_5 + 1]))))) / ((-(arr_7 [i_5] [i_3])))));
                        var_18 = ((var_10 ? (((arr_5 [i_1]) ? (((arr_15 [11] [i_3] [i_5]) ? var_11 : (arr_3 [i_1]))) : ((((0 != (arr_11 [i_1]))))))) : (((((arr_12 [i_1] [i_5]) <= (((~(arr_14 [i_1] [i_4] [8] [i_4] [i_4] [i_4]))))))))));
                        var_19 = (((arr_13 [i_1] [i_3]) ? (arr_15 [i_1] [13] [13]) : (24 + 1762332182)));
                    }
                }
            }
        }
    }
    var_20 = (0 | var_9);
    #pragma endscop
}
