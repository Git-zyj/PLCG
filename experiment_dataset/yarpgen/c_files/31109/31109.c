/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (19912 == 4294967295);
    var_12 = (((((~2147483648) | (var_10 || var_7)))) ? (!2147483648) : (min((18 || 511), (~4294967292))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = ((-(arr_1 [i_0])));
        var_14 = (arr_3 [i_0] [i_0]);
        var_15 += (arr_2 [i_0]);
        arr_4 [i_0] = arr_0 [i_0];
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            arr_18 [i_1] [i_2] [i_3] [i_1] [i_1] [i_1] = ((4 > 253952) ? 7 : 131071);
                            arr_19 [i_1] [i_2] [i_3] [i_2] [i_2] [i_3] = (4294967282 - 248);
                        }
                        arr_20 [i_1] [i_2] [i_2] [i_2] = (((arr_15 [i_3] [i_4] [i_3] [i_4] [i_2]) == (arr_15 [i_1] [i_2] [i_3] [i_4] [i_4])));
                        arr_21 [i_1] [i_1] [i_3] [i_2] [i_4] = ((((((arr_1 [i_2]) ? (arr_10 [i_1] [i_2] [i_3] [i_4]) : 1747507893))) && (((705134875 ? (arr_9 [i_1] [i_1]) : (arr_9 [i_1] [i_2]))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    arr_27 [i_6] = (((((4294967285 ? 120 : 4096))) != (arr_16 [i_1] [i_1] [i_7] [i_7] [i_7] [i_6])));
                    arr_28 [i_6] [i_6] [i_7] = (arr_12 [i_1] [i_1] [i_1] [i_7]);
                }
            }
        }
        arr_29 [i_1] = (((((3 ? 1 : 16))) ? ((0 | (arr_22 [i_1] [i_1]))) : ((1 & (arr_22 [i_1] [i_1])))));
        var_16 *= (((arr_25 [i_1] [i_1] [i_1] [i_1]) ? ((((arr_24 [i_1] [i_1] [i_1]) ^ 11))) : (((arr_9 [i_1] [i_1]) ? (arr_3 [i_1] [i_1]) : -43))));
    }
    var_17 = (min(var_17, ((((((2 ? -7568150956116946624 : 8644915189456606251))) ? (max(((var_0 ? var_0 : var_7)), var_2)) : (((38 ? 1046573336 : 2787781647))))))));
    var_18 &= ((0 << ((((-(var_3 ^ var_9))) + 548036336))));
    #pragma endscop
}
