/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216028
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_10 = max((((((((/* implicit */_Bool) arr_1 [i_0])) ? (var_6) : (arr_2 [i_0]))) | (((/* implicit */int) ((((/* implicit */int) arr_7 [6] [i_0] [15] [i_2])) == (arr_2 [i_1])))))), (max((((/* implicit */int) ((signed char) arr_1 [i_0]))), (2147483647))));
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_1] = ((/* implicit */signed char) var_6);
                        var_11 = ((/* implicit */int) max((var_11), (((((/* implicit */int) var_0)) % (((/* implicit */int) ((signed char) arr_6 [i_3] [(signed char)9] [i_1] [i_0 - 3])))))));
                    }
                    for (signed char i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] = max((arr_2 [i_0 + 2]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))))));
                        var_12 = ((/* implicit */int) (signed char)10);
                        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) max((((((/* implicit */int) ((signed char) arr_4 [i_0]))) & (((arr_3 [i_0]) << (((((/* implicit */int) var_5)) - (124))))))), (min((arr_8 [i_0] [(signed char)5] [i_0] [i_0 - 3] [i_0] [i_2]), (((/* implicit */int) arr_9 [i_0 - 2] [i_1])))))))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
                    {
                        arr_18 [2] = (~(arr_3 [i_0 - 2]));
                        var_14 ^= ((/* implicit */signed char) (-(arr_8 [(signed char)9] [(signed char)7] [(signed char)21] [i_0 - 3] [(signed char)6] [i_2])));
                        arr_19 [1] [(signed char)9] [(signed char)9] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) arr_13 [i_0] [i_0 + 2] [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1]))))) ? (arr_0 [i_0 + 2]) : ((+(arr_15 [17] [(signed char)5] [i_5] [i_5] [i_5] [i_5])))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), (max((var_1), (max((((/* implicit */int) arr_20 [i_0 - 3] [i_0 + 2] [i_0 - 2] [i_0 - 1])), (arr_5 [i_0 - 1] [i_0 - 2])))))));
                                var_16 = max(((-(arr_4 [i_0 + 1]))), ((~((~(arr_5 [i_0] [i_1]))))));
                            }
                        } 
                    } 
                    arr_26 [i_2] [i_2] [i_1] [18] = ((/* implicit */signed char) ((var_4) & (((/* implicit */int) ((((var_9) & (-1498095134))) <= (((((((/* implicit */int) arr_13 [16] [(signed char)2] [i_0] [(signed char)18] [16] [i_0])) + (2147483647))) << (((arr_5 [2] [2]) - (889161381))))))))));
                }
            } 
        } 
    } 
    var_17 ^= ((/* implicit */int) var_5);
    var_18 = max(((-(max((var_6), (((/* implicit */int) var_5)))))), (var_6));
}
