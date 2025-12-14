/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49251
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
    for (signed char i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                var_12 ^= ((/* implicit */unsigned short) arr_1 [(unsigned char)11]);
                var_13 = ((/* implicit */int) ((274609471488ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77)))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) << (((((/* implicit */int) var_3)) - (402)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_9)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_9)))) ? ((~(var_9))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)65523)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)8357)))) + (((/* implicit */int) var_5)))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) var_8)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))) ? (((((var_6) + (9223372036854775807LL))) >> (((((/* implicit */int) var_2)) - (146))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_8))))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1))))));
}
