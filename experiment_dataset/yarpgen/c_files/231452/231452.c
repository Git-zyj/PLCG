/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_10 |= ((!(((var_1 ? var_4 : 1)))));
        arr_3 [7] [i_0 + 1] = ((((min((min((arr_2 [i_0 - 1]), var_2)), ((-920224266 + (arr_2 [i_0])))))) ? ((2147483615 ? (~4611686014132420608) : -4611686014132420616)) : ((~((9007199253692416 ? -4611686014132420609 : var_2))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_7 [i_1] &= (4611686014132420608 - 7746275072213187649);
        arr_8 [i_1] = ((1 ? (!1610612736) : ((var_2 ? 26937 : 262142))));
        var_11 = (arr_6 [i_1] [i_1]);

        for (int i_2 = 4; i_2 < 10;i_2 += 1) /* same iter space */
        {
            arr_12 [i_1] [i_1] [i_1] = 9223372036854775799;
            var_12 = (max(var_12, ((((((arr_10 [i_1]) ^ var_9))) ? (1 && var_2) : (min(var_1, (arr_4 [i_2 - 4] [i_2 - 4])))))));
        }
        for (int i_3 = 4; i_3 < 10;i_3 += 1) /* same iter space */
        {
            arr_15 [i_3] = (~(~var_1));
            var_13 = (min(var_13, var_1));
        }
    }
    /* vectorizable */
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        var_14 += ((-((1 ? var_1 : 1))));
        var_15 = (max(var_15, (arr_17 [i_4 - 1] [i_4 + 2])));
        arr_19 [i_4 + 2] = (var_9 | 1);
    }

    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        arr_23 [i_5] = -2037905357188436670;
        var_16 = (min(var_16, ((((((-((var_2 ? var_8 : (-2147483647 - 1)))))) ? ((-(arr_2 [i_5 + 3]))) : var_8)))));
        arr_24 [i_5] = (58587 ? 58587 : (!var_4));
    }
    var_17 = (min(var_17, ((((min(var_5, 26936)))))));
    #pragma endscop
}
