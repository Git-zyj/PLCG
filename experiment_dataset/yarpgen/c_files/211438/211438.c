/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_14 = ((~(arr_0 [i_0 - 3])));
        var_15 -= (~-3411667470852743707);
        arr_3 [i_0 - 3] = var_10;
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 15;i_3 += 1)
            {
                {
                    var_16 = ((12633 ? (max((~var_8), (min(-3411667470852743707, var_3)))) : (((((min(var_13, -3411667470852743689))) ? (arr_12 [i_1 + 1]) : (~var_7))))));
                    var_17 = (min((min(((min((arr_5 [i_3]), (arr_7 [i_3])))), -3411667470852743707)), (~-4122743694300011070)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_19 [i_5] |= (-24081 != ((((((~(arr_10 [i_5] [i_2] [2] [i_4])))) < (min(var_8, var_7))))));
                                var_18 = ((~(arr_12 [i_4 + 1])));
                            }
                        }
                    }
                }
            }
        }
        arr_20 [i_1] [i_1] |= ((((((~var_7) ? ((var_9 ? var_8 : 1)) : (((5231888366089221522 ? var_6 : var_13)))))) ? 1 : (~var_8)));
        var_19 = (min(var_10, (((arr_13 [i_1 + 3] [i_1] [i_1 - 1] [12] [i_1 - 1]) ? (arr_18 [i_1] [i_1 + 1] [i_1] [i_1]) : (13214855707620330092 || var_13)))));
        var_20 = ((((max((arr_13 [i_1] [i_1] [i_1] [12] [i_1]), (min(var_9, (arr_13 [0] [0] [8] [0] [i_1])))))) ? 1 : ((~(arr_11 [6] [6] [i_1 + 1] [i_1])))));
    }
    for (int i_6 = 1; i_6 < 13;i_6 += 1) /* same iter space */
    {
        var_21 &= (arr_16 [i_6] [i_6] [i_6] [i_6]);
        var_22 = ((+(min(((((arr_18 [i_6] [i_6 - 1] [i_6] [i_6 - 1]) ? (arr_8 [i_6]) : (arr_4 [i_6 - 1] [i_6])))), var_9))));
        var_23 |= max(-3620784467881212114, (((~var_10) ? (arr_22 [4]) : ((4294967293 ? var_5 : -9223372036854775806)))));
        arr_23 [i_6] [i_6] = (min((((~var_6) ? (((var_3 ? 60 : var_5))) : (var_11 ^ 24081))), (((-(((arr_21 [i_6] [i_6]) ? var_0 : (arr_8 [i_6]))))))));
    }
    var_24 = var_3;
    #pragma endscop
}
