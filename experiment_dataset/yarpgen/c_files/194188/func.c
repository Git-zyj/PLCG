/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194188
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
    var_11 = ((/* implicit */long long int) var_5);
    var_12 = ((/* implicit */long long int) ((min((3631731714U), (((((/* implicit */_Bool) 3631731714U)) ? (3898147317U) : (3631731699U))))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34130)))));
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */int) (short)0))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)31405))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) 0U)), (6942394427069412321LL)))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1928792469U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (1610612736U)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4658271184676264810LL))))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((max((-1738401852), (((/* implicit */int) (unsigned short)22270)))) | (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), ((unsigned char)180))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)75)) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (24268)))))) ? ((+(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41271))))))))));
        var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */int) (short)-3975)) | (((/* implicit */int) (short)-7888))))) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) arr_1 [i_0]))))));
        var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        var_18 = ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned int) var_9)));
    }
}
