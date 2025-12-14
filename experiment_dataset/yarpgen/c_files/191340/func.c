/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191340
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
    var_19 |= ((/* implicit */unsigned short) (unsigned char)177);
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? ((((!(((/* implicit */_Bool) (unsigned short)29437)))) ? (((/* implicit */int) (unsigned short)25696)) : (((/* implicit */int) (unsigned short)55728)))) : ((~(((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) (unsigned short)4096)))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)4096)) & (((/* implicit */int) (unsigned short)55728))));
        arr_4 [i_0] = max((((/* implicit */unsigned short) ((short) (-(var_17))))), (max((((/* implicit */unsigned short) ((_Bool) arr_2 [8U]))), (arr_2 [i_0]))));
    }
}
