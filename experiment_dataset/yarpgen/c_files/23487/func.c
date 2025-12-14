/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23487
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
    var_11 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] |= ((/* implicit */long long int) (~(((/* implicit */int) var_0))));
        var_12 = ((/* implicit */unsigned int) max((var_12), (((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9)))) ? (var_10) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_13 = ((/* implicit */signed char) var_7);
        var_14 *= ((/* implicit */long long int) max((((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))) || ((!(var_7)))))), ((signed char)-49)));
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        arr_8 [(signed char)16] [i_2] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (9007199254740991ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
        arr_9 [i_2] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)21809)) : (((/* implicit */int) var_3)))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned int) (signed char)-110))))), (var_1))) : (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) (signed char)-39)) : (((/* implicit */int) var_9))))))))));
        arr_10 [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))) | (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-16)) <= (((/* implicit */int) var_6)))))) : (var_10)))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)65)) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21823))) ^ (3627039707879272444ULL))) & (9957658145310422163ULL))) : (((/* implicit */unsigned long long int) 4294967295LL)))))));
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (min((9957658145310422163ULL), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_10))))))) ? (max((max((((/* implicit */unsigned int) var_0)), (var_10))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_2)), (var_4)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
}
