/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_12 |= ((~((0 * (arr_2 [i_0])))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 -= ((-(var_7 | 1)));
                    var_14 += -var_11;
                }
            }
        }
        var_15 = ((((((!(var_10 && var_7))))) ^ ((5581671865340559468 | (arr_5 [i_0] [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_16 = ((-9223372036854775798 * (1094745774 / -1567889342258042467)));
        var_17 = ((var_6 ^ (arr_0 [i_3] [i_3])));
        var_18 = (arr_9 [i_3]);
    }
    for (int i_4 = 1; i_4 < 23;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                {
                    var_19 += (((((var_10 << (var_1 + 2396959496209254333)))) || (!var_11)));
                    var_20 += ((((((((arr_14 [i_4 - 1] [i_5] [i_6]) * 2801559918)) * (10 / var_11)))) * (((1 / 22) / ((1567889342258042467 / (arr_16 [i_6] [i_4] [i_4])))))));
                }
            }
        }
        var_21 = (var_0 * 0);
        var_22 |= ((((((arr_13 [i_4 + 1]) * var_2))) / var_6));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_23 -= (((var_4 + 2147483647) << (((arr_2 [i_7]) * 0))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    var_24 = (((arr_17 [i_7] [i_7] [i_7]) % var_1));
                    arr_26 [i_7] [i_8] [i_9] = ((((((arr_10 [i_7]) | -449262012))) | var_5));
                    var_25 = (var_3 - var_8);
                }
            }
        }
    }
    var_26 = ((var_0 - ((-(var_5 - var_9)))));
    #pragma endscop
}
