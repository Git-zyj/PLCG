/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192930
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
    var_13 = ((/* implicit */unsigned short) ((max((((_Bool) (short)-5)), ((((_Bool)1) || (((/* implicit */_Bool) (short)14462)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((short)14456), ((short)31063))))))) : ((+(((/* implicit */int) var_0))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) max((((unsigned short) ((unsigned int) (short)-10901))), (((/* implicit */unsigned short) min(((short)-5571), (max((((/* implicit */short) (signed char)-28)), ((short)-10881))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) min(((short)-10886), ((short)(-32767 - 1)))))));
    }
    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) -1628015422)))))))) ? (max((((/* implicit */unsigned int) ((short) (short)-31253))), (max((21U), (((/* implicit */unsigned int) (short)-31271)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    var_16 &= ((short) (!(((/* implicit */_Bool) max((4294967295U), (4294967274U))))));
}
