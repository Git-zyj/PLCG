/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((((var_2 ? var_1 : var_16)) << ((min(var_0, 1)))))) ? (min((min(var_11, var_12)), (var_14 ^ var_12))) : ((((!(((var_16 ? 4137 : var_9)))))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((min((arr_0 [i_0]), (arr_0 [i_0]))));
        var_20 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_21 = var_14;
        arr_6 [i_1] = var_18;
    }
    var_22 += var_12;
    /* LoopNest 2 */
    for (int i_2 = 4; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_3] = (min((min((((arr_9 [i_2]) ? 0 : var_11)), (arr_10 [i_2]))), -0));
                arr_13 [i_2 - 4] [i_3] [i_2] = (10667650203611810329 <= var_6);
                var_23 = (max(var_23, (arr_11 [2] [i_3] [i_3])));
                var_24 = (max(var_24, 4213646750849099665));
            }
        }
    }
    var_25 = ((((~(((var_7 + 9223372036854775807) << var_9))))) ? (((var_16 > var_3) + var_13)) : var_8);
    #pragma endscop
}
