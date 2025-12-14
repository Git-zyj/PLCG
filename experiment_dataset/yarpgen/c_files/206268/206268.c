/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_13 = (min(((var_4 ? var_10 : 4096)), (137 & var_7)));
        arr_2 [i_0 + 1] = max(((var_6 ? ((-79 ? 4140861428 : var_2)) : (((var_9 ? var_4 : var_5))))), ((154105868 ? 4294967295 : 1)));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_14 = (min(var_14, ((max(((((min(50, var_12))) ? (((1 ? 0 : var_4))) : ((19 ? var_7 : -6180430011231547524)))), ((min(2022812496, ((max(50818, 87)))))))))));
                        var_15 = (min(var_15, (!var_6)));
                        var_16 = var_4;
                    }
                }
            }
        }
        var_17 = ((((((var_1 ? var_1 : var_5)) != var_4)) ? (min((((127 ? 63550 : 216))), ((65529 ? 154105868 : 811039968206031510)))) : ((((!122880) ? 1011752261 : (max(var_7, 4294967284)))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_22 [i_5] [i_0] [i_0] [i_4] &= var_11;
                                var_18 -= var_12;
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        arr_26 [i_0] [i_4] [1] [i_4] [i_4] [i_8] = (((0 ? 4140861427 : 4140861428)) << (((((((-79 ? 1 : var_3))) ? ((var_8 ? var_12 : 16)) : ((-1875264176068146498 ? -1486733921 : 31)))) + 876428506)));
                        var_19 = var_1;
                        var_20 ^= var_2;

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_21 = (max((min(((1 ? var_3 : 92)), (-127 - 1))), var_6));
                            var_22 = ((((var_5 ? 835738279 : var_7)) <= (((var_1 ? var_7 : 42)))));
                            arr_29 [1] [i_4] [i_4] [22] [12] = ((((min((((var_4 ? 14 : var_1))), (max(4140861428, 7891378428221919140))))) ? (((((var_12 ? var_1 : var_7))) + ((var_9 ? 17628 : 2310433274481217179)))) : (((1 ? ((max(3, var_5))) : ((var_1 ? 0 : var_5)))))));
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        var_23 &= ((var_12 | ((9223372036854775807 ? var_10 : 44849))));
                        var_24 = ((var_7 ? var_6 : ((var_7 ? 154105853 : var_5))));
                    }
                    /* vectorizable */
                    for (int i_11 = 4; i_11 < 20;i_11 += 1)
                    {
                        var_25 = (min(var_25, (((var_8 ? var_8 : var_4)))));
                        var_26 += (((-9223372036854775807 - 1) ? var_1 : var_9));
                        arr_36 [i_0] [i_4] = var_5;
                    }
                    var_27 = (min(var_6, ((((min(18804, 10))) ? (((6817039045478444216 ? var_9 : var_7))) : var_10))));
                }
            }
        }
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_28 = ((((((((-1839564794776090281 ? var_7 : 154105868))) & ((var_7 ? 2147483647 : var_11))))) ? var_9 : 72));
        var_29 = (min(var_29, (((((max((((1 >> (var_2 + 141)))), (var_1 & -127)))) || ((min(var_2, ((var_5 ? var_6 : var_8))))))))));
        arr_39 [i_12] [i_12] = ((61926 ? -6275376829924007811 : 111));
    }
    for (int i_13 = 1; i_13 < 23;i_13 += 1)
    {
        var_30 = ((((((4027396598 == var_6) ? ((max(var_2, 1))) : var_5))) || 1));
        var_31 += (((((var_10 % var_12) ? ((var_10 ? var_9 : -7310002685946583729)) : (var_3 - var_0)))) ? (min((var_2 <= 3465799785), var_0)) : (((1 ? 0 : 154105868))));
    }
    var_32 = (((((((var_0 << (1 - 1)))) ? var_0 : var_7)) - (max((var_8 % var_5), 2841709789))));
    #pragma endscop
}
