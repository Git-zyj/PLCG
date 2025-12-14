/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 ^= (!70755943884537448);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);
        arr_2 [15] [i_0] = (0 < 0);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_14 = arr_7 [i_1];
            arr_8 [i_1] = ((!(((18375988129825014167 ? 1 : (arr_3 [i_1]))))));
            var_15 = ((70755943884537448 < (arr_6 [i_1] [i_2])));
            arr_9 [13] [11] = ((var_7 ? (arr_6 [11] [i_2]) : (!2601467010639993032)));
        }

        /* vectorizable */
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            var_16 += (arr_0 [i_3]);
            var_17 = 70755943884537448;
            var_18 = ((arr_11 [i_1] [i_3]) ? 1 : (~18446744073709551612));
        }
        for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
        {
            arr_16 [i_4] = (((((-32767 - 1) <= (~var_1)))) != (arr_5 [i_1] [i_4]));
            arr_17 [i_4] [i_4] [i_4] = -0;
            arr_18 [i_4] [i_4] [i_4] = (min(65535, -21002));
            arr_19 [i_1] [i_4] = (arr_4 [13] [i_4]);
            arr_20 [i_4] [i_4] = ((((!((((arr_4 [i_1] [i_1]) | 6240088395809488534))))) || (((~(~-1364311619))))));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
        {
            arr_23 [i_5] [i_5] = var_0;
            var_19 = -1;
            arr_24 [i_5] = 89;
            arr_25 [i_5] = -80;
        }
        arr_26 [i_1] = (arr_10 [i_1] [i_1] [2]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_20 = ((0 ? 553397836 : 11594123240861774464));
        arr_31 [i_6] [i_6] = (6852620832847777149 != 13703846560523661932);
    }
    #pragma endscop
}
