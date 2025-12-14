/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_7));
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (min(((((((arr_0 [i_1 + 1]) >> (((arr_1 [i_1]) - 20701))))) ? (~var_5) : (arr_3 [i_1] [i_1]))), (arr_2 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_21 = (min((((!((!(arr_8 [i_3] [i_0 + 1] [i_0 + 1] [i_3] [i_3])))))), ((((min((arr_9 [i_0] [i_0] [i_0]), var_1))) ? (arr_3 [i_2 - 1] [3]) : (((max(var_16, (arr_5 [i_0] [i_1])))))))));
                            arr_10 [i_0] [i_1] [i_1] [i_1] [1] [i_3] = (max(((max(((min((arr_4 [i_3]), var_8))), (max((arr_3 [i_2] [10]), (arr_7 [i_0] [i_2] [i_0] [i_0])))))), (max((arr_1 [i_0]), (arr_3 [i_0] [i_0])))));
                            var_22 = (max(var_22, ((max((((!((min(62161, 0)))))), (min(var_8, ((-(arr_1 [i_0]))))))))));
                            var_23 = ((min(((1314 ? -18714 : 345135393)), ((-1 ? -122 : 0)))));
                        }
                    }
                }
                arr_11 [i_0] [i_0 + 1] = (min((max((min((-32767 - 1), -122)), (arr_4 [i_1 - 3]))), (((((max((arr_5 [i_0] [i_0]), (arr_5 [i_0] [i_0])))) > (arr_9 [i_0 - 2] [i_1 + 2] [i_1]))))));
                var_24 = ((((max((arr_1 [i_0]), var_16))) ? (min((((var_7 ? var_4 : (arr_2 [i_1 - 2])))), (max(var_7, var_3)))) : (((-((((arr_3 [i_1 - 3] [i_1 - 3]) || var_12))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_25 = (min((!var_8), ((!((max(var_6, (arr_13 [9]))))))));

                /* vectorizable */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_26 = arr_5 [i_5] [i_6];
                    arr_18 [1] [1] [i_6] = -4021517563674837310;
                    var_27 ^= (((arr_15 [i_6] [i_4]) ? (arr_14 [i_5] [i_5]) : var_16));
                }
            }
        }
    }
    #pragma endscop
}
