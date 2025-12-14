/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237340
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_12 = (max(var_12, 261935431));
        var_13 = (min(var_13, var_6));
        arr_3 [i_0] = (((((arr_2 [i_0]) ? (arr_1 [i_0]) : -421186661))) ? (~var_4) : ((min((arr_2 [i_0]), (((arr_0 [i_0]) ? 1 : 9))))));
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_6 [i_1] = 17056232417564057359;
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_2] [i_1] = (((0 ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : (arr_10 [5] [i_1] [i_1] [i_3]))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [i_2] [i_3] [i_3] [i_5] = (((arr_9 [i_3 - 1] [i_3 + 2] [1] [i_3]) ? (arr_9 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3]) : 884517649));
                                arr_19 [i_1 + 2] [6] [i_1] [i_4] [5] = ((283465622 ? ((((((1 ? (arr_7 [i_1]) : (arr_17 [6] [i_3 - 1] [6] [6] [i_5])))) ? (arr_11 [i_4 - 1] [i_2 + 2]) : -1834486335))) : ((-(arr_0 [i_5])))));
                                var_14 = ((634052825 ? 170 : 8191));
                            }
                        }
                    }
                    var_15 = (arr_14 [i_1] [8] [i_3] [1]);
                }
            }
        }
        var_16 ^= (-59 % 3530278193);
        var_17 = 0;
    }
    var_18 = 1;
    var_19 = (min(var_19, var_4));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                {
                    var_20 = (max(var_20, 11952));
                    var_21 = ((((((arr_22 [1] [i_6] [i_7 - 3]) ? 32767 : (((arr_21 [i_6]) ^ var_5))))) || (((89 * (min(var_1, 0)))))));
                    arr_27 [i_6] [i_6] [i_6] [i_8] = (((-(((arr_24 [i_6]) ? (arr_24 [i_6]) : var_3)))));
                }
            }
        }
    }
    #pragma endscop
}
