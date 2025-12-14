/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213498
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned long long int) var_10))))) ? (((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (_Bool)1)) : (var_17))) : (((((/* implicit */_Bool) (signed char)62)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_11))))));
                var_20 = ((/* implicit */short) var_1);
                var_21 = ((/* implicit */_Bool) ((((4294967295U) >> (((((/* implicit */int) (unsigned char)96)) - (79))))) + (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-1)))))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (unsigned short)61976))) | (((/* implicit */int) (short)25583))))) * ((((_Bool)0) ? (16318290838821106552ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2147483637)) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1))))) * (((((/* implicit */long long int) (-2147483647 - 1))) / (min((((/* implicit */long long int) (_Bool)0)), (-3055842480771129150LL)))))));
        var_23 += ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((int) var_12))) != (((2967405605U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-25590)))))));
        var_24 ^= ((/* implicit */short) min((var_2), (((/* implicit */int) (short)0))));
    }
    var_25 = ((/* implicit */_Bool) max(((short)29096), (((/* implicit */short) ((((/* implicit */unsigned long long int) var_17)) >= (max((((/* implicit */unsigned long long int) -2147483637)), (16318290838821106552ULL))))))));
}
