/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-91179746 % ((1995288850 / ((463059891 ? 26147 : -1329735107))))));
        var_10 = var_1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = (min(2147483647, (min(23317, 1995288850))));
                    var_12 = (max(var_12, (arr_6 [i_0] [i_1] [i_2])));
                    arr_8 [i_2] = var_4;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_12 [i_3] [i_3] = ((((max(var_4, (((1995288840 ? 241 : 24)))))) || (arr_9 [i_3])));
        var_13 ^= ((-(arr_11 [i_3])));
        arr_13 [i_3] = -14414;
    }
    var_14 = (max((max(-6283870401979918652, ((var_4 ? var_6 : var_6)))), (((23329 ? var_8 : var_5)))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 11;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_15 = (min((max(14419, 3)), 2147483647));

                            for (int i_8 = 0; i_8 < 14;i_8 += 1)
                            {
                                var_16 = (((((-9223372036854775805 >= (((-1 ? 1 : 27158)))))) & 86));
                                var_17 = ((-(-965915781058548256 | 23317)));
                            }
                            for (int i_9 = 0; i_9 < 1;i_9 += 1)
                            {
                                arr_28 [i_4] [i_5] [i_6] [i_7] [i_9] [i_5] [i_6] = (((((arr_2 [i_4]) ? var_3 : (arr_4 [i_4 + 1]))) | (min(5885982793918077755, var_1))));
                                var_18 = (max(var_18, ((max(-14414, 137)))));
                                var_19 = var_5;
                            }
                        }
                    }
                }
                var_20 ^= var_9;
                var_21 ^= (((((28494 ? 14438 : 611876928))) ? ((62 ? (min(var_2, 8767989039499541241)) : 2715528108)) : (((-((16565 ? 137 : 1344)))))));
                arr_29 [i_4] [i_5] [i_5] = (~var_0);
            }
        }
    }
    #pragma endscop
}
