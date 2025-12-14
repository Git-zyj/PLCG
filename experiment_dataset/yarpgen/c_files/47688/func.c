/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47688
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((max((((var_5) % (((/* implicit */int) var_11)))), (((((/* implicit */int) (unsigned short)62090)) ^ (((/* implicit */int) var_6)))))) <= (((/* implicit */int) ((unsigned short) max((-568344171), (687886669)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) ((short) arr_2 [i_0]))) | (((/* implicit */int) (signed char)0)))) & (568344171)));
        arr_6 [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) var_0)))));
        arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) ^ (((((/* implicit */_Bool) 1241584967U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_0]))))));
    }
    var_13 = ((/* implicit */unsigned char) (+(((unsigned int) ((var_5) <= (((/* implicit */int) (_Bool)1)))))));
}
