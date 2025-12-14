/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212491
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 |= ((~((-((max(var_0, var_6)))))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (min((((65535 || (((65524 ? 18446744073709551615 : 12555559956637169782)))))), (((-1 ? 562569882 : -7411797551922470519)))));
        var_12 = (max((arr_2 [i_0 - 2]), ((((-(arr_2 [i_0])))))));
        arr_4 [i_0] = (((1 >= 65528) || (arr_2 [i_0 - 1])));
    }
    for (int i_1 = 3; i_1 < 9;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = var_3;
        var_13 = ((((max((((var_3 && (arr_2 [i_1 - 1])))), (arr_0 [i_1] [i_1])))) <= ((((((~(arr_7 [i_1]))) + 2147483647)) << (((((var_7 || (arr_6 [i_1])))) - 1))))));
    }
    for (int i_2 = 3; i_2 < 9;i_2 += 1) /* same iter space */
    {
        var_14 = (((((((((arr_2 [i_2 - 1]) ? -14564 : (arr_6 [6]))) != ((-(arr_12 [i_2 - 3] [i_2 - 3]))))))) ^ (max((arr_9 [i_2 - 1]), (arr_1 [9] [i_2])))));
        var_15 = (max(var_15, (((var_5 ? (arr_10 [0]) : ((((~236) ^ 2750811433888009526))))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    arr_20 [i_3] [i_3] [i_3] [i_5] = var_2;
                    var_16 -= (arr_16 [i_3]);
                    var_17 = (max(var_17, var_9));
                }
                for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
                {
                    var_18 = (~((~(~var_6))));
                    var_19 = (max(var_19, ((+(((arr_19 [i_3] [i_4] [14] [i_6]) ? var_4 : (arr_19 [i_4] [i_6] [18] [i_3])))))));
                    var_20 |= (min((((~(arr_15 [i_4])))), ((((arr_19 [i_3] [i_3] [10] [6]) % (arr_23 [16] [i_4] [i_6]))))));
                }
                arr_24 [i_3] [0] [i_4] = (max(((((231 ? 20 : 562569852)) % (arr_23 [i_4] [18] [18]))), (((~(arr_19 [i_3] [16] [4] [i_3]))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_21 = (min(var_21, (((~(arr_23 [19] [i_4] [i_3]))))));
                            arr_30 [i_8] [9] [i_3] [i_3] = var_3;
                            arr_31 [14] [i_3] [i_3] [i_7] [i_8 + 3] = var_0;
                        }
                    }
                }
                arr_32 [11] [11] = var_8;
                var_22 += arr_19 [i_3] [i_3] [6] [10];
            }
        }
    }
    #pragma endscop
}
