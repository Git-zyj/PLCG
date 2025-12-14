/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47792
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
    var_16 &= ((/* implicit */short) min((((/* implicit */long long int) var_0)), (max((((long long int) -2568448230395954399LL)), (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned short) var_8)))))))));
    var_17 = ((/* implicit */unsigned short) ((long long int) min((2568448230395954422LL), (((/* implicit */long long int) (unsigned short)11026)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_18 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((/* implicit */int) min((var_12), (var_0)))))))));
                var_19 = ((/* implicit */int) var_10);
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_3), (arr_4 [i_1])))) ? (((/* implicit */int) ((signed char) arr_3 [i_0] [2U]))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1])), (var_14))))))) : (max((min((((/* implicit */long long int) var_2)), (var_11))), (((/* implicit */long long int) ((_Bool) var_4))))))))));
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((((/* implicit */int) min((((var_5) > (((/* implicit */int) var_9)))), (arr_1 [i_0])))), (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))))))));
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned short) ((min((min((9003475056823910203LL), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) var_2)))) > (min(((~(var_7))), (min((var_10), (((/* implicit */long long int) var_14))))))));
}
