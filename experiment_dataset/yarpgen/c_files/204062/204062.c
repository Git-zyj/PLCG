/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_12 *= ((((((~(arr_2 [10])) <= ((((arr_2 [16]) != (arr_1 [i_0])))))))));

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    arr_10 [i_0] = (73 ^ -56);
                    var_13 = (min(var_13, ((min((((!((!(arr_3 [1])))))), ((((!(arr_0 [2] [2]))) ? (((((arr_7 [i_0] [i_0] [14]) && (arr_8 [i_0]))))) : (max((arr_8 [i_0]), (arr_4 [i_0] [18] [18]))))))))));
                    arr_11 [i_0] [i_1 - 2] [i_0] = ((-((-(arr_3 [i_0])))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_14 = (min(var_14, ((((((arr_9 [i_0] [i_1]) & (arr_2 [1]))) | (arr_5 [i_3 + 1] [i_1 - 1]))))));
                    var_15 = (max(var_15, 0));
                    var_16 *= (arr_9 [i_1 + 3] [i_1 + 3]);
                    var_17 = ((-(arr_4 [i_0] [i_0] [i_0])));
                }
                for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
                {
                    var_18 = ((!((max((((arr_16 [i_0] [i_1 + 1] [i_1 - 1] [i_1]) - (arr_0 [i_0] [i_4 + 1]))), (((arr_15 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_4 + 2] [i_1 + 3] [i_0]))))))));
                    var_19 = ((((((arr_15 [i_0] [i_0] [i_0] [i_0]) | ((~(arr_8 [i_0])))))) | (((((~(arr_7 [i_0] [i_0] [i_0])))) & (max((arr_12 [i_0] [i_0] [i_4 + 2]), (arr_0 [i_0] [i_4])))))));
                    var_20 = (max(var_20, (((((arr_14 [i_4 + 1] [18] [i_4 + 2] [i_4 + 2]) && (arr_14 [i_4 + 2] [12] [i_4 - 1] [i_4 + 1])))))));
                    var_21 = (arr_13 [i_0] [i_0] [i_4]);
                    arr_18 [i_0] [i_0] [i_0] = ((((((((arr_3 [i_0]) ? (arr_6 [i_0] [i_1 + 2]) : (arr_4 [i_0] [i_0] [i_4])))))) ^ ((((min(19760, -1001284582))) ? ((((arr_14 [i_0] [i_0] [i_0] [i_0]) ? (arr_15 [i_0] [i_0] [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) : (arr_0 [i_0] [i_1])))));
                }
                var_22 = (arr_16 [i_0] [i_0] [i_1 + 1] [i_1]);
            }
        }
    }
    var_23 = (min(var_23, (~var_8)));
    #pragma endscop
}
