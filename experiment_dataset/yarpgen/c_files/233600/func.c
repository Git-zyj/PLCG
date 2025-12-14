/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233600
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
    var_12 = ((/* implicit */int) ((unsigned char) var_5));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((unsigned int) var_1))))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned short) (short)32758))))))));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? ((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_5))))) : ((+(((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
        var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_7))))))));
        var_16 |= ((/* implicit */signed char) (((!((!(((/* implicit */_Bool) var_8)))))) ? (max((((/* implicit */unsigned int) (unsigned char)4)), (4053042232U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) ? (var_1) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (+(var_1)))) : (((unsigned long long int) (short)-32758)))))));
        var_17 = ((/* implicit */unsigned short) ((((_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : ((+(((/* implicit */int) ((unsigned char) var_10)))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((signed char) ((signed char) ((long long int) var_0))));
    }
}
