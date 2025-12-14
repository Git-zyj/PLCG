/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212081
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? ((+(var_9))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (5864022161767649406ULL)))) ? (((((/* implicit */_Bool) 5864022161767649406ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((5864022161767649402ULL), (((/* implicit */unsigned long long int) var_12))))) ? (((((/* implicit */_Bool) (short)30475)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) + (min((((/* implicit */unsigned long long int) var_8)), (min((5864022161767649420ULL), (((/* implicit */unsigned long long int) var_4))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19))) : (13899744387543625874ULL)))) ? (((var_9) ^ (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18297)))))));
        var_15 = ((/* implicit */long long int) (short)(-32767 - 1));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30475))) : (max((((/* implicit */unsigned long long int) (short)-32765)), (((((/* implicit */_Bool) (short)18296)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (12582721911941902195ULL)))))));
    }
    for (unsigned short i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)-32767)))))))));
        var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1] [i_1 - 1])))) ^ ((~(((/* implicit */int) arr_1 [i_1] [i_1]))))));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (short)32746))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 + 1] [i_1]))) : ((~(min((((/* implicit */unsigned long long int) (unsigned short)18307)), (5864022161767649412ULL)))))));
    }
}
