/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (var_0 % var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_11 = (max(var_11, (((((((3 != 19435) / (arr_7 [i_0] [i_0] [i_1 + 1])))) ? 107 : (max((arr_6 [i_0] [i_1 + 2] [i_2]), ((var_1 ? 153910927 : (arr_6 [i_0] [i_0] [i_2]))))))))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_10 [i_1] [i_3] = (arr_1 [i_1]);
                        var_12 = (min(var_12, ((((arr_3 [i_1 - 3] [i_1 - 3]) ? (arr_7 [i_1 - 3] [i_1] [i_2]) : (arr_3 [i_1 - 3] [i_1 - 3]))))));

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_13 = (arr_6 [i_0] [i_0] [i_2]);
                            var_14 = min((((arr_3 [i_0] [i_0]) ? 1 : (arr_3 [i_0] [i_1]))), (arr_12 [i_0] [i_1] [i_0] [i_1 - 3] [i_4]));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] = ((!((max((arr_5 [i_1 - 1]), (arr_5 [i_0]))))));
                            arr_14 [21] [i_1] [21] [i_3] [19] = (arr_11 [i_0] [i_3] [i_0] [i_0] [i_0] [i_0]);
                            arr_15 [i_3] [i_0] [i_2] [i_1] [i_3] = (arr_3 [i_0] [i_2]);
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                        {
                            var_15 = (min(var_15, var_8));
                            var_16 = 16559;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            var_17 = (max(var_17, ((((arr_11 [i_0] [i_2] [i_1 - 2] [i_2] [i_1] [i_1 - 3]) ? (arr_11 [i_0] [i_0] [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_1 - 3]) : (arr_11 [i_0] [i_0] [i_1 - 2] [i_1 + 1] [i_0] [i_1 - 3]))))));
                            var_18 = (((arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 3] [i_1 - 1] [i_1]) ? -28155 : (arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 3] [i_1 - 1] [i_1])));
                            var_19 = (((765179004 + -1554629713) ? (73 % 765179008) : (arr_9 [i_1 - 2])));
                        }
                        arr_20 [i_0] [i_1] [i_0] [i_3] [i_3] [i_1] = (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] [i_0]) ? (arr_17 [i_0] [i_0] [i_2] [i_1] [i_0] [i_0]) : (arr_18 [i_0] [i_1 - 1] [i_3] [i_3] [i_3])));
                    }
                    var_20 = (max(var_20, ((((((((max((arr_0 [i_0]), (arr_7 [i_0] [i_2] [i_2]))))) / ((var_9 ? (arr_8 [i_0]) : var_9)))) - (((max((arr_7 [i_0] [i_1] [i_2]), 68)))))))));
                }
                /* LoopNest 2 */
                for (int i_7 = 2; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_7] [i_8] [i_8 - 3] = ((((((max((arr_16 [i_0] [i_1] [i_7] [i_8 + 1] [i_1 + 3] [i_0] [i_0]), (arr_0 [i_0])))) ? ((var_7 - (arr_17 [i_0] [i_1] [i_1] [19] [i_0] [i_1]))) : ((var_4 ? var_7 : var_2)))) * ((((-1554629687 ? 4992 : var_3)) >> ((((124 ? -67 : -765179004)) + 85))))));
                            var_21 = ((+(min((arr_7 [i_0] [i_0] [i_0]), ((~(arr_8 [i_0])))))));
                        }
                    }
                }
                var_22 = max(((max((min((arr_5 [i_0]), 4992)), (arr_21 [i_0] [i_1 - 3] [i_1] [i_0])))), (min((min((arr_9 [i_1]), (arr_8 [i_0]))), ((max(-765179003, (arr_9 [i_1])))))));
                var_23 = ((((((arr_17 [i_0] [i_1] [i_1 - 2] [i_0] [i_0] [i_0]) ? (min((arr_8 [i_0]), var_3)) : (arr_7 [i_0] [i_0] [i_0])))) || (((arr_22 [i_0]) && ((max(14, (arr_23 [i_0] [i_0] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
