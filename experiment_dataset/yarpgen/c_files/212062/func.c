/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212062
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_14 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_1))) + (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))) : (var_12));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (var_4) : (var_1)));
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_0))))));
        }
    }
    for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        var_17 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (((var_12) - (var_12)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_2)))))));
        arr_8 [i_2 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) - ((~(((/* implicit */int) var_6))))));
        var_18 &= ((/* implicit */unsigned int) var_0);
        arr_9 [i_2 - 1] = ((/* implicit */long long int) max((max((min((var_7), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_13)))))), (var_7)));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 16; i_3 += 3) 
    {
        var_19 += ((/* implicit */unsigned int) ((var_12) & (var_12)));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    }
    var_21 = ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1))))), (var_1)))) + (((min((var_13), (((/* implicit */long long int) var_1)))) / (((/* implicit */long long int) ((/* implicit */int) var_3))))));
    var_22 = ((/* implicit */unsigned short) (-(var_0)));
}
