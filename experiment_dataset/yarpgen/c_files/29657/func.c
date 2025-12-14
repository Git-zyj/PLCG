/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29657
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
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (((-(((/* implicit */int) var_5)))) - (((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) + (((/* implicit */int) (unsigned char)4))))) ? (arr_1 [i_0]) : (arr_0 [(short)14] [i_0])))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((((/* implicit */int) min(((short)-14453), (((/* implicit */short) (unsigned char)3))))), (max((((((/* implicit */int) var_16)) & (arr_0 [i_0] [i_0]))), (((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))))))))));
        var_18 *= ((/* implicit */unsigned char) 1355732486);
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) 1082197654U);
        var_19 = min((((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) var_15)), (arr_5 [12U] [12U]))))), (((1215183122) + (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_4 [i_1])))))));
    }
    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)65532)), ((+(((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_0)))))))));
    var_21 *= ((/* implicit */_Bool) var_15);
    var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
}
