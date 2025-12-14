/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23571
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
    var_17 *= min(((-(((var_0) & (var_7))))), (2635148795U));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (min((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_0 [(unsigned short)6] [i_0])))))));
            arr_6 [i_1] &= ((/* implicit */unsigned int) arr_3 [i_1] [(unsigned char)4]);
            arr_7 [5LL] [i_0] [i_0] = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) 131072U)), (arr_4 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [9U] [9U] [i_0]))))) : (((((/* implicit */_Bool) arr_0 [(signed char)11] [i_0])) ? (4294967295U) : (((/* implicit */unsigned int) arr_3 [i_0] [i_1])))))))));
            var_18 = ((/* implicit */int) arr_2 [i_0] [i_1] [i_0]);
        }
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (((+(var_12))) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : ((~(arr_4 [i_0] [i_0])))));
        var_20 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */long long int) var_15)))));
        arr_8 [i_0] = ((((/* implicit */unsigned int) ((int) arr_0 [i_0] [i_0]))) - (3169627723U));
    }
}
