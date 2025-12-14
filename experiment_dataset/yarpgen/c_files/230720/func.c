/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230720
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
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (((+(var_5))) == ((~(((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */int) (unsigned short)65535)))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) max((var_10), ((unsigned short)16572)))) : (((/* implicit */int) (_Bool)1)))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])))))));
        var_12 = ((/* implicit */unsigned short) max((var_12), (((unsigned short) ((((((arr_1 [(_Bool)1] [i_0]) + (2147483647))) << (((var_5) - (940214552))))) & (((/* implicit */int) arr_2 [(_Bool)1])))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((var_2) ? (((/* implicit */int) (short)127)) : (((/* implicit */int) arr_4 [i_1] [i_1])))) * (((/* implicit */int) max(((unsigned short)47948), (((/* implicit */unsigned short) arr_5 [i_1])))))));
        var_13 = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) var_8)))));
        arr_8 [i_1] = ((/* implicit */short) (+(((((((/* implicit */_Bool) (unsigned short)33210)) ? (((/* implicit */int) var_0)) : (var_9))) * (((/* implicit */int) var_4))))));
    }
}
