/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (arr_1 [i_0] [9]);
        var_16 = 49178;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_6 [6] [i_1] = ((var_13 ? (arr_5 [2] [i_1 + 3]) : -32));
        arr_7 [15] [i_1] = ((-((931534329 ? 3363432957 : (arr_3 [7])))));
        var_17 = 5539208346520539069;
    }
    var_18 = (((max(931534329, 1)) % (((var_12 ? ((max(var_0, -18))) : 27058)))));

    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_19 = (max(var_19, ((min(((max(16, 127))), (((~1652509462) ? (arr_8 [i_2] [12]) : (14180405390841970198 * var_11))))))));

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_14 [i_2] [i_2] = ((((!(((arr_9 [i_2]) && (-2147483647 - 1))))) || ((min((arr_13 [12]), ((var_1 ? var_14 : 894731867)))))));
            var_20 = ((-var_13 <= (min(1652509450, -1169788192))));
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_21 |= 41511;
        var_22 = ((-(((arr_9 [i_4]) ? -0 : (arr_13 [i_4])))));
    }
    #pragma endscop
}
