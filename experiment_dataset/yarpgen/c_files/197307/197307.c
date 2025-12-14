/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = var_9;
        arr_3 [i_0] = (((arr_0 [i_0]) && var_0));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            arr_6 [i_1] [i_0 - 1] = var_16;
            var_20 = (((var_6 >= var_15) ? (((var_16 ? var_4 : var_6))) : ((var_7 ? (arr_5 [12] [i_1]) : (arr_4 [i_0 - 1] [i_0 - 1])))));
            arr_7 [i_1] [14] [6] = (((arr_4 [i_0 + 1] [i_0 - 1]) < (arr_4 [i_0 - 2] [i_0 - 1])));
            var_21 = (((var_18 && -110) ? var_16 : (((8062798470617189819 < (arr_0 [i_1]))))));
        }
        var_22 = (max((2147483629 >= var_2), 42));
        var_23 = ((var_1 <= (((var_13 <= var_16) & (var_19 <= var_2)))));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        arr_11 [i_2] = ((((((min((arr_9 [i_2]), -6))) ? (~-8062798470617189807) : 8062798470617189827)) <= (((((-102 & var_8) <= -21))))));
        var_24 = var_18;
    }
    var_25 = var_18;
    var_26 = var_1;
    var_27 = var_16;
    #pragma endscop
}
