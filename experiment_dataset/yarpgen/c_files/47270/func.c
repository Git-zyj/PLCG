/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47270
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)64)) ? (72057593903710208ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35971)))))))) ? ((-(((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_0])))) : (((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 2])) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_0])) : (((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 1]))))));
                arr_5 [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) 2047);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) min((var_9), (var_0))))))) ? (((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) (unsigned short)29754)))))) : (((((/* implicit */_Bool) max((-6235947288368632233LL), (((/* implicit */long long int) var_7))))) ? (((((/* implicit */_Bool) var_6)) ? (-3814645617615530758LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_11))))))))));
    var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 9221120237041090560ULL)) ? (2047) : (-2051)));
}
