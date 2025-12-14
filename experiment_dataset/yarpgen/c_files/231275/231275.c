/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_16 = (((arr_3 [i_0 - 1]) ? (arr_1 [3] [i_0 - 2]) : (-8014207446260927090 * var_2)));
        var_17 &= ((!(((1 ? var_9 : 0)))));
        var_18 = 1;
    }

    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {
        arr_8 [1] &= ((15 + (min((!142), ((65535 >> (3796254822 - 3796254806)))))));
        var_19 = (((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    {
                        var_20 = var_15;
                        var_21 = (((((arr_5 [i_3]) != -563168357)) ? (max((arr_4 [i_1] [1]), var_14)) : ((8776496944253973602 ^ (arr_2 [i_2 - 1] [i_2 - 1])))));
                    }
                }
            }
        }
    }
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_22 += 1;
                                var_23 = ((+((+(((arr_28 [i_5] [6] [i_5] [i_5] [i_6] [i_5]) / 1))))));
                            }
                        }
                    }
                    arr_31 [i_5] [i_5 + 3] [i_6] [i_5] = (((((((arr_26 [i_6] [i_6] [i_6]) & (arr_30 [i_5] [9] [i_6] [i_7] [i_7] [i_5])))))) >= 12239438112406183555);
                    var_24 = (min((max((arr_23 [8] [12] [i_6] [12]), (arr_30 [i_7] [i_7] [i_7] [i_7] [i_6] [i_6]))), 2147483637));
                }
            }
        }
        var_25 = ((((arr_2 [i_5 + 3] [i_5 - 1]) << (((arr_24 [i_5 + 1] [i_5 + 2] [4] [i_5 + 2] [18]) - 18025761252909728929)))));
        var_26 ^= var_3;
        var_27 += -3;
    }
    #pragma endscop
}
