/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (~var_18);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_21 -= (min(((max((arr_3 [i_0] [i_1]), ((12990993882864695156 ? 4827 : -38))))), ((min((arr_3 [i_1] [i_0]), (arr_1 [i_0]))))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_22 &= (min(((~((min((arr_4 [i_0] [i_0]), (arr_6 [i_3])))))), (arr_7 [i_0])));
                        var_23 *= ((+((((((arr_4 [i_0] [i_1]) ? (arr_3 [i_2] [i_3]) : (arr_3 [i_0] [i_1])))) ? ((min((arr_8 [i_1] [13] [10] [i_1]), (arr_10 [i_1] [i_1] [i_2] [i_3])))) : (arr_1 [i_3])))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_24 ^= ((min((((arr_14 [2] [2] [i_1] [6]) | (arr_11 [i_0] [i_0] [i_1] [i_2] [i_4]))), (max(-1433281087128990519, 4827)))));
                        var_25 = ((((((arr_1 [i_4]) ? (((arr_14 [17] [i_1] [i_1] [14]) ? (arr_3 [i_2] [i_4]) : (arr_12 [i_0] [i_1] [i_2] [i_4]))) : ((9 ? 4815 : (arr_10 [i_0] [i_0] [i_0] [i_0])))))) ? (min(483511746, 5455750190844856446)) : (((((max((arr_7 [i_0]), (arr_12 [i_0] [i_1] [i_2] [i_1])))) ? ((min((arr_0 [i_0]), (arr_6 [i_0])))) : (min(4294967290, -4853684127267237762)))))));
                        var_26 = ((((arr_7 [i_1]) * (arr_7 [i_4]))));
                        arr_15 [i_4] = (((min((min(21, 113)), (min((arr_4 [i_1] [i_0]), (arr_13 [i_0] [i_0] [i_0]))))) < (arr_3 [i_2] [i_4])));
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_27 = (min((((((arr_9 [i_6] [i_5] [i_1] [i_0]) == (arr_11 [i_0] [i_0] [i_2] [8] [i_6]))) ? (((arr_10 [i_1] [i_1] [i_1] [i_1]) ? (arr_13 [i_1] [i_2] [i_5]) : (arr_10 [16] [i_1] [i_2] [i_5]))) : ((((arr_1 [i_2]) ? (arr_3 [i_0] [i_1]) : (arr_0 [i_0])))))), ((max((max((arr_12 [i_0] [i_1] [i_2] [i_6]), (arr_8 [10] [i_1] [10] [i_5 - 2]))), (arr_12 [i_0] [i_1] [i_5] [i_6]))))));
                                var_28 = (((10727 ? 63 : ((min(8132214, -4825))))));
                                arr_20 [i_0] = ((((min(((((arr_9 [i_1] [i_2] [i_5] [i_6]) ? (arr_1 [i_0]) : (arr_16 [i_0] [i_1] [i_1] [i_6])))), ((0 ? -2055211731033805785 : -2638220603704562681))))) ? ((9919777134095631729 >> (((arr_7 [i_0]) + 180)))) : ((((arr_10 [i_0] [i_5 - 2] [i_2] [i_5 - 2]) ? (((arr_4 [i_1] [i_2]) | (arr_16 [i_0] [i_0] [i_0] [i_0]))) : (~-16732))))));
                                arr_21 [i_0] [i_1] [i_6] [i_5 - 1] [i_6] [i_0] = (min(437042337, 0));
                            }
                        }
                    }
                    var_29 = (((max(0, 1))));
                }
            }
        }
    }
    #pragma endscop
}
