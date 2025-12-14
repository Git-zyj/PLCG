/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193757
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
    var_15 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)86))) : (var_11))))) >> (((/* implicit */int) ((short) var_8)))));
    var_16 += ((/* implicit */short) var_0);
    var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [(unsigned char)0] [(unsigned char)10] = max((2838241617951288348LL), (max((((/* implicit */long long int) max(((_Bool)0), ((_Bool)1)))), (-131072LL))));
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_13))))))) ? (((/* implicit */long long int) (~((-(((/* implicit */int) (signed char)43))))))) : (((((/* implicit */_Bool) (short)10178)) ? ((-(0LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)10178)))))))))))));
            }
        } 
    } 
}
