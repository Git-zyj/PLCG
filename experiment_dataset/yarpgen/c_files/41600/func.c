/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41600
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
    var_20 |= ((/* implicit */_Bool) ((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (var_14)))))));
    var_21 = ((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)32186)) : (((/* implicit */int) (unsigned char)224)))))))), (var_1)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max(((~(((var_2) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)32)))))), (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [(_Bool)1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) 21U)) ? (((/* implicit */long long int) 4294967274U)) : (9223372036854775807LL)));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)14929), (((/* implicit */short) arr_0 [(short)3]))))) ? (3165872937310801766ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)9])))));
    }
    for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        var_23 = ((/* implicit */unsigned int) (_Bool)0);
        var_24 = ((/* implicit */long long int) min((var_15), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3165872937310801782ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (short)16042)))) : (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) min((((/* implicit */short) arr_4 [7] [i_1])), ((short)10671)))) : ((-(((/* implicit */int) (unsigned char)234))))))));
    }
}
