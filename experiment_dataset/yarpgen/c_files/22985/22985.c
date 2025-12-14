/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (max((((arr_0 [i_0]) ? (arr_0 [i_0]) : (-32767 - 1))), ((-var_15 ? 6658 : ((((arr_0 [i_0]) && (arr_1 [8]))))))));
        arr_4 [i_0] = ((((((-(arr_2 [i_0]))))) ? (arr_0 [i_0]) : ((max(var_0, (arr_2 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_7 [3] = -30356;

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            arr_10 [i_1] [i_2] [i_1] = (max((((max((arr_9 [i_1] [i_2]), (arr_1 [i_1]))) * (arr_5 [i_1]))), ((max((!var_5), (min((arr_8 [i_1] [i_2]), (arr_6 [7]))))))));
            arr_11 [i_1] = ((24538 ? (-5052 + 5051) : (arr_6 [i_2])));
            arr_12 [9] [9] [i_2] = (max((max((arr_5 [i_1]), -1429814321)), ((((arr_6 [i_1]) ? ((min(var_0, (arr_0 [i_1])))) : (arr_0 [i_1]))))));
        }
        for (int i_3 = 1; i_3 < 9;i_3 += 1)
        {
            var_18 = ((((((max(-1, 31098))) % -32431)) != (((arr_8 [i_3 + 1] [i_3 - 1]) ? (arr_8 [i_3 + 3] [i_3]) : (arr_8 [i_3 + 2] [i_3 + 2])))));
            arr_15 [i_1] [i_1] = (((-11131 && ((max(3764229895, 32767))))));
        }
    }
    var_19 &= ((~((((((min(-20738, 24537))) + 2147483647)) << (((max(20737, 649610054)) - 649610054))))));
    var_20 = var_9;
    var_21 = var_16;
    var_22 ^= ((((var_13 ^ (var_8 ^ var_1))) < (((-6658 ^ (30338 > var_9))))));
    #pragma endscop
}
