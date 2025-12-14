/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (+-32767);
    var_21 = ((((~((var_4 ? 65535 : 54909))))) ? (((!(((3973680550 ? (-32767 - 1) : 11047566354041182883)))))) : (!var_16));
    var_22 = (!var_13);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [9] = (!-var_7);
            var_23 = ((-((var_10 ? (arr_3 [i_0] [i_0] [i_1]) : ((18446744073709551615 ? 65535 : var_16))))));
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_9 [i_0] [i_0] [i_0] = ((~(((((var_9 ? 12791826703728204070 : 24761))) ? var_15 : ((var_1 ? var_3 : -1351121120))))));
            arr_10 [i_0] [i_0] [i_0] = ((-((~(~var_19)))));
            var_24 = 1711423990;
            var_25 ^= (--1);
        }
        arr_11 [i_0] = (+-47115);
    }
    #pragma endscop
}
