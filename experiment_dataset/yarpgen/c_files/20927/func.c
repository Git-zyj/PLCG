/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20927
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
    var_10 = ((/* implicit */unsigned char) ((_Bool) ((((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */int) var_9)))) % (var_8))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        arr_2 [5U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 2])) ? ((+(((/* implicit */int) ((_Bool) 10767051592612393210ULL))))) : (var_7)));
        arr_3 [i_0] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
    }
    for (unsigned char i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12988946028016431123ULL)) ? (-9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), ((-2147483647 - 1))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)23)), (1414807924)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_5 [i_1])))) : (((unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_1] [i_1])), (((((/* implicit */_Bool) -9223372036854775795LL)) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1 - 2])))))))));
        var_11 &= ((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)-24949)) % (var_3))), (((((/* implicit */_Bool) (-(9223372036854775807LL)))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (arr_4 [i_1 - 2] [i_1]))))))));
    }
    var_12 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)255)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234))))), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775794LL))))), (var_7))))));
}
