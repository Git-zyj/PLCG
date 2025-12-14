/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_5 ? var_4 : ((((min(125, 1754409619))) ? ((max(var_7, var_11))) : ((min(var_4, var_7)))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (max(var_13, ((min(-22540, 143)))));

        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            var_14 = (max(123, -4246972431328513351));
            var_15 = ((((((max((arr_6 [i_0] [i_1 + 1]), var_8))) ? (((arr_5 [i_0] [i_1 - 2] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_4 [i_0]))) : (((var_1 >= (arr_1 [i_1] [i_1])))))) & (88 | 119)));
            arr_7 [i_0] [i_0] = ((var_6 ? ((var_10 ? ((var_10 ? var_1 : var_10)) : ((((arr_0 [i_0]) ? var_9 : var_10))))) : ((min(((var_6 % (arr_5 [i_1] [i_1] [i_1]))), var_8)))));
            var_16 = (max(var_16, ((min((!var_1), var_10)))));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            var_17 ^= var_2;
            var_18 = (max(var_2, (min(65393, 5926546181558538659))));
            var_19 = ((var_8 + (min((((-7 ? 0 : 97))), ((var_8 ? var_7 : (arr_5 [i_0] [i_2] [i_2])))))));
            var_20 -= var_11;
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_21 = var_3;
            arr_12 [16] [14] [i_3] |= var_7;
        }
        arr_13 [i_0] = (max(((((((arr_9 [i_0] [i_0] [i_0]) ? (arr_2 [i_0]) : var_4)) | (arr_9 [6] [i_0] [i_0])))), ((max(var_8, (arr_11 [i_0]))))));
    }

    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        var_22 += ((var_6 & (((((~(arr_14 [i_4] [i_4])))) ? (((arr_3 [i_4] [0]) ? var_7 : (arr_10 [i_4 + 1]))) : (((var_2 ? var_8 : (arr_14 [i_4] [i_4 - 2]))))))));
        var_23 = (arr_8 [14]);
        arr_17 [i_4] = var_1;
    }
    #pragma endscop
}
