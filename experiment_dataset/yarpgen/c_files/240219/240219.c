/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (((((-(-127 - 1)))) / var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((-(arr_1 [i_0] [i_0])));
        arr_3 [i_0] [i_0] &= var_6;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_9 [i_1] [i_1] = (arr_8 [i_1] [i_1]);
            arr_10 [i_1] = (((arr_4 [i_1]) + (-127 - 1)));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
        {
            var_18 = (max(var_18, ((((((-(arr_4 [6])))) ? (arr_4 [6]) : (arr_4 [2]))))));
            arr_14 [i_1] [i_1] [i_1] = (arr_7 [i_1] [i_3] [i_1]);
            var_19 = (max(var_19, ((((106 ? (((127 ? 214 : 116))) : (arr_8 [i_1] [16])))))));
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_20 *= 113;
            var_21 = (min(var_21, (((((~(max((arr_7 [i_1] [i_4] [10]), (arr_7 [i_1] [i_1] [18]))))) != (((var_4 && ((max((arr_7 [i_1] [i_4] [10]), (arr_11 [i_1]))))))))))));
        }
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_21 [i_1] = var_10;
            var_22 *= (arr_15 [2] [i_5] [i_5]);
        }
        arr_22 [i_1] = ((((((arr_6 [i_1]) ? (arr_6 [i_1]) : (arr_6 [i_1])))) <= (arr_6 [i_1])));
    }
    var_23 = (((-127 - 1) < 6845733116832490949));
    #pragma endscop
}
