/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215638
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) 1692421159))) ? (1692421159) : (((/* implicit */int) (unsigned short)65535))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0]);
        var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3200217986701607877LL)) ? (3200217986701607877LL) : (((/* implicit */long long int) 0))))) ? (((long long int) arr_1 [i_0])) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0])) : (var_5))))));
        arr_4 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (-253848343849702500LL));
        var_17 = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0]))));
        var_18 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-119))) <= (6108978147155471927LL))));
    }
    var_19 -= ((/* implicit */unsigned int) ((var_10) ? (max((((/* implicit */unsigned long long int) (signed char)-28)), (10485403682657332954ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    var_20 = ((-2123510062) * (0));
    var_21 = max((3564743100883391533ULL), (max((((((/* implicit */_Bool) 6108978147155471927LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65280))) : (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
}
