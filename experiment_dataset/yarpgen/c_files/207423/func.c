/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207423
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) ((var_5) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_7))))))));
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (+(max(((-(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (var_8)));
        var_15 = ((/* implicit */int) ((unsigned short) max((((/* implicit */int) (_Bool)0)), (var_11))));
    }
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */unsigned char) ((var_8) || (((/* implicit */_Bool) var_5))))), (var_10)))), (min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_11) : (var_7)))))))))));
    var_17 = ((/* implicit */unsigned long long int) ((((var_9) ? (2931618086037755728LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) - (((/* implicit */long long int) ((/* implicit */int) var_4)))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_6))));
    var_19 = ((/* implicit */short) max((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))))), (var_6)));
}
