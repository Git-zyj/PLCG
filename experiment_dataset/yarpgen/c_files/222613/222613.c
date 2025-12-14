/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((224 ? ((-((var_5 ? 65523 : var_7)))) : ((((((var_1 ? 32763 : var_2))) ? ((var_7 ? -6 : var_9)) : var_1)))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_11 = (((arr_2 [i_0]) ? (min((arr_2 [i_0]), (arr_2 [i_0]))) : (arr_2 [i_0])));
        arr_4 [i_0] = ((((max(1, ((4659 ? -32749 : (arr_1 [4])))))) ? var_4 : ((5 ? (arr_0 [i_0 - 1]) : 200))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_2] &= ((((((!(arr_0 [i_0 - 1]))))) % ((~((24851 & (arr_5 [i_0] [1])))))));
                    var_12 = (min((arr_3 [i_0] [i_1]), (((((var_4 ? (arr_2 [i_0]) : (arr_6 [i_0] [i_1])))) ? var_6 : (max(var_3, (arr_3 [i_0] [i_2])))))));
                    arr_11 [7] [i_1] [i_0] = ((((!(((233 ? 42 : (arr_8 [1] [i_1] [i_0] [i_0])))))) ? 9223372036854775801 : ((~(arr_3 [i_0] [i_2 + 2])))));
                }
            }
        }
    }
    var_13 &= var_1;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            {
                arr_18 [i_3] [i_4] = (((((((((arr_12 [10]) | (arr_13 [i_3])))) ? ((-32764 ? -32767 : 128)) : (arr_17 [i_3] [i_3])))) ? ((max(12, ((((arr_14 [i_3]) ? (arr_13 [i_4 + 1]) : (arr_14 [10]))))))) : (((arr_15 [i_4] [i_4]) ? (((var_3 ? (arr_14 [i_3]) : (arr_12 [i_3])))) : (((arr_13 [i_3]) ? var_1 : (arr_16 [i_3] [i_4] [2])))))));
                arr_19 [i_4] = ((((((min(var_7, 4294967283)) >> ((-124 ? var_1 : -6096727537351870454))))) ? (arr_13 [i_4 - 1]) : ((((((arr_13 [i_3]) ? (arr_17 [i_3] [i_4]) : (arr_16 [i_3] [i_3] [1])))) ? var_8 : (arr_16 [i_3] [i_4] [i_4 + 1])))));
                arr_20 [1] [i_4] = (min(((((((arr_17 [i_3] [i_4]) ? (arr_13 [i_3]) : (arr_16 [i_3] [2] [i_4])))) ? ((var_9 ? 4796351205443383361 : (arr_16 [6] [4] [10]))) : ((((!(arr_17 [i_3] [i_4 + 1]))))))), (((((min((arr_15 [i_4] [i_4]), 2690879970))) ? (arr_17 [i_3] [i_4]) : (((arr_13 [i_3]) ? (arr_13 [i_3]) : (arr_15 [i_4] [i_4]))))))));
            }
        }
    }
    #pragma endscop
}
