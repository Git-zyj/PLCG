/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240548
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) ? (2958292563U) : (((/* implicit */unsigned int) ((int) arr_2 [(signed char)7] [i_1] [12LL])))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)23077)) >> (((((/* implicit */int) arr_2 [i_1] [(short)10] [(short)4])) - (11055)))))) + (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1336674715U))))))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_3 [i_0]) - (min((arr_3 [i_0]), (var_5)))))) ? (((/* implicit */int) arr_2 [i_1] [(unsigned short)5] [i_0])) : (((/* implicit */int) ((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [12])))))))));
                var_21 = ((((((/* implicit */int) var_4)) + (2147483647))) << (((((((/* implicit */int) ((((/* implicit */_Bool) 1336674733U)) || (((/* implicit */_Bool) arr_3 [(short)3]))))) << (((((arr_3 [i_1]) << (((/* implicit */int) arr_0 [i_0])))) - (2363106550146035825ULL))))) - (524288))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) >> (((-1731435278) + (1731435287))))) != (((((/* implicit */int) var_3)) >> (((var_12) - (16794204288980092379ULL))))))))) * ((~(arr_3 [i_0]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) var_4);
}
