/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26962
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
    var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8311)) ? (((/* implicit */int) (unsigned short)33450)) : (((/* implicit */int) (short)0)))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((max((((/* implicit */short) arr_0 [i_0])), (var_10))), (((/* implicit */short) var_7)))))));
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) >> (((min((var_9), (((/* implicit */long long int) arr_1 [i_0] [i_0])))) - (68LL))))) <= (min((var_13), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)32085))))))));
        var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((/* implicit */int) (unsigned short)52663)) : (((/* implicit */int) ((var_13) == (var_13))))))));
    }
    for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_1 + 3])), (var_0)))) ? (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -7087035083314355585LL)) || (((/* implicit */_Bool) arr_3 [i_1])))))) + (((((/* implicit */_Bool) var_2)) ? (var_4) : (var_4))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)14488)) ? (((((/* implicit */int) arr_4 [i_1])) >> (((var_8) - (1926301117))))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_7)))))))));
        arr_6 [i_1] = min((((/* implicit */unsigned int) ((((/* implicit */int) min((var_7), (arr_0 [i_1])))) << (((((((/* implicit */_Bool) 2664991053952989604LL)) ? (1290715805U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8311))))) - (1290715799U)))))), (((2571836970U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 3] [i_1]))))));
    }
    for (short i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
        /* LoopNest 2 */
        for (short i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                {
                    arr_16 [i_4] [i_3] [i_2] = ((/* implicit */unsigned short) arr_3 [i_2]);
                    var_22 *= ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32085)))))) ? (((arr_7 [i_2]) >> ((((+(((/* implicit */int) arr_11 [i_4] [i_2] [i_2])))) - (53))))) : (((/* implicit */int) arr_4 [i_2]))));
                }
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        arr_20 [i_5] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned int) ((short) (unsigned char)130))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) var_13)) : (var_15)))))));
        var_23 -= ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-27367)) ? (((/* implicit */int) (short)-13)) : (((/* implicit */int) (unsigned char)48))))))));
        arr_21 [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_18 [i_5])), (((((/* implicit */_Bool) ((arr_10 [i_5] [i_5] [i_5]) * (((/* implicit */unsigned int) var_8))))) ? (((/* implicit */int) min(((short)-14474), ((short)13)))) : (((int) (_Bool)1))))));
        var_24 = ((/* implicit */long long int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1))));
        arr_22 [i_5] [i_5] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_19 [i_5]))))) > (((/* implicit */int) arr_0 [i_5]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5]))) - (max((((/* implicit */unsigned int) (unsigned char)143)), (var_11)))))));
    }
    var_25 = ((/* implicit */_Bool) min((var_15), (((/* implicit */unsigned int) var_14))));
    var_26 = ((/* implicit */int) var_4);
    var_27 = ((/* implicit */long long int) var_15);
}
