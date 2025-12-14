/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] = var_0;
                arr_7 [i_0] [i_0] [i_0] = (min(((~((9223372036854775807 ? (arr_5 [i_0] [8] [8]) : (arr_4 [i_0] [i_0] [i_1 + 2]))))), ((min(41541, (arr_4 [9] [9] [8]))))));
                arr_8 [5] [i_1 + 2] [i_0] = 60;
            }
        }
    }
    var_13 -= (max(((var_7 ? (-9223372036854775801 | 72057594037927936) : (((-9223372036854775799 + 9223372036854775807) >> (23994 - 23955))))), ((var_3 ? 9223372036854775807 : 1))));

    for (int i_2 = 1; i_2 < 20;i_2 += 1)
    {

        /* vectorizable */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_14 -= ((arr_11 [i_2 + 1] [i_3] [i_4]) == 65535);
                var_15 = (var_5 ^ -3680793222635384714);
            }
            arr_18 [i_3] [1] [i_3] = ((~(var_2 & 13518)));
        }
        var_16 = (max(((min(17876, (arr_16 [i_2] [18] [i_2 + 1])))), (17876 - var_9)));
        var_17 -= (min(var_11, -13523));
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        arr_23 [i_5] [i_5] = 17551400860144953388;

        /* vectorizable */
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    {
                        var_18 = ((41532 ? var_4 : 1343397161391015370));
                        var_19 -= -3390;
                        var_20 = ((17224 ^ (arr_17 [9] [9] [16])));
                    }
                }
            }
            var_21 = var_6;
            arr_31 [i_5] [i_5] = 10003420706251307732;
        }
        arr_32 [i_5] = (var_8 | 9223372036854775807);
    }
    var_22 = ((-((min((72057594037927936 == 65535), (min(-4054, 1)))))));
    var_23 = var_12;
    #pragma endscop
}
