/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = var_0;
                var_21 *= var_0;
            }
        }
    }
    var_22 = ((~((var_1 ? (!var_5) : (!var_12)))));
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_18 [i_6] [i_6] [i_6] [i_2] = ((((min(((min((arr_14 [i_2 - 4] [i_2] [i_2]), var_3))), (min(18, -261551559873627970))))) ? (arr_7 [i_2] [i_2 - 3]) : (min((((~(arr_16 [i_2] [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2] [i_2] [i_2])))), (arr_8 [i_6])))));
                                var_23 = (max(var_23, (arr_10 [i_2 - 3] [i_2 - 3])));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 23;i_8 += 1)
                        {
                            var_24 ^= ((var_16 ? var_13 : var_4));
                            var_25 ^= (((arr_8 [i_8 + 2]) ? (!var_8) : (((arr_15 [i_2] [i_2] [i_3] [i_4 - 1] [i_8 + 2]) ? (min((arr_14 [i_2] [i_3] [i_2]), var_14)) : var_14))));
                        }
                        var_26 &= var_8;
                        var_27 = (((arr_15 [i_2] [i_3] [i_3] [i_4] [i_7]) ? (((~-59) & (~16099882121138327959))) : ((~(arr_13 [i_3] [i_4 - 2] [i_7])))));
                    }
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        var_28 = ((((var_12 ? var_8 : 2047))) ? (arr_12 [i_4] [i_4 - 2] [i_4] [i_4]) : -1175955364);
                        var_29 += (~(arr_19 [8] [i_4 - 2]));
                        var_30 = 47177;
                        var_31 = ((~(arr_23 [i_2 + 3] [i_2] [i_4 + 2] [i_9 + 1])));
                        var_32 |= (((arr_7 [i_3] [i_9 + 1]) ^ 312862697));
                    }
                    arr_26 [i_2 - 2] [i_2 - 2] [i_2] = (arr_19 [i_2] [i_2]);
                    arr_27 [i_4] [i_3] [i_3] [i_2] |= ((261551559873627981 ? ((~(max((arr_7 [i_2] [22]), var_19)))) : (((arr_10 [i_2 - 3] [i_2 - 4]) ? (arr_10 [i_2 + 2] [17]) : (arr_10 [i_2 + 3] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
