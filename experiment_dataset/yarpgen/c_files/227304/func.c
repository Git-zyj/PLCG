/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227304
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
    var_19 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (var_3)))) ? (var_13) : (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) (unsigned char)37))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) -1534077938798863641LL);
        var_20 = ((/* implicit */unsigned char) max((1534077938798863623LL), (((/* implicit */long long int) (unsigned short)534))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0 - 1])) < (((((/* implicit */_Bool) ((int) arr_2 [i_0]))) ? (((/* implicit */int) min(((unsigned char)0), ((unsigned char)0)))) : (max((var_0), (((/* implicit */int) (unsigned short)22049))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_22 = ((((/* implicit */int) ((var_4) >= (((/* implicit */long long int) var_7))))) > (((/* implicit */int) ((arr_0 [i_1]) && (((/* implicit */_Bool) var_16))))));
        var_23 = ((/* implicit */_Bool) var_4);
    }
    for (int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2])) >> (((/* implicit */int) arr_1 [0ULL]))))) ? ((~(((/* implicit */int) arr_0 [i_2])))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_1 [4U])) : (((/* implicit */int) (short)-22734))))));
        var_25 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (var_13))))))));
    }
    var_26 = var_9;
    var_27 -= ((/* implicit */_Bool) var_15);
    var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) / ((+(((/* implicit */int) var_8))))))) != (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_10))))))));
}
