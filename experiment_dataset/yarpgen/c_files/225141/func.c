/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225141
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
    var_14 += ((/* implicit */int) 16711680U);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)-16384)), (288221580058689536LL)))) && ((!(((/* implicit */_Bool) 16711681U)))))))));
        var_16 -= ((/* implicit */unsigned short) ((_Bool) ((((4278255614U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) && (((/* implicit */_Bool) ((unsigned long long int) 288221580058689536LL))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) >> (((16711680U) - (16711661U)))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (576443160117379072LL)))))));
    }
    for (short i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        var_17 += ((/* implicit */unsigned int) ((((unsigned long long int) arr_1 [i_1] [i_1 - 1])) - (((/* implicit */unsigned long long int) var_11))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775808ULL)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))) ? (((/* implicit */unsigned long long int) ((var_10) | (((/* implicit */int) arr_1 [i_1] [i_1]))))) : (min((var_7), (((/* implicit */unsigned long long int) arr_3 [i_1]))))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) 1974530110U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) : (var_6))) : (((/* implicit */unsigned long long int) ((max((3075042741U), (((/* implicit */unsigned int) arr_6 [i_2])))) / (((((/* implicit */_Bool) (unsigned short)59601)) ? (1219924545U) : (3075042741U))))))))));
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((unsigned short) (~((((_Bool)1) ? (-868006315) : (((/* implicit */int) arr_0 [i_2]))))))))));
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) | (14172299163703841315ULL)))) ? (((/* implicit */unsigned long long int) max((2048U), (16711682U)))) : (1121944886672941860ULL))) < (((/* implicit */unsigned long long int) ((arr_5 [i_2] [i_2]) ? (16711682U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
    }
}
