/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197662
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
    var_14 = ((/* implicit */unsigned int) (+((~(((/* implicit */int) ((_Bool) (_Bool)0)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) max((((/* implicit */short) var_7)), (((short) max((arr_0 [i_0]), (arr_0 [i_0]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) 493656859U)) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23508))) : (var_10)))))), (((/* implicit */unsigned long long int) ((unsigned int) var_9)))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [(unsigned char)16] [i_0])) % (((/* implicit */int) min(((unsigned short)23508), ((unsigned short)23514))))));
    }
    var_17 = ((/* implicit */unsigned short) var_7);
    var_18 = ((/* implicit */signed char) var_4);
    var_19 = ((/* implicit */_Bool) min(((~(((/* implicit */int) ((signed char) (unsigned char)182))))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) ((unsigned short) (unsigned short)23508)))))));
}
