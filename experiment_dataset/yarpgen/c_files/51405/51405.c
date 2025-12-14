/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = (min(var_15, (((((((1733343372779631315 ? 32663 : 9223372036854775802)))) ? (arr_1 [i_0] [i_0]) : (((max(1, (arr_1 [i_0] [i_0]))))))))));
        var_16 = (max(var_16, ((((((((1 ? 32688 : 9223372036854775802)) != ((480 ? 4011145835493271600 : 5577828278429561404))))) < 8873)))));
        var_17 = (max(var_17, 0));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 ^= (min((arr_3 [i_1]), (arr_0 [i_1])));
        var_19 = (max(var_19, ((max(6433, (max(((((arr_2 [i_1]) ? (arr_1 [i_1] [i_1]) : 33553408))), (arr_2 [i_1]))))))));

        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_20 ^= (((5577828278429561396 ? 5577828278429561389 : 113)) < ((21268 ? (arr_3 [i_2 + 1]) : -1)));
            var_21 = 9223372036854775802;
        }
        var_22 = (min(var_22, (arr_7 [12])));
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_23 ^= ((((max(((((arr_4 [i_3]) && 9223372036854775787))), (max(-18662, 0))))) ? (((arr_9 [i_3] [i_3]) ? 1 : (arr_9 [i_3] [i_3]))) : ((((arr_0 [i_3]) && var_13)))));
        var_24 ^= (((min(var_11, -1)) & (min((arr_0 [i_3]), (arr_9 [0] [i_3])))));
    }
    var_25 *= (var_12 != var_7);
    var_26 *= var_10;
    #pragma endscop
}
