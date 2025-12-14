/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_10 *= ((((((arr_1 [14]) ? (((arr_0 [i_0] [i_0]) & var_3)) : (~-32759)))) ? ((max((arr_0 [i_0] [i_0]), var_9))) : ((((min(144, var_2))) | (max((arr_1 [14]), var_3))))));
        var_11 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] = (arr_1 [i_0]);
        var_12 = ((((((((max((arr_0 [i_0] [6]), var_2))) < ((-(arr_1 [i_0]))))))) < var_2));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_13 = (((((arr_1 [i_1]) + var_7))));
        var_14 = (min((((arr_1 [i_1]) * (arr_1 [i_1]))), var_2));
        arr_5 [i_1] [i_1] = (((((var_9 - (1 | var_2)))) ? (max(0, (0 + 0))) : ((((arr_0 [i_1] [i_1]) ? var_4 : var_1)))));
        arr_6 [i_1] = ((((((((arr_4 [i_1] [i_1]) || var_9)) ? 1 : ((4294967295 ? 7081299718890458327 : (arr_0 [i_1] [i_1])))))) >= (arr_3 [i_1])));
        var_15 ^= ((((arr_1 [i_1]) ? (arr_0 [i_1] [i_1]) : (((arr_4 [i_1] [i_1]) ? var_7 : var_1)))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {
        var_16 ^= ((((min(((var_0 >> (var_5 - 4241793062))), 1))) >= 4294967279));
        arr_9 [i_2] = (max(((max((((~(arr_8 [i_2])))), ((var_5 ? (arr_4 [i_2] [i_2]) : var_9))))), 2220228709776963487));
        var_17 &= (((var_4 - (arr_3 [i_2]))));
        var_18 |= ((((!(arr_1 [i_2]))) ? (((var_8 % (arr_8 [i_2])))) : (!var_4)));
    }
    var_19 = (min(65530, ((var_7 ? var_4 : ((-7081299718890458305 ? 37264 : var_2))))));
    var_20 = var_5;
    #pragma endscop
}
