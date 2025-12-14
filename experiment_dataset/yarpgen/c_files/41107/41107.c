/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 *= ((((min(var_14, var_19))) ? (min((((-8485483222518476436 ? 112 : var_13))), 0)) : (((((((var_6 >> (-4385534789812000943 + 4385534789812000975)))) || 4385534789812000934))))));
        var_21 = ((-(!var_11)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_22 = (((3071692304 >> (4385534789812000942 - 4385534789812000920))));
        var_23 = ((1 / 4385534789812000959) ? (((1165929558733832663 ? 3558 : 32752))) : ((var_5 ? 4385534789812000934 : var_14)));
        var_24 = var_9;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_25 *= 1;
                    arr_12 [i_1] [i_1] [10] = (min((~43818), ((min(var_19, var_4)))));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_16 [i_4] = ((min(var_17, 4385534789812000935)));
        var_26 = (((21717 <= 18446744073709551609) >> ((((var_18 << (986565842 - 986565824))) - 3434610674))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            {
                var_27 = 3678582016;
                var_28 = (((((var_13 ? var_9 : 16663))) ? ((((-7005 + 2147483647) >> (var_14 - 96)))) : var_9));
                arr_24 [i_5] [1] [i_5] = (((((var_16 * 470339963) * (min(1223274991, var_15)))) * var_9));
            }
        }
    }
    #pragma endscop
}
