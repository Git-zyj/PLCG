/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_14 < (((57610 | var_4) & (((min(var_15, var_7))))))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_18 = (((min(0, 712400360)) << (((arr_0 [i_0]) - 7269))));
        var_19 = ((var_10 ? ((~(arr_0 [i_0 + 2]))) : ((-((var_8 ? var_6 : var_3))))));
        arr_2 [i_0] = -var_6;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = var_8;
        var_21 &= ((!(((74033590 ? (15 && 6222) : -6365880350955169998)))));
        var_22 = ((!(arr_5 [i_1])));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_23 ^= (max(-6365880350955169995, -1));
        var_24 = (((((max((max((arr_7 [i_2]), var_10)), (arr_7 [i_2]))))) | (((((var_3 - (arr_8 [i_2])))) + ((-(arr_6 [i_2] [i_2])))))));
        var_25 = (i_2 % 2 == zero) ? ((((((-((var_3 / (arr_8 [i_2])))))) ? ((((!((var_4 == (arr_8 [i_2]))))))) : ((((((arr_6 [i_2] [4]) * (arr_7 [i_2])))) ? var_6 : ((var_1 ? (arr_6 [i_2] [i_2]) : var_11))))))) : ((((((-((var_3 / (arr_8 [i_2])))))) ? ((((!((var_4 == (arr_8 [i_2]))))))) : ((((((arr_6 [i_2] [4]) / (arr_7 [i_2])))) ? var_6 : ((var_1 ? (arr_6 [i_2] [i_2]) : var_11)))))));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 11;i_5 += 1)
            {
                {
                    var_26 = (min((((arr_12 [i_3] [i_5 - 1] [i_5 - 1]) - var_9)), var_11));
                    var_27 = (((((((min((arr_5 [i_4]), (arr_12 [i_3] [5] [2])))) ? ((((arr_13 [i_3] [i_4]) % (arr_12 [i_3] [i_3] [i_5 + 1])))) : ((var_2 ? (arr_5 [i_5]) : var_3))))) ? (((((23902 ? 0 : -1))) ? -1 : -19)) : (-1 == 104)));
                    var_28 = ((!((min((((arr_6 [i_3] [i_4]) << (var_1 - 30380))), ((min(var_5, var_0))))))));
                }
            }
        }
    }
    #pragma endscop
}
