/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45659
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned short) ((short) ((signed char) ((signed char) (unsigned char)4))));
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (short)-29311)) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)230)), ((short)4095)))) : (((int) (_Bool)1))))))));
        arr_2 [i_0] [(unsigned char)6] = ((/* implicit */signed char) (~((-(((/* implicit */int) (unsigned short)15))))));
    }
    var_12 = ((/* implicit */unsigned short) var_0);
}
