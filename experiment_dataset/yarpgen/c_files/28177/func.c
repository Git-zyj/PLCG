/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28177
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
    var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)32764)), (((8286988738840971701ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
    var_12 = ((/* implicit */signed char) min((((/* implicit */int) var_2)), (-992346433)));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 1608020391)))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-1834))))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-150967803691883243LL)))))) : (var_3)));
    var_14 = max((((/* implicit */unsigned long long int) max(((+(-6660173004022858447LL))), (((/* implicit */long long int) var_8))))), (4778150673768877283ULL));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_0 [(unsigned short)15]))));
        var_16 *= ((/* implicit */signed char) ((unsigned int) var_2));
        var_17 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | ((+(4427843867376438320ULL)))));
        var_18 = ((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_0] [i_0]));
    }
    for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 2) 
    {
        var_19 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) max((arr_4 [i_1]), (arr_4 [i_1])))) ? (14772961045474994056ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)63702), (((/* implicit */unsigned short) var_6)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) || ((!(((/* implicit */_Bool) arr_4 [i_1])))))))));
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_4 [i_1])), (((((/* implicit */_Bool) var_9)) ? (arr_5 [i_1 - 2]) : (arr_5 [i_1 + 1])))));
        var_21 = 9176190816026999980ULL;
    }
}
