/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (((((-(164 || var_3)))) && (((var_3 ? -851607839 : var_8)))));
    var_16 = ((((((var_1 ? var_12 : 212))) == ((21 ? var_6 : var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = (min((min((arr_5 [i_0] [i_1 - 2]), (max((arr_2 [i_1 + 1] [i_2]), var_4)))), (((var_6 <= var_7) ? (min(186, var_9)) : (arr_4 [i_1 - 2])))));
                    arr_8 [i_0] [i_0] = (((max(-94, ((-(arr_1 [i_0])))))) ? (arr_5 [i_2 - 3] [i_1 + 1]) : var_3);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        var_18 = (max(var_18, (arr_7 [5] [i_3])));
        var_19 = ((-8358159850905753555 ? var_1 : ((~(arr_2 [2] [i_3])))));
        arr_11 [i_3] = (((((!(arr_1 [i_3])))) <= (((arr_6 [9] [i_3] [9] [i_3]) / 186))));
    }
    for (int i_4 = 1; i_4 < 8;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_18 [0] |= -202;
            var_20 = var_14;
            var_21 = ((((((arr_14 [i_4 + 2] [i_4 + 3]) ? (arr_14 [i_4 + 2] [i_4 + 3]) : (arr_14 [i_4 + 2] [i_4 + 3])))) / (((arr_2 [i_4 + 2] [i_5]) ? (arr_9 [i_5] [i_5]) : (arr_2 [i_4 + 1] [i_5])))));
            var_22 = (max(var_22, (~-var_7)));
        }
        var_23 |= ((var_10 >> ((((-(arr_1 [i_4 + 2]))) - 4417557398764213448))));
    }
    var_24 = (max(var_6, ((((23 >> (var_2 - 16)))))));
    #pragma endscop
}
