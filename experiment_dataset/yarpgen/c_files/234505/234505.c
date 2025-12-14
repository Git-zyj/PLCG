/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((((!-1) % ((var_3 ? var_1 : -7726)))));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_1] = (((((-25014 ? -25028 : 24998))) ? (((((arr_3 [i_0] [i_0]) > (min(-25014, 669918837)))))) : (((((var_9 * (arr_3 [i_0] [i_0])))) ? (((1732 ^ (arr_0 [i_1])))) : ((var_5 & (arr_3 [i_0] [i_0])))))));
            arr_7 [i_0] [i_0] = (min(5255712769573308335, -1));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            var_10 = (min(var_10, ((((((!(((-25009 ? 4095 : -10687)))))) >> ((((((9000 ? -1 : var_6)))) + 27)))))));

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_11 = (arr_3 [i_0] [i_0]);
                var_12 = (-127 - 1);
                var_13 = var_1;
                arr_13 [i_0] [i_2] [i_3] [i_3] = ((~((((arr_3 [i_0] [i_2]) <= 8414)))));
            }
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                var_14 = (min(((((arr_14 [i_0]) && 4095))), (((arr_14 [i_0]) ? (arr_14 [i_4]) : (arr_14 [i_0])))));
                arr_16 [i_0] [i_0] [i_4] [i_4] = (((-127 - 1) ? (min((18446744073709551615 - var_9), (((var_1 ? 0 : (-127 - 1)))))) : (((arr_14 [i_2]) ? (arr_12 [i_0] [i_2] [i_4] [i_4]) : (arr_14 [i_0])))));
            }
        }
    }
    var_15 = (min(25005, 0));
    #pragma endscop
}
