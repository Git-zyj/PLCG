/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((~((min(var_0, -176968139)))));
        arr_3 [i_0] = ((((max((max((arr_0 [i_0]), -4)), (max(var_13, (arr_0 [0])))))) ? var_11 : ((~(arr_1 [i_0])))));
        var_18 ^= ((!(arr_1 [i_0])));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_7 [i_1] = (((~(arr_1 [i_1 - 2]))));
        arr_8 [i_1] = ((-4 ? -4 : 8192));
        var_19 ^= ((~(((var_11 < (~-111))))));

        for (int i_2 = 1; i_2 < 7;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    {
                        var_20 -= 63;
                        arr_16 [i_1] [i_1] = ((-4 ? ((((!(arr_11 [i_1] [i_1]))))) : ((-((41272 ? var_7 : (arr_15 [i_1] [i_2] [i_3] [i_4])))))));

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_21 = ((((((arr_13 [i_1] [i_3] [i_3] [i_5]) ? (arr_1 [i_1]) : (arr_18 [i_1 - 1]))) != (min(var_15, (arr_11 [i_1] [i_1]))))));
                            var_22 -= ((~(max(((65535 << (((arr_5 [i_1]) + 32052)))), 10774))));
                            arr_19 [i_1] [i_1] = (arr_12 [i_5] [i_1] [8]);
                            var_23 = (max(var_23, (((((min((8191 - 123999549), ((var_2 ? 5 : 110))))) ? -233 : (min(var_12, ((-45 ? (arr_10 [i_2 - 1] [i_4]) : (arr_10 [i_4] [i_2]))))))))));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        {
                            var_24 ^= ((~((~((1690144308 | (arr_23 [i_1] [i_7])))))));
                            var_25 = (max(-45, ((((min((arr_15 [i_1] [i_2] [i_2] [i_7]), 3765459753))) ? (~var_5) : 40111))));
                            var_26 = (((((max(var_9, (arr_12 [i_8 - 1] [i_1] [0])))) ? (!3327353183) : (var_13 < var_9))));
                            var_27 = ((-((min((arr_14 [i_8 - 1] [1] [i_1] [i_1] [i_1] [i_1]), (arr_14 [i_8 - 1] [i_8] [i_1] [i_1] [i_1] [i_1]))))));
                            var_28 = (min((((arr_23 [i_1] [i_1]) ? (arr_14 [i_1] [4] [i_2 + 2] [i_1] [1] [3]) : (arr_25 [i_7] [i_2]))), (4175136725169191601 && 67)));
                        }
                    }
                }
            }
        }
    }
    var_29 = ((-(((min(var_2, var_8))))));
    var_30 = (!var_15);
    var_31 = ((((max(var_15, 515396075520))) ? 529507546 : 6047));
    #pragma endscop
}
