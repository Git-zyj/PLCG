/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241801
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
    var_17 = ((/* implicit */int) var_1);
    var_18 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [0ULL] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_14)), (arr_2 [i_0])))) ? (((((((/* implicit */int) var_4)) + (2147483647))) << (((((/* implicit */int) var_2)) - (1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))));
        arr_4 [12U] |= ((/* implicit */unsigned int) max((((arr_0 [(_Bool)0] [(_Bool)0]) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_4)) : (arr_1 [i_0] [i_0])))))), (((/* implicit */long long int) max((((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [i_0]) - (1231155267))))), ((-(((/* implicit */int) arr_2 [i_0])))))))));
        arr_5 [4LL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((arr_0 [(short)10] [(short)10]) | (((/* implicit */long long int) ((/* implicit */int) var_6))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((short) var_11)), (((/* implicit */short) var_6)))))) : (min((((/* implicit */long long int) ((signed char) (unsigned short)450))), (min((((/* implicit */long long int) var_3)), (arr_0 [(unsigned char)8] [i_0])))))));
        arr_6 [i_0] = ((short) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0] [(unsigned short)0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12))))));
    }
    var_19 = ((/* implicit */signed char) var_11);
}
