/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 -= var_7;
    var_21 = (!(255 > var_1));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_22 = (min(var_22, -1));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_0] = 0;
            var_23 = (((arr_2 [i_0 - 1]) == 65535));
            var_24 += ((var_0 ? 18 : ((1 ? 2 : (arr_0 [14])))));
            var_25 = var_10;
        }
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_10 [i_0] [i_2] [i_0 + 1] = (-32767 - 1);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        arr_17 [i_0] = var_18;
                        var_26 = (min(var_26, (1 - 32748)));
                        var_27 -= 29;
                    }
                }
            }
            arr_18 [i_0 + 4] [i_0] [i_0 + 2] = (((((var_12 + 2147483647) >> (52161 - 52145))) == ((((arr_12 [i_0 + 1] [12]) < (arr_12 [i_0 + 4] [i_2]))))));
        }

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_28 ^= (8190 < 32766);
            var_29 += (-var_13 / ((32755 ? (-32767 - 1) : 5931923445732313111)));
        }
        var_30 -= (arr_9 [1]);
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
    {
        var_31 = 12514820627977238505;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_27 [i_6] [i_7] [i_8] = (((~-10) > ((((max((arr_21 [8] [i_6]), (arr_24 [7])))) ^ var_14))));
                    arr_28 [i_6] [i_7] [i_6] = ((((((var_12 + 2147483647) >> (32748 - 32732)))) ? (((arr_16 [2] [i_7] [i_6] [i_7]) ? 0 : -32742)) : (8181 < -32755)));

                    for (int i_9 = 1; i_9 < 8;i_9 += 1)
                    {

                        for (int i_10 = 1; i_10 < 8;i_10 += 1)
                        {
                            var_32 = (min((arr_23 [i_10 + 1]), 12));
                            arr_36 [i_8] [i_6] [i_8] [10] [i_8] [i_8] = ((((max(var_0, (arr_11 [i_9 + 4] [i_10 + 4] [i_10 + 1] [i_10 + 4])))) && ((((arr_11 [i_9 + 3] [i_10 + 4] [i_10 + 3] [i_10 + 1]) ? -32741 : var_15)))));
                        }
                        var_33 *= ((((32748 / (arr_3 [i_9 + 4] [0] [i_7]))) ^ (arr_3 [i_9 + 4] [16] [i_7])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
    {
        var_34 = (((arr_0 [i_11]) != (arr_14 [i_11] [i_11] [i_11])));
        arr_39 [i_11] [i_11] = 65535;
    }
    var_35 = var_1;
    #pragma endscop
}
