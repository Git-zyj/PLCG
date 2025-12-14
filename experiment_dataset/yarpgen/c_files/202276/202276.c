/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_12 += (((arr_0 [i_0]) ? ((((arr_0 [i_0]) ? var_10 : 48638))) : (((arr_0 [4]) - (arr_1 [i_0])))));
        arr_2 [i_0] [i_0] = (((((arr_1 [i_0]) < 9567)) ? (((var_2 > 245) ? (max(5505031250304426840, (arr_0 [i_0]))) : (!var_3))) : (((var_4 ? ((var_4 ? -20029 : (arr_1 [i_0]))) : (((var_1 | (arr_0 [i_0])))))))));
        var_13 |= (((min((arr_1 [17]), -8170)) * ((((!((max((arr_0 [i_0]), 2292749665)))))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, ((min(((((arr_1 [i_1]) ? ((var_9 ? 2002217614 : (arr_1 [i_1]))) : var_6))), (((arr_4 [i_1] [i_1]) ? (arr_4 [i_1] [i_1]) : 1)))))));
        var_15 = (min(var_15, ((max((((var_10 & (~1)))), (max(var_11, ((21574 ? var_0 : var_9)))))))));
        arr_7 [i_1] [i_1] = (arr_1 [4]);
    }
    var_16 = (min(var_16, (((((60 | var_11) ? var_10 : 17))))));

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_11 [i_2] = ((~(arr_8 [i_2] [i_2])));

        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 24;i_4 += 1)
            {
                var_17 = (((arr_8 [i_2] [i_2]) | ((min(var_10, (arr_8 [i_2] [i_2]))))));
                arr_17 [i_4] [1] [i_4] |= (arr_8 [i_4 - 1] [1]);
                var_18 = ((+((min((arr_16 [i_2] [i_2]), 32)))));
                var_19 = ((-(!var_10)));
            }
            var_20 *= arr_13 [i_3] [i_2];
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_21 |= (7890080533525721795 <= var_4);
            var_22 = (arr_10 [i_2]);
            arr_22 [i_2] [i_5] [i_5] = ((-(arr_12 [i_2] [i_2] [6])));
        }
        var_23 += ((((((var_1 < -30470) ? ((((arr_9 [1]) ? -26285 : (arr_9 [12])))) : (min(var_9, 0))))) ? (arr_15 [i_2] [24] [i_2] [i_2]) : (((var_11 == 60) ? (((var_5 ? var_10 : var_11))) : (min(5907030580472187638, (arr_8 [i_2] [2])))))));
        arr_23 [i_2] = var_7;
        var_24 *= 1;
    }
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_25 += -1101120004469564660;
        var_26 ^= ((((max((((var_3 > (arr_13 [i_6] [i_6])))), (min((arr_3 [i_6]), (arr_10 [24])))))) ? -3236 : ((7737383637638700015 ? (arr_12 [i_6] [20] [i_6]) : (arr_12 [i_6] [6] [i_6])))));

        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            arr_29 [i_6] [i_6] [i_7] = (arr_12 [i_6] [2] [i_6]);
            var_27 = ((~(((arr_26 [i_6]) % (arr_10 [22])))));
        }
        var_28 = ((-(min(-6641348398395297137, (arr_13 [i_6] [i_6])))));
    }
    #pragma endscop
}
