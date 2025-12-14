/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = (((((arr_2 [i_0] [i_0] [i_1]) / (arr_0 [i_0]))) & (arr_0 [i_0])));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                arr_11 [i_4 + 2] [i_3] [i_2] [i_1] [i_0] = ((((((((var_11 ? var_0 : 65535))) ? (arr_7 [i_0] [i_1] [i_3]) : ((var_4 ? (arr_3 [i_0] [i_1] [i_2]) : (arr_4 [i_0] [i_0] [i_0])))))) ? ((31291 ? (arr_10 [i_3] [i_4 - 2] [i_4] [i_4 + 2] [i_4 - 2] [i_4 + 1]) : (((arr_4 [i_3] [i_1] [i_0]) ? (arr_2 [i_0] [i_1] [i_2]) : (arr_4 [i_0] [i_2] [i_4]))))) : (((arr_10 [i_0] [i_1] [i_2] [i_4 - 1] [i_3] [i_3]) ? ((max((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_3] [i_4 - 2])))) : ((min(var_11, -1)))))));
                                arr_12 [i_4] [i_3] [i_2] [i_1] [i_0] = ((((max((arr_10 [i_2] [i_4] [i_4 - 2] [i_4] [i_4 - 1] [i_4]), var_10))) ? (arr_0 [i_0]) : (((arr_4 [i_4] [i_2] [i_0]) ? ((56713 ? -8856 : 11)) : (-13577 || 31291)))));
                                var_14 *= ((((min(var_10, (arr_3 [i_4] [i_4] [i_4 + 2])))) ? ((max((arr_4 [i_0] [i_2] [i_4 - 2]), 34245))) : ((((min(46022, 31291))) | ((min(var_2, (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_1] = (((((var_2 ? -28847 : (arr_10 [i_0] [i_1] [i_0] [i_1] [i_0] [i_1])))) ? ((min((arr_10 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((max((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), var_8)))));
                var_15 = (max(var_15, (((var_5 ? var_9 : (((((13019 ? 26802 : 11))) ? ((min(9776, (arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])))) : ((min(var_8, (arr_2 [i_0] [i_0] [i_0])))))))))));
            }
        }
    }
    var_16 += var_5;
    var_17 -= ((((min(((var_4 ? var_5 : var_7)), var_10))) ? ((min(21227, 0))) : var_5));
    var_18 = ((var_8 / ((((8855 ? -14600 : 83))))));
    var_19 += (min(var_11, (max(((26650 ? 20425 : var_10)), ((min(-8, var_6)))))));
    #pragma endscop
}
