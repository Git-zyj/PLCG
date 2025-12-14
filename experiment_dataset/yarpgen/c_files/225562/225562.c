/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_14 = 127;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_15 = (arr_4 [i_0] [i_1] [6]);
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            var_16 = (((arr_10 [i_4] [i_4] [i_3] [i_4] [i_4]) ? (!var_3) : 127));
                            var_17 = (((arr_5 [i_2 - 4] [i_0 + 1]) ? (arr_5 [i_2 - 4] [i_0 + 1]) : 12817));
                        }
                    }
                }
            }
        }
        for (int i_5 = 3; i_5 < 11;i_5 += 1)
        {
            var_18 |= ((!((((arr_12 [i_0] [i_5] [7] [i_0 - 1] [i_5 - 3] [i_5 - 1]) ? var_5 : 0)))));
            var_19 = ((var_4 > (arr_11 [i_5 - 1] [i_0] [i_0] [i_0])));
            var_20 = ((var_7 ^ ((-1161900271682788654 ? var_1 : (-127 - 1)))));
            arr_19 [7] [i_0] = ((-(((arr_2 [i_0]) ? (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1]) : 234609636495111945))));
            var_21 += (arr_18 [i_0]);
        }
    }
    for (int i_6 = 1; i_6 < 16;i_6 += 1)
    {
        var_22 = ((+(((65535 || var_8) ? var_10 : -1161900271682788648))));
        var_23 = (min(var_23, 59808));
    }
    var_24 += var_6;
    var_25 = var_8;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    arr_32 [i_7] [i_8] [9] [i_7] = ((~(((!(arr_0 [i_7]))))));
                    var_26 ^= 1;
                }
            }
        }
    }
    #pragma endscop
}
