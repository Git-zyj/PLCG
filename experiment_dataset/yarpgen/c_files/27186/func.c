/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27186
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
    var_16 &= ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_11))), (((/* implicit */unsigned long long int) ((-1) >= (((/* implicit */int) ((signed char) var_4))))))));
    var_17 = ((/* implicit */unsigned int) max((var_17), (3526135361U)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 *= ((/* implicit */signed char) (-(((/* implicit */int) ((short) max((7758451520622107401ULL), (arr_7 [i_0])))))));
                var_19 = (+((+(((((/* implicit */_Bool) var_3)) ? (7758451520622107401ULL) : (arr_2 [i_0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) (unsigned char)66)) : (((/* implicit */int) var_12)))) | ((+(((/* implicit */int) var_8))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))) ? ((~(var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
}
