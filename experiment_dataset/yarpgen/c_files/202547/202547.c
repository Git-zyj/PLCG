/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202547
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (!var_9)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_15 ^= (min(((1099511627775 ? (arr_3 [i_0] [9]) : (arr_2 [i_0]))), (arr_1 [2])));
                var_16 ^= ((~(-1192121703 ^ 1)));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_7 [i_0] = (max(4265060571, (max((max(-1697756308389514329, -122)), 536870910))));
                    var_17 &= var_13;
                    var_18 ^= (max((((min(-6030342728886456267, 9223372036854775807)) < 53913)), (-1470991071243396890 && 6030342728886456266)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] = ((arr_11 [i_0] [5] [1] [i_0] [i_2] [9] [11]) ? (((max((arr_11 [i_3] [i_2] [i_2] [i_0] [i_3] [i_1 - 1] [i_2]), (arr_9 [i_0] [i_0]))))) : (arr_1 [i_0]));
                                var_19 &= ((-(((((((arr_3 [9] [i_4]) ? var_9 : var_0))) && (((arr_3 [i_1] [i_2]) || (arr_11 [i_0] [i_0] [6] [i_3] [i_0] [i_0] [i_0]))))))));
                                arr_13 [i_4] [i_0] [i_1] [i_0] [i_0] = var_1;
                            }
                        }
                    }
                    var_20 = (arr_1 [i_0]);
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                {
                    var_21 = (((((-((524287 ? var_10 : (arr_9 [i_1] [i_0])))))) ? (((max((arr_14 [i_0] [i_0]), (arr_14 [i_0] [i_0]))))) : (arr_6 [i_1 + 2] [i_0] [i_5] [i_0])));
                    var_22 = (min(var_22, var_4));
                    var_23 = (max(((-(~2681976819))), (((var_12 ? (arr_5 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 2]) : 1487885417)))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_24 &= 1487885417;
                                var_25 = var_7;
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                {
                    arr_24 [i_0] [i_0] [i_0] [i_8] = var_3;
                    var_26 = ((((((!121) + (var_3 | 13551)))) ? (max((arr_21 [10] [5] [10] [4] [i_8] [i_0] [i_8]), (min(2147483647, 96)))) : (((!(((6886734068124893424 ? var_9 : (arr_6 [i_8] [i_8] [i_1] [i_0])))))))));
                    var_27 = ((((arr_17 [i_0] [i_0]) ? (arr_10 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1] [i_0]) : var_11)));
                }
                arr_25 [i_0] [4] &= ((-((-(arr_22 [i_1 - 1] [i_1] [i_0])))));
            }
        }
    }
    var_28 = 9223372036854775807;
    #pragma endscop
}
