/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_14 = 1;
        var_15 |= min(2614085965771653877, 65);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_16 = ((((((0 <= -121) - (!25)))) ? (~var_1) : (226 != 1)));
        var_17 ^= (((((0 != ((1 >> (var_5 - 7696085500996876275)))))) < (min((~1), (!var_6)))));
        var_18 = (max(var_18, var_4));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 4; i_5 < 21;i_5 += 1)
                {
                    {
                        var_19 = (79 | 10606077828095875023);
                        arr_15 [i_2] [i_2] [i_2] [i_5] |= var_4;
                        var_20 = ((((1 ? 2301339409586323456 : 11)) * var_3));
                    }
                }
            }
        }
        var_21 = 2633335611328425522;
        arr_16 [i_2] = (max((~-14729), (((-13 + 2147483647) << (2614085965771653884 - 2614085965771653884)))));
    }
    var_22 = (max(var_22, (((-(270215977642229760 > -2614085965771653877))))));

    for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] = (~1);
        arr_21 [i_6] = 2047;
    }
    for (int i_7 = 1; i_7 < 12;i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 12;i_11 += 1)
                        {
                            {
                                arr_36 [i_7] [i_9] = (var_4 != 14734);
                                arr_37 [i_9] [i_9] = (((1 & 2614085965771653851) >> (((min(15832658107937897765, 32767)) - 32718))));
                                var_23 = var_13;
                                arr_38 [i_9] [i_9] [i_9] = ((589898754 ^ (max(0, 1323690513))));
                            }
                        }
                    }
                    var_24 = ((((((((1323690513 ? var_8 : 59771))) && ((max(5738250607012450455, 73)))))) > ((((~4) < (14357440562835514069 || 105))))));
                    var_25 = var_0;
                    arr_39 [i_9] [i_9] [i_9] [0] = -var_5;
                }
            }
        }
        var_26 ^= (!0);
        arr_40 [i_7] = var_1;
    }
    #pragma endscop
}
