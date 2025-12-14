/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] &= ((max(var_7, (var_9 * var_6))) <= (arr_0 [i_0]));
        arr_4 [i_0] = var_7;
        arr_5 [i_0] |= (((arr_0 [1]) ? ((var_7 ? ((var_9 ? var_7 : (arr_2 [1]))) : var_8)) : var_2));
        arr_6 [i_0] [i_0] = (max((arr_2 [1]), ((((((var_8 ? (arr_0 [i_0]) : (arr_0 [7])))) || (((var_2 ? var_1 : var_1))))))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_10 = (max(var_10, (((((((max(var_4, (arr_7 [i_1])))) ? ((var_0 ? (arr_7 [1]) : (arr_8 [i_1] [i_1 + 1]))) : (((max(var_6, (arr_8 [i_1] [i_1 + 1]))))))) | ((((((var_9 || (arr_7 [i_1])))) >> (var_0 + 114)))))))));
        arr_9 [i_1] = (((((((arr_8 [i_1] [7]) ? (arr_8 [i_1] [i_1]) : var_5)))) ? ((((((arr_7 [i_1]) ? var_3 : var_5))) - ((var_5 ? (arr_8 [i_1 + 1] [i_1]) : var_7)))) : (arr_8 [7] [7])));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_11 += ((((((((var_1 ? (arr_11 [i_1 - 1] [i_1]) : (arr_8 [i_2] [i_1])))) ? (arr_7 [i_1 + 1]) : (((((arr_8 [i_1] [i_2]) && var_6))))))) ? (((var_0 ? var_9 : (((arr_7 [i_1]) ? var_3 : (arr_11 [i_1] [i_1])))))) : (((arr_10 [i_2]) ? (arr_8 [i_1] [i_2]) : (((arr_7 [13]) ? (arr_8 [1] [1]) : (arr_7 [i_1])))))));

            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                var_12 &= (arr_8 [i_1] [i_2]);
                var_13 = (((((((((arr_13 [i_2] [i_2] [i_2]) ? (arr_8 [i_1] [i_2]) : var_6))) ? (((var_1 > (arr_12 [i_1 - 1] [i_2] [i_3])))) : (((arr_8 [i_1] [i_1]) ? var_5 : (arr_13 [i_2] [4] [1])))))) ? ((((((((arr_11 [13] [i_2]) ? (arr_13 [i_2] [i_2] [2]) : (arr_12 [i_1 - 1] [i_1] [i_1])))) <= ((var_0 ? (arr_8 [i_2] [i_2]) : var_2)))))) : (min((arr_12 [i_1] [i_2] [i_2]), (arr_7 [1])))));
            }
            var_14 = (((arr_10 [i_2]) ? (arr_10 [15]) : (((((var_1 && var_5) || var_2))))));
            arr_14 [i_1 + 1] [i_2] = (((arr_13 [i_2] [i_2] [i_2]) ? (var_4 | var_0) : (((arr_11 [i_1] [i_2]) ? (((arr_10 [i_1]) ? var_0 : var_5)) : ((var_5 / (arr_8 [4] [i_1 + 1])))))));
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            var_15 += ((var_1 ? var_6 : (((((var_8 ? (arr_7 [i_1]) : var_5)) != (max((arr_11 [i_4] [i_1]), (arr_12 [4] [4] [4]))))))));
            arr_17 [i_4] = var_2;
            var_16 &= (((((var_1 ? var_9 : (arr_7 [i_4])))) ? (((arr_8 [14] [14]) ? (arr_15 [i_1]) : (arr_12 [16] [6] [1]))) : ((min((arr_11 [9] [1]), var_5)))));
            var_17 = var_4;
        }
        /* vectorizable */
        for (int i_5 = 4; i_5 < 16;i_5 += 1)
        {
            arr_20 [i_1] = var_7;
            var_18 = (((((arr_7 [i_1]) <= var_4)) ? ((((arr_7 [i_1 - 1]) ? var_0 : var_5))) : (arr_19 [9] [i_5 - 4] [i_1 - 1])));
        }
        for (int i_6 = 1; i_6 < 15;i_6 += 1)
        {
            var_19 = var_3;
            var_20 = (i_6 % 2 == zero) ? ((min(((var_7 >> (((arr_13 [i_6] [i_6] [i_6]) - 1057654971)))), var_2))) : ((min(((var_7 >> (((((arr_13 [i_6] [i_6] [i_6]) - 1057654971)) - 223241277)))), var_2)));
            var_21 = (max(var_21, ((((((((var_7 ? (arr_19 [10] [i_1] [i_1]) : var_0)) & (arr_8 [14] [i_6 + 3])))) ? (max(var_8, var_2)) : (arr_19 [i_1 + 1] [11] [i_1]))))));
        }
        arr_23 [i_1] = (((max((min(var_2, var_8)), var_9))) ? (arr_21 [i_1 - 1] [i_1 - 1] [i_1 + 1]) : ((((min(var_8, var_6)) <= var_0))));
    }
    var_22 = (max(var_22, var_9));
    var_23 = (max(var_23, (((var_5 ? (((((var_4 ? var_8 : var_5)) < (var_0 && var_2)))) : ((((var_0 || var_4) > ((var_7 ? var_1 : var_1))))))))));
    var_24 = (var_9 - var_4);
    var_25 = ((((((((var_5 ? var_9 : var_9)) + 9223372036854775807)) >> (var_9 + 2886075514272251052)))) ? (min((max(var_3, var_7)), var_8)) : var_5);
    #pragma endscop
}
