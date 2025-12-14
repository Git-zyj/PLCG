/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246564
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
    var_10 = ((/* implicit */long long int) max((((/* implicit */unsigned short) var_2)), (var_8)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((unsigned long long int) (short)4799)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112)))));
        var_11 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) 4503049871556608LL))))))));
    }
    for (unsigned int i_1 = 4; i_1 < 13; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (arr_4 [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33928))))), (var_4)));
        var_14 = ((/* implicit */short) max((((unsigned char) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (unsigned char)117)))))))));
        var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_4 [i_1 + 1])))) ? ((+(var_0))) : (((((/* implicit */_Bool) arr_4 [i_1 + 4])) ? (arr_4 [i_1 - 2]) : (arr_4 [i_1 + 4])))));
    }
    var_16 = ((/* implicit */unsigned long long int) ((max((max((var_0), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((unsigned char) var_4))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)92)) && (((/* implicit */_Bool) var_3))))) != (((/* implicit */int) var_8))))))));
}
