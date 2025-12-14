/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21349
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
    var_15 |= ((/* implicit */_Bool) (((!(var_4))) ? (((/* implicit */int) max((max((var_0), (((/* implicit */unsigned short) (signed char)104)))), (var_0)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))))));
    var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_6 [4U]))));
                    var_18 = ((/* implicit */unsigned int) arr_0 [i_0]);
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_19 = arr_0 [i_1];
                        var_20 = ((/* implicit */unsigned short) arr_1 [i_0] [i_3]);
                        arr_10 [i_0] [(unsigned short)3] [i_2 + 1] [i_1] = ((/* implicit */_Bool) arr_8 [i_1 + 3] [i_1 + 2] [i_1 - 1] [i_2 - 2] [i_2 - 1]);
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_13 [i_1] = ((2990153568U) + (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) max((arr_4 [i_4] [i_4] [(signed char)5] [(signed char)5]), (((/* implicit */signed char) arr_5 [i_0] [i_1 + 1] [i_1 + 1]))))), (min((arr_11 [i_1] [i_2 - 2] [(signed char)5] [i_1 - 1] [i_0] [i_1]), (((/* implicit */unsigned short) (_Bool)0)))))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_7 [i_2] [i_4 - 1] [i_4 - 1] [i_1]))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((4294967295U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [7U] [i_2] [i_0]))))))))) : (max((4294967295U), (((/* implicit */unsigned int) (_Bool)1))))));
                        var_22 += ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) arr_9 [2U] [i_2 + 1] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))) : (arr_8 [i_0] [i_0] [(_Bool)1] [i_0] [(signed char)9]))), (max((arr_2 [i_2] [i_1 + 1] [i_2]), (((/* implicit */unsigned int) arr_6 [(unsigned short)14])))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [(signed char)8] [i_1 + 1] [i_2] [i_2] [i_2 - 2] [i_2])) * (((/* implicit */int) arr_11 [10U] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2 - 1] [10U])))))));
                        arr_14 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_9 [i_1] [(_Bool)1] [(_Bool)1] [i_1])) ? (arr_9 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1 + 2] [i_1] [i_1 - 1] [i_1]))))), (((/* implicit */unsigned int) (unsigned short)57793))));
                        arr_15 [i_1] [i_1] [i_4 - 1] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) max((min((arr_17 [i_5] [i_1 + 1] [i_2 + 2] [i_5]), (((/* implicit */unsigned int) (!((_Bool)1)))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_5] [i_2 - 2])) ^ (((/* implicit */int) arr_18 [i_5] [i_2 - 1]))))))))));
                        var_24 = ((/* implicit */_Bool) max(((signed char)-18), (max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2]))))), (arr_18 [i_1] [i_1])))));
                        var_25 ^= ((/* implicit */signed char) (unsigned short)7731);
                    }
                }
            } 
        } 
    } 
}
