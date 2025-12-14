/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195487
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
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((arr_2 [i_0] [i_0 - 2]) ? (0U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_1 [i_0 - 3])))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_1))))) : (((/* implicit */int) (short)32767)))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((var_12) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (signed char)124)))))) : (var_14))) : (((/* implicit */long long int) ((unsigned int) var_13))))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1))))) / ((-(var_6))))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) -7163594030264133339LL))));
        arr_7 [i_1] = ((/* implicit */signed char) ((unsigned long long int) ((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), ((short)-32758))))))));
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        var_21 |= ((/* implicit */unsigned char) (signed char)-125);
        arr_12 [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(3324165932U)))))))));
        var_22 ^= ((/* implicit */unsigned long long int) ((max((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-49))) : (9U)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_11 [i_2]))))));
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            arr_15 [(_Bool)1] [i_2] [(_Bool)1] &= ((/* implicit */long long int) arr_9 [i_3] [2U]);
            var_23 += ((/* implicit */unsigned long long int) arr_10 [i_3]);
            var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_10)))) < (((/* implicit */int) var_16)))))) + (var_0)));
        }
    }
    var_25 |= ((/* implicit */short) min(((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)23630)) && (((/* implicit */_Bool) 4735809082283465063ULL))))))), (((/* implicit */int) var_17))));
    var_26 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 18U)) || (((/* implicit */_Bool) var_11))))));
    var_27 += ((/* implicit */signed char) (~(((/* implicit */int) (((-(var_8))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))));
    var_28 &= ((/* implicit */short) var_4);
}
