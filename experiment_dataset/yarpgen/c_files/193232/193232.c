/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(4294967278, -329221832)) / 1));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_12 = (min(var_12, (!10293404948977302691)));
        arr_2 [i_0] [i_0] = var_3;
        arr_3 [3] = (var_9 & 1538192396);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_13 = 0;
            var_14 ^= arr_8 [i_1] [i_2];
            var_15 = (max(var_15, 1));
            arr_9 [i_1] [i_2] [i_2] = 218178989;
        }
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            var_16 = (min(var_16, (arr_7 [i_3] [i_1])));

            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
            {
                arr_14 [i_3] [i_1] = ((((((arr_10 [i_1] [i_3]) ? var_2 : 1538192396))) || var_7));
                arr_15 [i_1] = (!0);
                arr_16 [i_4] [i_1] [i_3] [i_1] = (218178984 || var_10);
                var_17 = (1 >= 28200);
            }
            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
            {
                arr_19 [3] [i_3] = ((325439182 ? (arr_11 [i_5] [i_3]) : (((var_1 ? -24724 : (arr_10 [i_5] [i_1]))))));
                var_18 = (min(var_18, ((13416 ? (arr_17 [i_5] [i_3]) : 50853))));
                var_19 = var_1;
            }
            arr_20 [i_1] [i_1] [i_1] = (((arr_1 [i_1] [i_3]) ? (arr_1 [i_1] [i_3]) : (arr_1 [i_3] [i_1])));
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    arr_25 [i_1] [i_6] [21] |= (((((var_9 ? 9129248229922005275 : 1538192396))) ? -6328859872634884911 : 0));
                    var_20 = -42854020;
                }
            }
        }
        var_21 = ((-329221844 ? var_4 : ((2950 ? 1320300257 : var_9))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_28 [i_8] [i_8] = (((((134217727 ? var_6 : var_0)) - ((max(-2048, 5058))))) > (min(((var_9 ? (arr_13 [i_8] [i_8]) : var_9)), (arr_12 [i_8] [i_8]))));
        var_22 = (min((((((31457280 ? -5313 : var_3))) ? var_1 : ((max((arr_7 [i_8] [i_8]), var_3))))), (((1538192396 || -1303328163) << (((arr_17 [i_8] [i_8]) - 212043239))))));
    }
    var_23 = 42854019;
    #pragma endscop
}
