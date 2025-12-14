/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209581
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (min((((var_13 < (min(var_13, var_10))))), (((var_14 || -24) + 1))));
    var_18 = (((((-((min(32767, 8)))))) & (max(var_13, (var_14 % var_7)))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_19 = (min(var_19, (((2623348814 ? (((-27 ? (arr_0 [i_0 - 2] [i_0 - 2]) : 0))) : (((var_15 + var_8) % (23 % -2532897729296122546))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = ((((max((arr_3 [i_2 - 1] [10] [i_2 + 1]), var_12))) + (((!(arr_2 [i_0 - 1] [i_0 - 1]))))));
                    arr_6 [15] [i_1] [i_1] |= ((((((((arr_1 [i_0] [i_0]) - -1))))) ^ (max(((min(-102, 24))), 2))));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        arr_10 [i_3] = (arr_3 [i_3] [i_3] [i_3]);
        var_21 += ((+(min((arr_1 [i_3] [i_3]), (arr_1 [i_3] [i_3])))));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_22 = (max(var_22, (((((((-331032766732066244 && 9223372036854775807) || (((-9223372036854775807 - 1) || -24))))) / (max(((0 ? var_8 : 0)), ((max(var_5, 28370))))))))));
        var_23 = (max(((var_6 ? (arr_13 [i_4]) : (arr_13 [i_4]))), ((~(arr_0 [i_4] [i_4])))));
        var_24 = ((0 <= ((((var_0 + 1270417190) ? 215702993 : -802135464)))));
        var_25 = ((((min(var_11, (((!(arr_1 [i_4] [i_4]))))))) ? (((1 ? (arr_0 [i_4] [i_4]) : var_11))) : (((var_12 - 65535) ? 1 : (arr_12 [i_4])))));
        var_26 -= (((-(0 + 1))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_16 [i_5] [i_5] = ((+(((1 - 2784594496414282114) ? var_8 : (((min((arr_14 [1]), (arr_14 [i_5])))))))));
        var_27 = ((((var_14 & (arr_15 [i_5] [i_5]))) << ((((max((arr_15 [i_5] [i_5]), (arr_15 [i_5] [1])))) + 41))));
    }
    #pragma endscop
}
