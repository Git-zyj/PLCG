/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225599
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
    var_14 ^= ((/* implicit */unsigned short) var_0);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_15 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (signed char)-78))))) ? (max((((((/* implicit */int) var_3)) % (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)5]))))) <= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0])))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : ((+(((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)246))) : (((/* implicit */int) ((((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)10]))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max(((-((~(((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) ((unsigned char) arr_0 [i_0]))))))));
    }
    var_17 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))));
    var_18 = (+(var_4));
}
