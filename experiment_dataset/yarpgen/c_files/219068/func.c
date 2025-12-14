/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219068
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
    var_12 = ((/* implicit */unsigned long long int) (short)-28181);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (7552443793994035367ULL))) - (((/* implicit */unsigned long long int) max((arr_0 [i_0 + 1]), (((/* implicit */int) var_10)))))))));
        arr_2 [7LL] [i_0] = ((/* implicit */_Bool) ((17882961887719583366ULL) / (13682558947111527442ULL)));
        arr_3 [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) var_0))))) ? (min((((/* implicit */unsigned int) var_7)), (2629271200U))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (short)-28181)))), (arr_0 [i_0 - 3])))) ? ((+(((((/* implicit */int) var_2)) / (((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_8))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        var_15 |= ((/* implicit */unsigned char) var_0);
        var_16 = ((/* implicit */unsigned short) (((~(1686279745165734794ULL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1])))))));
        var_17 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (0ULL)))));
    }
    var_18 = ((/* implicit */unsigned char) var_0);
}
