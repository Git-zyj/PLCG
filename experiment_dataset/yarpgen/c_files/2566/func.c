/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2566
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) var_12)) | (((/* implicit */int) (_Bool)0)))))));
    var_16 = ((/* implicit */short) var_10);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_17 -= ((/* implicit */unsigned int) ((((long long int) arr_0 [i_0] [i_0])) / (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0] [i_0]));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_7 [(unsigned short)7] [16] = ((unsigned short) arr_5 [i_1] [i_1]);
        var_18 ^= ((/* implicit */unsigned char) arr_6 [i_1]);
        var_19 = ((/* implicit */_Bool) var_10);
        var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) || (((/* implicit */_Bool) arr_5 [i_1] [i_1]))))), (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1])))))));
    }
    var_21 = ((((/* implicit */_Bool) ((unsigned char) var_11))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) ((short) ((unsigned char) var_3)))));
}
