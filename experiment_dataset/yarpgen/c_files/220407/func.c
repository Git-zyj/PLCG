/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220407
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
    var_16 ^= (+((+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (unsigned short)21275))))))));
    var_17 = ((/* implicit */short) var_11);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [(unsigned short)13] = ((/* implicit */int) (((+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2))))))) != (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-1)) == (((/* implicit */int) (unsigned char)218))))) == (((/* implicit */int) (unsigned char)150)))))));
        arr_4 [i_0] [(unsigned short)8] = ((/* implicit */short) (+(min((((/* implicit */int) max((var_13), (((/* implicit */short) arr_2 [i_0]))))), (((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) arr_2 [i_0]))))))));
    }
}
