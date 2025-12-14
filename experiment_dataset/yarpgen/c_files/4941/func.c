/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4941
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
    var_12 = ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) ((((/* implicit */int) (signed char)0)) < (((/* implicit */int) (unsigned char)0))))) == (((/* implicit */int) ((unsigned char) (unsigned char)255))))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (unsigned char)0))));
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((unsigned char) -2022551972)))));
                arr_6 [(unsigned char)2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10)))) : (var_8))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1))) : (var_8)))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (-1211295283) : (((/* implicit */int) (unsigned char)7))))) ? (((((/* implicit */_Bool) ((int) (unsigned char)246))) ? (((/* implicit */int) (unsigned char)1)) : (((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) (unsigned char)117)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) var_6)))))));
    var_16 = min((min((var_1), (((/* implicit */long long int) var_5)))), (var_0));
}
