/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237394
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) (short)30532))));
    var_15 = ((/* implicit */unsigned short) ((short) ((unsigned char) (_Bool)0)));
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65535)), (var_13)))) ? (((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528))))) : (((var_3) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) && (((/* implicit */_Bool) var_13)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned char) arr_1 [i_0] [i_0]))))) ? (((max((((/* implicit */unsigned int) var_12)), (var_10))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */int) arr_1 [i_0] [i_0])) < (((/* implicit */int) arr_1 [(unsigned char)13] [(unsigned char)13])))), (arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] [i_0] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0]))))), (min((((/* implicit */unsigned long long int) (unsigned short)1)), (var_7)))));
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_0] [i_0])) & (((/* implicit */int) arr_0 [i_0] [i_0])))) | (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_4 [10ULL] = ((/* implicit */long long int) var_1);
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((2029606396U) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6))))))) - (((((/* implicit */_Bool) var_10)) ? (12151612474737913396ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528)))))));
    }
}
