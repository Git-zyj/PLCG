/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41373
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14084)) ? (arr_0 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-32743)) : (((/* implicit */int) (unsigned char)75))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)32725))) / (arr_0 [(_Bool)1])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32730)) ? (((((/* implicit */_Bool) (short)-6182)) ? (((/* implicit */int) (short)32728)) : (((/* implicit */int) (unsigned char)198)))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0])))))) : (arr_0 [i_0])));
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0]);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32728)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) (unsigned char)206))));
        var_18 |= ((/* implicit */signed char) (~(((((/* implicit */int) arr_3 [i_1])) - (((/* implicit */int) (_Bool)1))))));
        var_19 = ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) (unsigned char)206)))));
    }
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_6)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)193)) == (((/* implicit */int) var_9)))))) : (1048575U))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (max((915489854U), (((/* implicit */unsigned int) var_7)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
}
