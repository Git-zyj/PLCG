/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217261
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
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65511)))))));
    var_20 = var_5;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) ((((/* implicit */int) (unsigned short)65525)) != (((/* implicit */int) (unsigned short)65511))))) + (max((var_3), (((/* implicit */int) (unsigned short)24)))))), (((((/* implicit */_Bool) ((unsigned char) (unsigned short)59570))) ? (((/* implicit */int) (unsigned short)65511)) : ((~(((/* implicit */int) (unsigned short)65496))))))));
        var_21 = max((((/* implicit */unsigned long long int) var_12)), (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25))) ^ (arr_1 [i_0])))));
        var_22 ^= ((/* implicit */unsigned char) min(((+(max((((/* implicit */unsigned int) (unsigned short)17320)), (2178495493U))))), (((/* implicit */unsigned int) (~(var_1))))));
        var_23 += ((/* implicit */_Bool) (((+(((/* implicit */int) (signed char)(-127 - 1))))) / (((((/* implicit */_Bool) var_10)) ? (var_17) : (((/* implicit */int) (unsigned short)65520))))));
    }
}
