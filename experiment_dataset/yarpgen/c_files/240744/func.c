/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240744
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_17 = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31479)) ? (arr_2 [i_0]) : (arr_2 [i_0])))) ? ((+(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) 8602354223455463483ULL)) ? (((/* implicit */int) (signed char)-99)) : (var_12)))));
        var_18 = ((((/* implicit */_Bool) var_12)) ? (((int) (-(arr_2 [i_0])))) : (var_7));
        var_19 = ((int) max((((var_3) % (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned int) var_8);
        var_21 = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_1 [i_1]))))));
        arr_5 [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_2 [i_1]))))));
    }
    var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-((+(var_13)))))), ((-((-(var_3)))))));
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (short)31478)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((1637361677U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87)))))))))) : (((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_4) : (((/* implicit */int) (short)31503))))) : (min((var_15), (((/* implicit */long long int) var_16)))))))))));
}
