/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191236
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)(-32767 - 1))) + (((/* implicit */int) (unsigned short)32626))));
    var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) var_3)), (var_5)));
    var_21 -= ((/* implicit */unsigned short) max((207375428), (((/* implicit */int) (_Bool)1))));
    var_22 = ((/* implicit */short) var_8);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0 - 2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32892)) << (((-629479789) + (629479792)))))) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 2])) : (((/* implicit */int) (short)-25747))));
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_2)))))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-((+(((/* implicit */int) var_1)))))))));
    }
}
