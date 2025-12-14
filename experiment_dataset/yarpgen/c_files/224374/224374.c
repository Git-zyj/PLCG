/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(((((var_5 & var_2) <= var_10))), -var_6));

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 += ((~((max(((var_9 && (arr_4 [5] [22] [i_2] [i_2]))), (((arr_2 [i_1]) != 1)))))));
                    var_13 = var_2;
                }
            }
        }
        var_14 = (min(var_14, var_0));
    }
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        var_15 = (max(var_15, ((max((((max(var_6, var_8)))), var_1)))));
        var_16 = (min(((-(var_9 != var_5))), (min((arr_3 [i_3 - 3] [i_3] [i_3]), ((var_7 ? var_1 : (arr_2 [i_3])))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 14;i_5 += 1)
            {
                {
                    arr_13 [i_3] [i_3 - 3] [i_4] [i_5 - 3] = (((((!(arr_4 [i_3] [i_4] [17] [i_5 + 2])))) == (!4356)));
                    var_17 = (min((((min(15, 11348260747439919673)) - (arr_2 [i_3]))), var_8));
                    var_18 = (min(var_18, var_4));
                }
            }
        }
        var_19 = (((var_9 / (min((arr_5 [i_3]), (arr_0 [i_3]))))) <= (((((!(arr_2 [i_3])))))));
        arr_14 [i_3] = var_0;
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1)
    {
        var_20 ^= (((+(((arr_10 [1] [i_6 - 1] [1] [1]) * 0)))) * (arr_2 [2]));
        var_21 -= (!(arr_10 [i_6] [i_6] [i_6 - 1] [i_6 - 1]));
    }
    #pragma endscop
}
