/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48415
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
    var_16 = ((/* implicit */unsigned char) var_14);
    var_17 = ((/* implicit */_Bool) (short)-7126);
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (3090647906U)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_7))))) : (var_9))))));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 3090647906U)), (((((/* implicit */_Bool) 1204319394U)) ? (9242469461593527344ULL) : (((/* implicit */unsigned long long int) 1204319407U))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-91)) ? (((/* implicit */unsigned long long int) arr_2 [(unsigned char)0])) : (9204274612116024271ULL)))) ? (arr_2 [i_0 - 1]) : (((/* implicit */long long int) 1204319407U))))) ? (min((((/* implicit */unsigned int) (unsigned char)240)), (3090647906U))) : (((((/* implicit */_Bool) 3090647906U)) ? (3090647883U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
        var_20 = ((/* implicit */unsigned short) (-(arr_2 [i_0 - 4])));
    }
}
