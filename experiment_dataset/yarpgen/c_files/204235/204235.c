/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_15 = var_13;
            arr_7 [i_0] [12] [i_0] = (12359 ^ -112);
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_16 = ((((((((var_11 > (arr_1 [i_0])))) >> (((~var_5) + 3311))))) && ((max(-12, (2151884586 / 10022962347065001507))))));
            arr_11 [i_0] [i_2] = (((arr_0 [i_0]) ? ((min(9947, ((max(var_0, var_1)))))) : (((min((arr_3 [i_0]), (arr_2 [i_0] [i_0]))) / (var_14 && var_0)))));
            arr_12 [i_0] [i_0] = ((var_2 == (arr_5 [i_0])));
            var_17 ^= (max(-125, (arr_0 [i_0])));
            var_18 = (min(var_18, (((1 == ((((((arr_2 [i_0] [0]) / (arr_4 [i_0] [i_2] [i_2])))) - 2151884584)))))));
        }

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            arr_15 [i_0] = (min((max(8423781726644550130, (0 <= 2143082701))), (!160)));
            arr_16 [i_0] [i_0] = (min((arr_5 [i_0]), -82));
        }
        var_19 = (((var_10 >> (((arr_6 [i_0] [i_0]) - 60)))));
        var_20 = ((((((min(var_12, (-9223372036854775807 - 1)))))) % (((arr_6 [i_0] [1]) ? (-9223372036854775807 - 1) : ((12384 ? (-9223372036854775807 - 1) : 53151))))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_21 = (arr_3 [6]);
        arr_20 [i_4] = ((((max(1324816400, (max(2787377090, var_12))))) >= (min((arr_0 [i_4]), (!62)))));
        var_22 = ((((min((arr_1 [i_4]), (arr_1 [i_4])))) ^ (arr_1 [i_4])));
        arr_21 [i_4] = ((((((min(var_0, var_2)) / 226))) * 1));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_24 [i_5] = (min(var_13, ((min((arr_22 [i_4] [i_4] [i_4]), (arr_0 [i_5]))))));
            arr_25 [i_4] [i_4] [i_4] = ((((93 & (((var_7 ? var_10 : var_5))))) ^ (~2258217710)));
            arr_26 [i_5] = ((3266177485602072320 <= ((((((((var_13 + 2147483647) >> (var_5 - 3297)))) && (!1)))))));
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
    {
        var_23 -= (((((arr_22 [i_6] [i_6] [i_6]) >= 3546060412)) ? -816724401 : (((((arr_19 [i_6]) > (arr_22 [i_6] [i_6] [i_6])))))));
        var_24 -= (min((((arr_23 [i_6]) ? (arr_23 [i_6]) : 101)), (1324816400 == -161827122)));
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 10;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            arr_42 [i_8] [i_8] [i_9] [i_10] = (!101);
                            var_25 = (((((!(arr_32 [i_7] [i_7] [i_7])))) - -3492123553267220534));
                            var_26 = ((((((arr_5 [i_7]) ? (var_12 | 3492123553267220534) : 101))) ? (arr_22 [0] [i_8 + 1] [i_8 - 1]) : ((((110 | 2147483647) ? (arr_4 [i_7] [i_7] [i_7]) : (var_14 & 1))))));
                            var_27 = var_12;
                        }
                    }
                }
                arr_43 [i_8] [i_8] = ((~(~-3492123553267220560)));
            }
        }
    }
    #pragma endscop
}
