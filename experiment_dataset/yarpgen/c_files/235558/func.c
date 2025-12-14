/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235558
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
    var_18 = max(((unsigned short)2558), (((/* implicit */unsigned short) (unsigned char)2)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned short)28295))))) ? (min((arr_1 [i_0]), (arr_1 [i_0]))) : (((((/* implicit */_Bool) (unsigned short)62973)) ? (-1974134057) : (((/* implicit */int) (_Bool)1))))))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (~(((unsigned int) ((((/* implicit */int) (unsigned short)2550)) & (((/* implicit */int) (unsigned short)0))))))))));
    }
    var_20 = ((/* implicit */unsigned short) 4294967295U);
}
