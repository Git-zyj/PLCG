/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_6 & (((((max(var_9, var_6))) ? (var_8 || var_0) : ((var_2 >> (-45 + 62))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        var_20 &= (((((~(arr_10 [i_1 + 2] [i_1 + 2] [i_1])))) != (arr_9 [i_3 + 3] [i_2 + 1] [i_0] [i_0])));
                        var_21 = (max(var_21, (((-10494837423127525144 << ((((max((max((arr_5 [i_0 - 3] [13]), (arr_2 [i_3]))), (arr_2 [i_0 - 1])))) - 51675)))))));
                        var_22 = (min(var_22, var_9));
                        arr_11 [i_0 + 1] [i_0] [18] [16] [12] |= (((((((((-2147483647 - 1) == var_17)) ? (arr_4 [i_0 + 1] [i_3 - 1]) : ((-1 ? (arr_2 [i_3]) : 0)))) + 9223372036854775807)) >> ((((var_15 ? (((arr_3 [i_0] [i_1 - 1]) - var_11)) : (arr_3 [i_0] [i_0]))) - 8782766016291268567))));
                    }
                    var_23 += (~(min((arr_3 [i_2 - 1] [i_1]), (arr_3 [i_2 + 1] [i_0 - 3]))));
                    var_24 = ((((4702705813688343748 ? (arr_10 [i_0] [i_0 - 1] [i_0 - 1]) : (arr_1 [i_0] [i_0 - 1]))) ^ (((arr_10 [i_1 + 2] [i_0 - 1] [i_2]) >> (((arr_1 [i_2] [i_0 - 1]) - 40263))))));
                    var_25 = (min(var_25, (((((13744038260021207868 >> (((arr_7 [i_2] [i_2 - 1] [i_1 + 1] [i_0 - 1] [i_0] [20]) - 36143)))) ^ ((~((32354 ? 0 : (arr_4 [10] [i_0]))))))))));
                }
            }
        }
    }
    #pragma endscop
}
