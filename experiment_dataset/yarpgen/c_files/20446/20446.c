/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1 + 1] [i_2] = max((!var_4), var_2);
                    var_13 = (max(var_13, (((((((arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_0]) + (arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_0])))) ? (((arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_0]) ? (arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_0]) : (arr_8 [i_1] [i_1 - 1] [i_1 - 1] [i_0]))) : (min((arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_0]), var_5)))))));
                    arr_10 [i_1] = (max(((-221 ? var_8 : (arr_1 [i_1 - 1]))), ((-4163226150016182450 ? (21504 && 3191846138) : 57191))));
                }
            }
        }
        var_14 = ((~(arr_7 [i_0] [i_0] [i_0])));

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_17 [i_3] [i_0] [i_0] [i_3] = (((arr_14 [i_0] [i_3] [i_4 + 1] [i_5]) ? (((((~9007199254675456) >= -var_0)))) : ((~(arr_13 [i_5 - 2] [i_4 - 1])))));
                        var_15 = ((~(arr_2 [i_3])));
                        arr_18 [i_3] [i_3] = ((((min((arr_14 [i_0] [i_4 - 1] [i_5] [i_5]), var_1))) ? (max(-4163226150016182450, 0)) : ((((arr_14 [i_4] [i_4 + 2] [i_5] [i_5 + 2]) & (arr_12 [i_4 - 1]))))));
                    }
                }
            }
            var_16 = ((((arr_16 [i_3] [i_3] [i_3] [9]) ? var_10 : (((-(arr_3 [i_3])))))) / (min(21788, (((arr_5 [i_0] [i_3]) / (arr_7 [i_0] [i_0] [i_0]))))));
            arr_19 [i_3] = ((!((max((arr_15 [i_0] [i_0] [i_3] [i_3]), -4163226150016182449)))));
        }
    }
    var_17 = (min(90, 2008646668930898584));
    var_18 = var_4;
    var_19 &= var_11;
    var_20 = ((((((var_3 ? 4294967275 : var_5)))) * (min((max(var_2, var_10)), ((max(var_12, 21792)))))));
    #pragma endscop
}
