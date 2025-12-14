/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_14 += ((((max(var_4, var_5))) >= (arr_0 [i_0])));

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    arr_7 [i_1] [i_1] [i_1] [i_1 - 1] = (((((((max(var_10, 182))) ? (arr_4 [i_1 + 2] [i_1] [i_1 + 2]) : (arr_6 [i_1 + 2] [i_1] [i_1])))) ? (((arr_1 [i_1]) ? (((arr_3 [i_0] [i_1] [i_2]) >> (var_4 - 68))) : (arr_2 [i_0] [i_1]))) : (3767 / var_12)));
                    var_15 = ((-(58423 != 8)));
                    arr_8 [i_0] [i_0] [i_2] [i_0] = (((arr_3 [i_1 + 1] [i_1 + 1] [i_1 - 1]) ? ((-(arr_0 [i_0]))) : ((+((13876 >> (((arr_5 [i_0] [i_2] [i_0] [i_0]) - 83))))))));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_16 |= (((((max((arr_4 [i_3] [i_1] [i_3]), (arr_10 [i_0])))) * (arr_11 [i_0] [i_0] [i_1 + 2] [i_0]))));

                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_14 [i_0] [i_1 - 1] [i_1 - 1] [i_0] [i_3] = (((~(arr_12 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1]))));
                        arr_15 [i_3] [i_3] [i_3] [i_0] = ((~(arr_6 [i_0] [i_1] [i_3])));
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] [i_5] [i_0] = (((arr_0 [i_0]) ? var_1 : (arr_5 [i_0] [i_1] [i_5] [i_5])));
                    arr_20 [i_0] [i_1] [i_5] = ((var_12 ? var_13 : 57380));
                }
                var_17 = (max(((min(58423, (max(19219, var_13))))), ((((!(arr_2 [i_0] [i_1]))) ? var_8 : (~var_5)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {

                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        arr_34 [i_6] [i_6] [i_7] [i_8] [i_9] = ((!(arr_25 [i_6] [i_6 - 1] [i_6 - 1])));
                        arr_35 [i_6] = var_5;
                    }
                    var_18 += ((var_5 + (((!(arr_30 [i_7] [i_7] [i_6 + 2] [i_7]))))));
                }
            }
        }
    }
    var_19 = (((var_7 > var_13) ? (((var_10 && 145) ? 58446 : var_5)) : var_11));
    #pragma endscop
}
