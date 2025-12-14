/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (min(var_8, var_6));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [9] = (32432 || (arr_1 [i_0]));
        var_13 = (max(var_5, ((((((arr_1 [i_0]) ? var_9 : var_2)) < ((max(var_7, (arr_1 [i_0])))))))));
        arr_3 [i_0] [1] &= var_11;
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 4; i_2 < 23;i_2 += 1)
        {
            var_14 = (((890351162377678992 ^ -890351162377678980) || ((((arr_6 [i_1 + 1]) ? (arr_6 [i_1 + 2]) : (arr_6 [i_1 + 1]))))));
            var_15 = arr_4 [i_1] [i_1];
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 24;i_4 += 1)
                {
                    {
                        arr_16 [i_3] [i_3] [20] = (min(((~(arr_8 [i_2] [i_2] [i_2 - 2]))), (((((arr_14 [i_3] [i_2 - 1] [i_2 - 1] [i_4] [i_3]) && var_4))))));
                        var_16 = ((~(arr_11 [i_4] [1] [i_3] [i_4])));
                        var_17 *= (arr_15 [i_1] [i_2] [i_3] [i_2]);
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_18 = (((min((arr_6 [i_1 + 1]), ((max((arr_14 [i_5] [i_5] [i_5] [i_5] [i_1]), var_2)))))) || (((~(arr_9 [21] [i_1 + 1] [i_1 + 4])))));
            var_19 = 890351162377679007;
            var_20 = (max(var_20, (((((((((13770284758254305410 << (((arr_5 [i_1] [i_5]) - 17938))))) ? (min(1652820405, var_6)) : (arr_18 [i_5])))) ? ((((var_9 >= (arr_6 [i_5]))))) : (min(2825340142, var_1)))))));
            arr_20 [i_1] [i_1] [i_5] = ((((((arr_7 [i_5] [i_1]) ? -890351162377678966 : (arr_19 [i_5] [i_1]))) + var_6)));
        }
        arr_21 [i_1 + 3] = 1;

        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            var_21 = ((((arr_17 [i_1] [i_1] [i_1]) | var_1)));
            arr_26 [i_1] [i_6] [i_1] = ((-((var_3 ? (arr_22 [i_1] [i_1] [22]) : (arr_18 [i_1])))));
        }
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 22;i_8 += 1)
            {
                {
                    var_22 = (((arr_10 [i_7 - 1] [18] [i_7 - 1]) ? (((arr_10 [i_7 - 1] [20] [i_7 - 1]) ? 6244 : (arr_10 [i_7 - 1] [24] [i_7]))) : -890351162377678974));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 23;i_10 += 1)
                        {
                            {
                                arr_37 [i_1] [i_1] [i_1] [i_9] [i_1] [i_9] [i_10 + 1] = (((1388234688 ^ (max(890351162377678965, 1583952995)))));
                                var_23 = (max(var_23, (arr_4 [i_7 + 1] [i_8 - 3])));
                                var_24 = (var_5 ? (((0 ? (arr_32 [7] [i_7] [i_8] [i_9] [i_9]) : 1))) : var_3);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
