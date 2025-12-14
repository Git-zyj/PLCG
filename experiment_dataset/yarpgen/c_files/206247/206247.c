/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += (min((max(var_4, (max(var_1, -179724217742359218)))), ((max(((var_1 ? var_11 : var_1)), var_8)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_13 = (max(var_13, (((1 ? (arr_0 [14] [i_0]) : (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = (((arr_0 [i_0] [i_0]) - (arr_1 [i_0])));
    }
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = (arr_4 [i_1 + 1] [i_1]);
        arr_7 [i_1] = (((((((max(1, (arr_3 [i_1] [i_1])))) ? (((min(-528, -8)))) : (max((arr_5 [i_1] [i_1]), 0))))) ? ((max(((max(1, 534))), (max((arr_4 [i_1] [i_1]), (arr_5 [i_1] [i_1])))))) : 3098323182035044203));
        var_14 *= (min(32767, -436821052170954098));
        var_15 = (((arr_4 [i_1] [i_1]) != (max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_16 = (((3299414648 ? (min(-7205377623203553025, 3211249079)) : (((1 ? 55660 : 1))))) < (((((9876 ? 16 : (arr_4 [i_2] [i_2])))) | (((arr_9 [i_2]) ? (arr_1 [i_2]) : (arr_9 [i_2]))))));

        for (int i_3 = 2; i_3 < 9;i_3 += 1)
        {
            arr_13 [i_3] [i_3] [i_3] = -1934833868575080636;
            var_17 = (max(((1 ? (arr_3 [i_3] [i_3]) : (arr_5 [i_3] [i_3 - 1]))), (min((arr_3 [i_3] [i_3]), (arr_5 [i_3] [i_3 + 2])))));
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_18 = (max(var_18, ((((((arr_14 [i_4]) * 1)) | (((-1831682685107517190 ? (arr_15 [i_4]) : 0))))))));
        arr_16 [i_4] [i_4] |= ((0 ? -1462871949 : (((((((-9223372036854775807 - 1) + 9223372036854775807)) + 9223372036854775807)) << (((((((-2147483647 - 1) - -2147483585)) + 105)) - 42))))));
    }
    var_19 ^= (max(var_1, var_10));
    #pragma endscop
}
