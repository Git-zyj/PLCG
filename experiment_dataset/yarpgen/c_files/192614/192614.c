/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0 - 1]) | (arr_0 [i_0 - 1] [i_0 + 1])));
        var_20 *= (((-127 - 1) && 19));
        var_21 = (((arr_0 [i_0] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : var_13));
        arr_3 [i_0] [i_0] = 15696704753515667606;
    }
    var_22 = ((((max((!var_10), (var_3 < var_2)))) ^ (((~32115) ? ((min(var_6, (-32767 - 1)))) : -1999297570))));

    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_14 [i_1 + 1] = 9223372036854775807;
                        var_23 = 15696704753515667606;
                        var_24 = (max(var_24, ((((~52) == ((13693576620326803966 ^ (((37411 ? var_7 : 0))))))))));
                    }
                }
            }
        }
        var_25 = (max((max(var_2, 2750039320193884009)), (((!(2750039320193884010 | 0))))));
        arr_15 [i_1] = ((~(((0 && var_5) ? var_1 : 32115))));
        arr_16 [i_1] |= (min(1024, -6163604860476868495));
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        arr_19 [i_5 + 1] = (arr_1 [i_5 - 1]);
        var_26 = (max(var_26, 15298945248574265605));
        var_27 = (arr_17 [i_5 + 1] [i_5]);
    }
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        arr_22 [i_6] = ((2311019203 | (((arr_0 [i_6 + 2] [i_6]) ^ (((-2147483647 - 1) * (arr_20 [i_6 + 2])))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 21;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 18;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            {
                                arr_35 [i_6] [i_7] [i_8] [i_8] [i_8] = (max(18446744073709551615, 0));
                                arr_36 [i_6] [11] [i_8 - 2] [11] [i_9] [i_9 + 4] [i_8] = ((~(min(3837806367, 1))));
                            }
                        }
                    }
                    arr_37 [6] [i_8] [i_8] [i_8] = ((!((((arr_31 [17] [i_6] [i_6 + 3] [i_8 + 1]) ? 0 : (arr_31 [i_7] [i_7] [i_6 + 2] [i_8 - 1]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 18;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 18;i_12 += 1)
        {
            {
                arr_44 [i_11] [i_12] [i_11] = (((((15696704753515667606 ? 2750039320193884010 : 127))) && (!var_1)));
                arr_45 [i_11] [i_12] [i_11] = (-104 >= 63);
                var_28 = (max(var_28, (((((124 ? (arr_32 [i_11] [i_12 - 2] [i_12] [i_12 + 1] [i_12 + 2] [i_12 + 3] [i_11 + 3]) : 20706)) >= var_3)))));
                arr_46 [i_11] = (((((((arr_25 [i_11 + 3] [i_11 + 3] [i_11]) >> (33456 - 33448))))) || ((((((2750039320193884010 ? var_15 : 63))) ? 255 : ((max(236, 19))))))));
            }
        }
    }
    var_29 -= (~var_9);
    #pragma endscop
}
