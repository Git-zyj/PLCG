/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245644
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) ((short) ((((((/* implicit */_Bool) (unsigned char)240)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52502))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483638)) ? (((/* implicit */int) (short)0)) : (var_3))))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0 + 2]), (arr_0 [i_1])))) ? (arr_3 [i_0] [16ULL] [i_1]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (4228244973154564689ULL)))) ? (arr_3 [i_0 + 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)214)))))));
                var_12 -= ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))) ? (((unsigned long long int) arr_1 [i_0 - 2] [i_0 + 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77))) : (arr_0 [i_1])))))))));
                var_13 |= min((((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_0 [i_1]))) : (((arr_1 [(unsigned char)0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (var_3))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)1047)) : (((/* implicit */int) var_6)))))), (((((/* implicit */int) var_7)) | (((var_1) & (var_1)))))));
    var_15 += ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned long long int) 968720300)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (var_1) : (var_3)))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))), (max((((/* implicit */unsigned long long int) var_5)), (var_2)))))));
}
