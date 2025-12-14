/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28412
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
    var_19 = ((/* implicit */unsigned char) max((min((max((var_16), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) var_15))));
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */short) var_15)), (var_8)));
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) var_0)), ((unsigned short)65535))))));
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((var_16) - (var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((var_13) % (var_1))))) : (var_16)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_0] [(_Bool)1]))));
        var_23 *= ((/* implicit */signed char) var_15);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_1 [(unsigned char)7] [i_1]))))));
        var_24 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_15))))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_0))));
        var_26 = ((/* implicit */unsigned char) var_16);
    }
    for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [16U] [(unsigned short)18])) ? (((/* implicit */int) (short)18801)) : (((/* implicit */int) (short)-18813))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_5 [i_2 + 1] [(unsigned char)10]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2])))))) : (max((arr_2 [i_2 + 2]), (((/* implicit */unsigned long long int) (unsigned short)34054)))))), (((/* implicit */unsigned long long int) (short)-31141)))))));
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min((arr_0 [i_2 + 1]), (arr_0 [i_2])))))))))));
    }
}
