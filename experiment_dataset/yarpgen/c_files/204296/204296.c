/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_7 ? (!var_12) : var_3));
    var_14 = ((20735 << ((((44800 ? 64736 : 20748)) - 64733))));
    var_15 -= ((var_5 ? 37392 : 0));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            var_16 = (min(var_16, var_4));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_17 ^= (((((20751 ? var_12 : 59512))) ? (var_4 - var_2) : 43944));
                arr_9 [i_1] = var_1;
            }
            var_18 -= ((45667 <= (((((24732 ? (arr_1 [i_1]) : 0))) ? 32767 : ((52797 ? 46809 : var_10))))));
        }
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            var_19 = ((37308 - (arr_12 [i_0 - 1] [i_0 - 2] [i_0 + 1])));
            arr_13 [i_0] [i_3 + 1] = (min(((26496 ? var_12 : 0)), var_4));
            arr_14 [i_3] = ((-((20721 ? (arr_7 [i_0] [i_0 - 2] [i_3] [i_3]) : var_11))));
        }
        arr_15 [i_0 - 2] = (((((((var_5 >= (arr_8 [i_0] [7] [0]))) ? -var_1 : var_3))) ? ((((11354 << (40742 - 40734))) - ((min(0, var_12))))) : ((var_4 ? 1991 : (((arr_7 [i_0] [i_0] [i_0] [7]) % var_8))))));
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        arr_18 [i_4] [i_4] = (min(((var_3 ? (~var_1) : (arr_16 [i_4 - 1] [i_4 - 1]))), ((65533 ? var_2 : var_12))));
        arr_19 [i_4] = ((59160 ? ((15270 ? 65535 : (61703 + var_0))) : ((65535 ? 65345 : 1))));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        arr_24 [22] [i_5] |= -65535;
        arr_25 [i_5] = (((((56329 % 65535) << (((var_4 | 1) - 17615)))) - (65534 - 1023)));
        var_20 = (((-17904 - 50716) ? ((var_5 << (var_8 - 43896))) : (((11010 ? 0 : 10940)))));
    }
    #pragma endscop
}
