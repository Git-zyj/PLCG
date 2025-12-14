/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_16 ^= (arr_4 [8] [i_1] [8]);
            var_17 = (min(var_17, (min((arr_0 [6] [i_1]), (arr_2 [i_0])))));
        }
        var_18 = (min(var_18, (((!(((((max(var_3, 228290474887475080))) ? -53353 : ((((arr_6 [4] [i_0]) == 4156127549714848395)))))))))));
        var_19 = (max(var_19, ((((((arr_6 [14] [i_0]) ^ 28)) / (((1 ? 4294967295 : (arr_1 [i_0] [i_0])))))))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_11 [i_2] = 1;
        arr_12 [i_2] [i_2] = ((((((arr_4 [i_2] [i_2] [i_2]) | var_15))) ? (arr_4 [i_2] [i_2] [i_2]) : (arr_4 [i_2] [0] [i_2])));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
    {
        arr_15 [i_3] = 1;
        var_20 ^= (((arr_4 [i_3] [i_3] [6]) ? (arr_7 [i_3] [i_3]) : 1));
        arr_16 [i_3] = (((arr_6 [i_3] [i_3]) + (((((arr_7 [i_3] [i_3]) || (arr_6 [i_3] [i_3])))))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        arr_20 [i_4] [i_4] = (min(680581934, (arr_2 [i_4])));
        var_21 = max(((15720223083853542323 & ((((arr_19 [i_4]) ? (arr_19 [3]) : (arr_4 [i_4] [i_4] [i_4])))))), ((((max((arr_14 [i_4] [9]), (arr_5 [4] [4] [i_4])))) ? ((((2043200170749940910 != (arr_14 [i_4] [i_4]))))) : (min(var_11, var_1)))));
    }
    var_22 = (((var_10 ? var_6 : var_4)));
    #pragma endscop
}
