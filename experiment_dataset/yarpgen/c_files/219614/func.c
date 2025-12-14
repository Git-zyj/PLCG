/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219614
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))), (max((var_8), (((/* implicit */int) var_9))))))) | (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_4)) : (var_8)))) ? (((/* implicit */unsigned long long int) var_8)) : (var_2)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_6))));
        var_11 *= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) * (((((/* implicit */_Bool) arr_2 [i_0] [8])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (int i_1 = 2; i_1 < 20; i_1 += 4) 
    {
        var_12 &= ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1 - 1])) * (((/* implicit */int) var_3))))) ? (((/* implicit */int) max((arr_6 [i_1 - 2]), (arr_6 [i_1 - 1])))) : (((arr_4 [i_1 - 2] [i_1 - 1]) ? (((/* implicit */int) arr_6 [i_1 - 2])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1])))));
        arr_7 [i_1] [i_1 + 1] = ((/* implicit */short) (unsigned char)149);
    }
    var_13 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (short)4095))) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (_Bool)0))))), (min((-8889859553286943583LL), (((/* implicit */long long int) (unsigned short)7))))));
    var_14 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_1)))));
}
