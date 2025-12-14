/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198682
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
    var_13 = ((/* implicit */_Bool) max((max((12675182964847882871ULL), (((/* implicit */unsigned long long int) -496037837560859926LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (var_12)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))) : ((~(((/* implicit */int) var_11)))))))));
    var_14 = ((/* implicit */unsigned short) (~((+(((var_5) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 1] [12ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_12)))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? ((+(8775604261528705957LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [(_Bool)1] [(signed char)11]))))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_5)))))));
                arr_5 [i_0] [(unsigned short)0] [6LL] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((arr_1 [i_1]), (((/* implicit */unsigned char) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [12LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1] [i_0 + 1]))) : (var_10)))) : ((~(var_0)))))));
            }
        } 
    } 
    var_15 = max((((var_6) / (((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_6))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (var_6) : (max((((/* implicit */long long int) var_1)), (var_6))))));
}
