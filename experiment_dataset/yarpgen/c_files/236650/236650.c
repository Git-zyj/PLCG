/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_1 <= var_4);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = ((-(((arr_3 [i_0]) ? 3290581856770477861 : (arr_3 [i_0])))));
        arr_4 [i_0] = (((arr_0 [i_0]) | ((((arr_3 [i_0]) >= var_4)))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = ((~(arr_7 [i_1] [i_0])));
            var_12 *= ((((((arr_5 [i_1] [i_0]) ? (arr_0 [i_0]) : ((210 ? 7108879700768013423 : 2507664701342457486))))) || var_9));
            arr_9 [i_0] [9] [i_1] |= (arr_7 [i_0] [i_1]);
            arr_10 [i_0] = 10742591624205684644;
        }
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_13 &= max((arr_12 [16]), (((!(arr_12 [10])))));
        arr_13 [i_2] = ((var_6 ? 7363361179691059693 : 33570));
        var_14 = (((arr_12 [i_2]) <= ((1 ? (arr_12 [i_2]) : 3))));
        arr_14 [7] [i_2] = ((min(var_7, 4294967278)));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_18 [i_3] = (arr_12 [i_3]);
        var_15 = (arr_15 [i_3 - 1] [i_3]);
    }
    #pragma endscop
}
