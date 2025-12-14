/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208209
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
    var_20 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_12)), (min((((((/* implicit */_Bool) 4275184699U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_3)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_13))) * (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) <= (((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))) ? (((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_1 [(unsigned char)6] [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (var_18)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_0 [i_1])), (var_3)))) : (min((var_13), (var_18)))))));
            var_22 = ((/* implicit */signed char) var_13);
        }
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            arr_9 [i_2] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((19782605U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-25905)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned char)0))))) : (var_9))));
            arr_10 [i_0] = ((/* implicit */unsigned int) (-(((long long int) min((arr_6 [i_0] [i_0] [i_2]), (((/* implicit */unsigned char) (signed char)0)))))));
            arr_11 [i_0] = ((/* implicit */unsigned int) (!(((((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) > (((/* implicit */unsigned long long int) arr_7 [(unsigned short)3] [(unsigned short)3]))))));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_3]))) >= (var_2));
            arr_17 [23LL] = ((/* implicit */unsigned char) ((unsigned short) var_9));
        }
        var_23 = ((/* implicit */unsigned int) ((((unsigned long long int) var_9)) / (min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_14 [i_0] [i_0] [i_0]) : (arr_14 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_0]) * (((/* implicit */unsigned int) var_11)))))))));
        var_24 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 4294967295U)) / (max((var_0), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113)))));
    }
}
