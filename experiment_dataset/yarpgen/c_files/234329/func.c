/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234329
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [2U] |= ((/* implicit */signed char) ((arr_0 [i_0] [i_0]) ? (min((((/* implicit */int) arr_0 [i_0] [i_0])), (((arr_1 [(short)6]) ^ (arr_1 [(_Bool)1]))))) : (min((min((var_7), (((/* implicit */int) arr_0 [i_0] [i_0])))), (min((((/* implicit */int) arr_0 [i_0] [i_0])), (var_1)))))));
        var_10 |= ((/* implicit */unsigned short) min((((min((((/* implicit */int) var_9)), (arr_1 [(_Bool)1]))) ^ (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [4LL])) ? (var_4) : (arr_1 [0ULL])))) ? (arr_1 [(unsigned short)0]) : (((/* implicit */int) ((arr_0 [3U] [i_0]) || (var_9))))))));
    }
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4982581270631256328LL)) ? (min((3042155609U), (((/* implicit */unsigned int) (short)-18145)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (max((((/* implicit */long long int) max((1174815495U), (((/* implicit */unsigned int) (short)-18145))))), (-9223372036854775804LL))) : (((/* implicit */long long int) ((var_3) ? (var_1) : (((/* implicit */int) var_2))))));
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (~(((((/* implicit */_Bool) -2124963781)) ? (37755676U) : (((/* implicit */unsigned int) 2124963762)))))))));
    var_13 = ((/* implicit */long long int) max((var_1), (((/* implicit */int) var_3))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */int) var_6)) | (((/* implicit */int) var_9)))), (((((/* implicit */int) var_6)) & (((/* implicit */int) var_6))))))) ? (var_1) : (((((((/* implicit */int) var_6)) & (var_1))) & (((/* implicit */int) (unsigned char)31))))));
}
