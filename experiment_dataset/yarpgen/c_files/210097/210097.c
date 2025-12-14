/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 = ((var_9 ? (((+(((-5353040164071916626 + 9223372036854775807) << (((-342455172 + 342455217) - 44))))))) : ((~(~4653631757055202476)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_12 = (max(var_12, (((8 ? ((((arr_0 [i_0]) != var_7))) : (5234740429619809969 || -779959721))))));
        arr_2 [i_0] = (((var_9 ? var_9 : (arr_1 [i_0]))) + -9157);
        arr_3 [i_0] = ((var_6 ? var_8 : (!var_4)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_13 = (min(var_13, 3));
        var_14 = 1195753555;
        arr_7 [i_1] [i_1] = (-(arr_6 [i_1]));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        var_15 *= (((((73 ? (arr_8 [i_2]) : (3041068086346188742 - 16722839834955841626)))) ? -var_4 : ((((min(var_0, (arr_10 [i_2])))) ? ((-(arr_8 [i_2]))) : ((var_3 ? (arr_0 [i_2]) : 1860572319))))));
        var_16 = (((((var_7 & (arr_1 [i_2])))) < (min((arr_8 [i_2]), (arr_9 [i_2])))));
        arr_11 [i_2] [i_2] = ((2358384727387176088 >= (min(-8430122701097679774, 11))));
    }
    var_17 += max(16, (max(var_2, 3050853600)));
    var_18 = ((var_1 ? var_8 : var_9));
    #pragma endscop
}
