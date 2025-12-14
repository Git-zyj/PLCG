/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215619
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
    var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (min((var_16), (13296361718271252477ULL))) : (((var_1) - (((/* implicit */unsigned long long int) var_2))))))) && ((_Bool)1)));
    var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (15) : (((var_12) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-25158)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [6ULL] [(unsigned char)3])) ? (var_14) : (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))))) ? (var_5) : (arr_2 [i_0] [i_0]))));
        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((((8387584U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)25159))))) ? (var_9) : (((arr_0 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6))))) / (var_6))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_23 ^= arr_3 [4] [4];
        var_24 -= ((/* implicit */short) ((_Bool) arr_4 [i_1] [i_1]));
        var_25 *= ((/* implicit */unsigned int) ((_Bool) ((((((/* implicit */int) arr_3 [8ULL] [8ULL])) - (((/* implicit */int) var_18)))) >> (((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(_Bool)0] [(_Bool)0]))) : (arr_4 [i_1] [(_Bool)1]))) - (11830176371012139750ULL))))));
    }
    var_26 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) > (((((((/* implicit */_Bool) (short)25157)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) + (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_4)))))));
}
