/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = -219;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((!(((1 >> (34 - 11)))))) ? (((46 / 14) >> (((~var_0) + 75)))) : ((max((var_0 && 119), 40)))));
                var_19 += ((~(max(((6 | (arr_1 [4] [i_1]))), 119))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_20 = (min(var_20, ((((216 ? 1 : (arr_4 [10] [i_1] [0])))))));
                    var_21 = (max(var_21, (((-((32755 ? 19 : var_0)))))));
                    arr_10 [i_0] [i_0] [i_2] = 2063249390038190973;
                }
                for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_22 &= 62004;
                    var_23 = (max(var_23, ((max((min((min((arr_9 [i_1] [4] [i_3]), (arr_4 [6] [i_1] [i_1]))), (((var_16 << (var_6 - 242)))))), ((max((min(var_8, (arr_2 [i_0]))), ((((arr_8 [0]) <= 1)))))))))));
                    arr_14 [i_0] = (min((((!32755) ? (((arr_2 [i_3]) + 1)) : (!var_3))), (arr_3 [6])));
                }
                for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
                {

                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        var_24 *= ((12582912 ? 14 : 65535));
                        arr_19 [4] [i_1] [9] [i_0] = (((-(max(8, (arr_9 [1] [i_0] [i_1]))))));
                        var_25 += ((~((max(((max(124, (arr_8 [2])))), (max(146, 40)))))));
                        var_26 += (min((((arr_0 [6] [10]) ? (((!(arr_8 [2])))) : (((arr_17 [i_0]) / (arr_4 [0] [i_1] [i_5]))))), (((!((max((arr_0 [4] [i_4]), (arr_16 [i_0] [i_1] [i_0])))))))));
                        arr_20 [i_0] [i_1] [i_0] [i_5] [i_0] = ((((max((min(14, (arr_7 [i_1] [i_4] [i_0]))), ((max(-79, var_6)))))) ? (min((arr_9 [i_5] [i_0] [i_5]), ((((arr_17 [i_0]) ? 14076 : 32745))))) : (((~(((arr_7 [i_0] [i_4] [i_0]) ? var_13 : var_9)))))));
                    }
                    var_27 ^= (((arr_18 [9] [i_0]) < (((!4282384370) ? ((max(var_12, (arr_17 [i_0])))) : ((-(arr_17 [i_1])))))));
                }
            }
        }
    }
    var_28 |= ((var_7 & (max(((146 ? var_15 : var_3)), 32745))));
    #pragma endscop
}
