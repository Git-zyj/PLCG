/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_8;
    var_21 *= 4294967295;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_22 = (2 ? (~var_10) : ((~(4294967284 ^ 17))));

        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            var_23 ^= (min(9501355690505942189, 5384222127988694613));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_24 = (~var_9);
                            var_25 = ((-var_5 ? ((((arr_1 [i_1 - 1]) <= (arr_1 [i_1 + 3])))) : (((arr_6 [1] [i_1 + 2] [i_4 + 2]) - (arr_5 [i_1 + 3] [i_3] [i_4])))));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    {
                        var_26 = ((+((((max((arr_11 [i_0] [i_1 + 2] [1] [i_6]), var_18)) >= var_4)))));
                        arr_20 [i_6] [i_1] [i_5] [i_1] [i_1] [i_0] = (arr_1 [i_5]);
                        var_27 = (((~var_8) ? (min(-212361276292256239, 4053924437961583170)) : (((((arr_11 [i_0] [i_1] [i_0] [i_6]) && ((((arr_10 [i_0] [i_5] [i_6]) ^ (arr_8 [i_0] [i_0] [i_5] [20]))))))))));
                        var_28 = (min(var_28, ((((var_8 ? var_4 : -1))))));
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            arr_23 [i_0] [i_7] = (((arr_7 [i_0] [18] [18] [i_0]) + ((min(var_6, (arr_11 [i_0] [i_7] [i_0] [i_7]))))));
            var_29 = (max(var_29, (var_19 == var_15)));
            arr_24 [i_0] [i_7] = 2;
        }
        var_30 *= (max(((var_14 ? ((var_14 ? (arr_2 [22]) : (arr_12 [i_0] [i_0] [i_0] [i_0]))) : (arr_13 [i_0]))), (((-(!2387248108))))));
    }
    for (int i_8 = 4; i_8 < 7;i_8 += 1)
    {
        arr_27 [i_8 - 3] = (arr_8 [i_8] [i_8] [i_8] [i_8]);
        var_31 |= (-1 - 14680064);
    }
    var_32 = ((!(7368872526782506356 <= var_3)));
    #pragma endscop
}
