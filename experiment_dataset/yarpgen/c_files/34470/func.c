/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34470
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = var_9;
        var_10 = ((/* implicit */signed char) (((((~(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))) + (2147483647))) >> ((((+(((/* implicit */int) var_7)))) + (53)))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) | (((/* implicit */int) arr_1 [i_0])))) & (((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 3])))) : (((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0 + 4])) - (82)))))));
        arr_4 [i_0 + 4] [i_0 + 4] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-3)))))))) << (((((((/* implicit */int) var_0)) + (((((/* implicit */int) var_4)) / (((/* implicit */int) var_0)))))) + (49)))));
    }
    for (signed char i_1 = 3; i_1 < 17; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 17; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_1] [i_2] [i_5] [i_2] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_4 - 1])) >= (((/* implicit */int) min((var_1), (var_4))))))) : (((/* implicit */int) (((~(((/* implicit */int) arr_6 [i_1] [(signed char)2])))) > (((((/* implicit */int) arr_6 [i_1] [i_1])) + (((/* implicit */int) arr_8 [(signed char)1] [i_4] [(signed char)11])))))))));
                                arr_17 [i_1] [i_2] [(signed char)7] [i_4] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
                            }
                        } 
                    } 
                    var_11 = (i_1 % 2 == 0) ? (((/* implicit */signed char) (((~(((/* implicit */int) arr_8 [i_1 + 2] [i_1] [i_1 + 3])))) < (((((((/* implicit */int) arr_6 [i_1 - 1] [i_1])) + (2147483647))) >> (((((/* implicit */int) arr_13 [i_1 - 2] [i_1] [i_1 - 2] [i_1 + 3])) + (129)))))))) : (((/* implicit */signed char) (((~(((/* implicit */int) arr_8 [i_1 + 2] [i_1] [i_1 + 3])))) < (((((((/* implicit */int) arr_6 [i_1 - 1] [i_1])) + (2147483647))) >> (((((((/* implicit */int) arr_13 [i_1 - 2] [i_1] [i_1 - 2] [i_1 + 3])) + (129))) - (240))))))));
                }
            } 
        } 
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (!((((~(((/* implicit */int) (signed char)-69)))) < ((~(((/* implicit */int) arr_13 [i_1] [(signed char)2] [i_1] [i_1])))))))))));
        arr_18 [i_1] [(signed char)13] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_15 [i_1] [i_1 + 4] [i_1 - 1] [i_1] [i_1 + 2])))) : ((+(((/* implicit */int) var_5))))));
        arr_19 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [(signed char)5] [i_1 + 4] [i_1] [i_1 - 2] [i_1]))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) var_5))))))) : (((/* implicit */int) ((((/* implicit */int) arr_14 [i_1 + 1] [(signed char)7] [(signed char)20] [i_1 + 3] [i_1 + 3])) >= (((((/* implicit */int) arr_9 [i_1] [(signed char)15] [i_1 + 4] [i_1])) << (((((/* implicit */int) arr_8 [i_1] [i_1] [(signed char)9])) + (73))))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */int) var_3)) << (((((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6] [i_6])) + (65))))))));
        var_14 += ((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_6] [i_6])) ^ (((/* implicit */int) arr_6 [i_6] [i_6]))));
    }
    var_15 = ((/* implicit */signed char) min((((/* implicit */int) var_4)), ((((~(((/* implicit */int) var_7)))) | (((/* implicit */int) var_3))))));
    var_16 = var_5;
}
