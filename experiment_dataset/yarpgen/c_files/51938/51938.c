/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        arr_2 [i_0] = ((((((((arr_1 [i_0]) ? var_8 : var_5)) >> (1073741823 || 1073741797)))) * (((((var_8 ? var_3 : (arr_0 [i_0 + 3])))) ? (var_5 != var_9) : (((arr_0 [9]) * var_3))))));
        var_12 = (min(var_12, 34656));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((var_2 ? ((var_2 ? var_3 : 6848720802810501961)) : (1073741823 % 1)));
            var_13 ^= (!3825289669);
            var_14 = var_3;
        }
        arr_7 [i_0 - 1] = ((!((((4788369985308728883 < var_11) ? ((min(var_9, var_2))) : (arr_3 [i_0 + 4]))))));
    }
    var_15 = ((((var_1 == ((var_11 ? 87782015 : var_6))))) % var_4);
    var_16 = -1073741823;
    #pragma endscop
}
