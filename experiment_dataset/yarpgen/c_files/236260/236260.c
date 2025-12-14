/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((~var_9) - (9151314442816847872 - var_1)))) - (((max(12141421277629826789, var_9)) * (!12141421277629826794)))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [4] |= ((((((~var_9) & (((!(arr_1 [1]))))))) - ((-((5961215568696578167 ? 12141421277629826797 : (arr_0 [14] [i_0])))))));
        var_13 = (((((~(~var_9)))) ? ((((((arr_1 [i_0]) - 14999484175641890743)) != (arr_1 [i_0])))) : ((((((-(arr_0 [i_0] [i_0 - 1])))) < -var_0)))));
        var_14 ^= ((~((+(((arr_1 [4]) * (arr_1 [0])))))));
        var_15 = (min(((((arr_1 [i_0]) || var_8))), ((var_1 * (arr_1 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [11] [i_1] = ((((((!((((arr_1 [16]) + var_5))))))) > (((max(var_1, 891699298)) ^ (var_4 * var_5)))));
        var_16 = (max(var_16, ((((((min(1, var_4)))) - (min((arr_4 [i_1] [i_1 - 1]), 4294967295)))))));
    }
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_17 = (max(var_17, ((((((((631773256 ? var_10 : (arr_3 [i_2] [3]))) | (arr_3 [i_2 + 1] [i_2 - 1])))) > ((+(((arr_1 [4]) & (arr_7 [i_2]))))))))));
        arr_8 [i_2] [i_2] = ((!((((arr_7 [i_2 - 1]) ? (arr_7 [i_2 + 1]) : 18446744073709551615)))));
        var_18 &= ((-(min(((1 ? (arr_6 [i_2]) : (arr_6 [i_2 - 1]))), (arr_3 [i_2] [i_2 + 1])))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_11 [i_3] [i_3] = (((((~(32767 ^ var_2)))) - (((var_4 == 14999484175641890746) ? 2251731094208512 : ((min((arr_9 [i_3]), var_9)))))));
        var_19 = (((((min((arr_10 [i_3] [i_3]), var_8)))) ^ (min(var_8, var_10))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_20 *= ((!(((var_4 ? -var_9 : 27)))));
                        var_21 = (max(var_21, (((-(((~var_9) - -1)))))));
                    }
                }
            }
        }
        var_22 = (max(var_22, ((min((((arr_14 [i_3] [i_3] [i_3]) - var_11)), ((var_10 ^ (min(2986309230, (arr_13 [i_3] [i_3]))))))))));
    }
    var_23 ^= ((((var_6 >= 3928715346) ? (min(var_10, var_4)) : (var_4 && var_9))) <= (((((var_4 == var_5) != var_5)))));
    #pragma endscop
}
