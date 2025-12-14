/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (min((min((arr_0 [3]), (((~(arr_4 [i_0] [i_0])))))), (arr_4 [i_0] [i_0])));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] [i_2] = (min((min((((!(arr_0 [i_2])))), (arr_6 [i_0] [i_0]))), (arr_7 [i_0])));
                    var_17 = (arr_0 [i_0]);
                    arr_9 [i_0] [i_0] [i_0] [i_0] = arr_3 [i_1] [i_1] [i_1];
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    arr_12 [i_0] = 2039094581;
                    var_18 *= (arr_6 [i_1] [i_1]);
                    var_19 = ((~(arr_4 [i_0 - 2] [i_0])));
                    arr_13 [i_0] [i_0] = max((arr_6 [i_0] [i_0 - 2]), (min((arr_4 [i_0 - 1] [i_0]), (arr_6 [i_0] [i_0 + 1]))));
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_0] [i_0] = (max((max((arr_1 [i_0]), (arr_1 [i_0]))), (((~((~(arr_11 [i_0] [i_0] [1] [i_1]))))))));
                    arr_17 [i_0] [i_1] [i_0] = (arr_11 [i_0] [i_0] [i_4] [i_4]);
                }
                var_20 &= (max((arr_3 [i_0] [i_0] [i_1]), -1));
                var_21 = (min((((!((min((arr_14 [i_0] [i_0] [i_0]), (arr_14 [i_1] [i_1] [i_1]))))))), (arr_1 [i_0])));
            }
        }
    }
    var_22 = (max(var_22, (((-(((65510 / var_4) ^ 1)))))));
    var_23 = var_9;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            {
                var_24 += 1;
                var_25 = (max(var_25, ((max((max((arr_20 [i_6] [i_5]), (arr_20 [i_5] [i_5]))), (((arr_19 [i_6]) ? (arr_20 [i_6] [i_5]) : (arr_19 [i_5]))))))));
            }
        }
    }
    #pragma endscop
}
