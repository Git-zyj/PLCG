/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((max(45991, var_8))) / var_8)));
    var_14 = ((((min(var_5, (var_1 % var_3)))) ? ((max(((var_0 ? 0 : var_1)), (var_0 / var_9)))) : ((var_3 ? (((var_8 ? var_4 : 9223372036854775802))) : ((-1 ? var_4 : var_6))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);
        var_15 = (arr_1 [i_0]);
        arr_4 [i_0] = ((((((var_1 % 1) / 1))) ? (((max(1, (arr_0 [i_0]))))) : 2671686366550150948));
        arr_5 [i_0] = (min(((34497 * (arr_2 [i_0] [i_0]))), (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((((max((arr_2 [12] [12]), var_11))) ? ((((max((arr_7 [i_1] [i_1]), 19))) ? (((var_0 ? var_8 : -3818166544447668402))) : (arr_7 [i_1] [i_1]))) : (arr_6 [i_1])));
        arr_9 [i_1] [i_1] = (arr_7 [i_1] [i_1]);
        var_16 = (arr_1 [8]);
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 1; i_3 < 17;i_3 += 1)
        {
            arr_15 [i_3] [10] [i_2] |= (((arr_12 [8]) ? ((max(-647431140, (arr_2 [i_3 + 1] [4])))) : (max((109 / var_11), (-74 / 1)))));
            var_17 = var_3;
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {
                    {
                        var_18 += ((((8 ? (arr_19 [i_4 + 2] [i_4 + 2] [i_4 + 1]) : (arr_19 [i_4 - 1] [i_4 + 2] [i_4 - 1]))) % (max(((-(arr_1 [16]))), (((arr_21 [i_6] [i_5] [i_5] [1] [i_2] [i_2]) ? (arr_1 [10]) : 0))))));
                        arr_23 [i_6] [i_4] = ((((min((max((arr_6 [i_2]), var_9)), (arr_16 [i_4 - 1] [i_4 - 1] [i_6 - 3])))) ? -var_3 : ((((((arr_2 [i_2] [12]) ? 12547 : var_1))) ? (arr_1 [16]) : ((max(-12565, var_2)))))));
                        var_19 -= (((((-1241818793 ? (arr_13 [i_4 + 2] [i_6 - 1]) : (arr_13 [i_4 + 2] [i_6 + 1])))) < (max((var_10 % var_1), ((65535 ? 76 : -1017624305037906592))))));
                    }
                }
            }
        }
        var_20 = (min(var_20, ((min((((3 / -1826690230) ? 43980 : (arr_6 [i_2]))), (arr_19 [i_2] [i_2] [i_2]))))));
    }
    #pragma endscop
}
