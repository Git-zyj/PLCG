/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230983
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (var_15)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */signed char) (~((+(((arr_4 [i_1] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))) << ((((-(((/* implicit */int) arr_1 [i_0] [i_0])))) + (29575)))))) % ((+((+(arr_4 [i_0] [i_1])))))));
                var_22 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (unsigned short)3408)) ? (13801172177084212518ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20841))))) / ((~(var_14))))) & (((/* implicit */unsigned long long int) (+(((((arr_0 [i_1]) + (9223372036854775807LL))) << (((((((/* implicit */int) var_8)) + (54))) - (36))))))))));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (var_15) : (((/* implicit */unsigned long long int) arr_0 [i_2 + 1])))))));
                    arr_11 [i_2 - 1] [9U] [i_0] [i_0] = ((/* implicit */signed char) (+((-(arr_9 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_1])))));
                    arr_12 [(short)10] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_10 [i_2 + 1])) ? (var_1) : (((/* implicit */unsigned long long int) arr_10 [i_2 - 1])))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5)))))));
                    var_24 &= ((/* implicit */unsigned char) (((((-((~(((/* implicit */int) var_6)))))) + (2147483647))) << (((((((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [6])) : (var_0))) << (((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_11) : (((/* implicit */int) arr_2 [6])))) + (416683153))))) - (8677222370850969600ULL)))));
                }
            }
        } 
    } 
    var_25 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))) ? ((+(var_1))) : (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) var_6))))) - (((var_14) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))))))))));
}
