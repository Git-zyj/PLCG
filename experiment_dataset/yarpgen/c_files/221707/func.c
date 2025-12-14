/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221707
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */unsigned int) -1344001905)) > (min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0]))))), ((~(var_9))))))))));
        var_13 = ((/* implicit */unsigned short) (((+(var_1))) - (((/* implicit */unsigned int) min((1344001898), (((/* implicit */int) (signed char)111)))))));
    }
    var_14 -= ((/* implicit */unsigned char) var_7);
    var_15 *= ((/* implicit */short) ((((/* implicit */int) ((short) 1182929605U))) / (((/* implicit */int) var_0))));
    var_16 = -1344001876;
}
