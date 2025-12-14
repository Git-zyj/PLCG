/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] = (~(((arr_0 [i_0]) ? ((100448945005768138 % (arr_0 [1]))) : -625486107)));
        var_20 = (((arr_2 [i_0]) ? (arr_1 [i_0]) : (((min((arr_2 [i_0]), (arr_2 [i_0])))))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_21 = 1;

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_22 = ((((((((arr_5 [i_1]) ? (arr_1 [9]) : (arr_1 [i_2]))) >= ((-(arr_6 [i_1] [i_2])))))) <= ((8396740380864679503 ? -924 : -17976))));
            arr_9 [i_1] [i_2] = (arr_1 [i_2]);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_13 [i_1] = (var_6 ? var_12 : var_6);
            var_23 = ((17975 ? 1913206095 : 8396740380864679503));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_16 [i_1] [i_4] = (max(((1 ? 17976 : -2351482794885941982)), 34));
            var_24 += (((((arr_2 [i_1 + 2]) ? (arr_2 [i_1 + 2]) : (arr_2 [i_1 + 2]))) >> (((((min(var_17, 8396740380864679503)) / 17970)) + 29639))));
            var_25 = ((((min(((var_5 ? -1451091447 : var_8)), -1263746916))) ? (7045605698217462205 < 0) : (((((min(var_12, (arr_1 [i_1 + 2]))) + 9223372036854775807)) >> (((max((arr_8 [i_1] [i_4]), var_12)) - 493283601))))));
        }
    }
    var_26 = var_10;
    #pragma endscop
}
