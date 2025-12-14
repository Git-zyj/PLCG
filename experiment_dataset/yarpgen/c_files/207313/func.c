/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207313
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_17 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_18 = ((/* implicit */unsigned long long int) (~(max(((+(var_8))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0])) < (((/* implicit */int) var_2)))))))));
    }
    for (long long int i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_1 + 2]))));
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_1] [i_1])), (arr_4 [i_2])))), (arr_1 [i_1 + 2])))) ? (((((/* implicit */int) arr_5 [i_1 + 3])) + (((((/* implicit */int) arr_5 [i_2])) / (var_5))))) : (((((/* implicit */int) var_14)) / (((int) var_8))))));
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1])) ? (((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) arr_3 [i_1 + 3] [i_1 + 3])) : (((/* implicit */int) arr_0 [i_1 + 3] [i_1 + 3])))) : (((/* implicit */int) min((arr_3 [i_1 + 1] [i_1 + 1]), (((/* implicit */signed char) arr_0 [i_1 + 2] [i_1 + 3])))))));
        }
        for (signed char i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            var_22 *= ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))), ((~(((/* implicit */int) var_7))))));
            arr_13 [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_6 [i_1 - 2]), (arr_6 [i_1 + 1])))) ? (min((8388600U), (((/* implicit */unsigned int) (short)3584)))) : (((/* implicit */unsigned int) max((arr_4 [i_1 + 3]), (((/* implicit */int) var_15)))))))) - (((((/* implicit */_Bool) arr_10 [i_3] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_8 [i_3] [i_3 - 1])) ? (arr_1 [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1 + 3] [i_3] [i_1])) ? (((/* implicit */int) arr_5 [i_1 + 1])) : (((/* implicit */int) arr_7 [i_3])))))))));
            var_23 = ((/* implicit */short) ((arr_9 [i_1 + 3] [i_3] [i_3]) - (((/* implicit */int) ((arr_9 [i_1 + 3] [i_3] [i_3]) < (arr_9 [i_1 + 2] [i_3] [i_3]))))));
        }
    }
    var_24 = ((/* implicit */unsigned char) var_14);
}
