/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_0 + var_2) >= ((var_9 ? -1 : var_4)))) || (max((8053894919762894968 > 0), (var_9 && var_9)))));
    var_11 = (((!65535) && (((-1 ? 59956 : -var_2)))));

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_12 &= ((!(arr_3 [i_0 + 4])));
            var_13 = 9223372036854775807;
            var_14 = (arr_2 [i_0 + 4]);
            var_15 = (((arr_3 [i_0 + 4]) ^ (arr_3 [i_0 + 1])));
        }
        arr_4 [i_0] = (10392849153946656647 || 10817735787989677700);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_16 = var_9;
                        arr_11 [i_0] [i_0] [i_0] [14] = (1 % -4);
                    }
                }
            }
        }
        arr_12 [i_0] [i_0] = ((var_2 * (!var_1)));
    }

    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        var_17 = (((((((!(arr_14 [i_5]))) ? ((8 ? 10392849153946656647 : -4364112224465387683)) : (var_7 == 16)))) ? var_9 : (((((max((arr_2 [2]), (arr_13 [i_5])))) * (!79))))));
        var_18 += (max((((arr_13 [i_5]) ? (arr_13 [i_5]) : (arr_13 [i_5]))), (arr_7 [i_5] [i_5] [i_5])));
    }
    #pragma endscop
}
