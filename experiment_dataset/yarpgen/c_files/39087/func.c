/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39087
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [5ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_7))))))) - (min((((((/* implicit */int) (_Bool)0)) * (var_5))), (((/* implicit */int) (short)-1))))));
        var_11 &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))) == (((/* implicit */int) ((short) var_5)))))) > (((/* implicit */int) ((((unsigned long long int) (unsigned short)65535)) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1))))))));
        var_12 = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)8))))) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) var_1))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) / (((/* implicit */long long int) (+(arr_3 [i_1]))))));
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (_Bool)1))));
    }
    for (signed char i_2 = 4; i_2 < 18; i_2 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) (_Bool)1);
        var_15 = ((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) 4294967295U))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (arr_3 [i_2]) : (((/* implicit */int) var_4)))) | (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)-18555)) : (((/* implicit */int) (unsigned char)71))))))) ? (((((/* implicit */_Bool) arr_8 [i_2 - 4])) ? (((/* implicit */int) arr_8 [i_2 - 3])) : (((/* implicit */int) arr_8 [i_2 - 1])))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_8 [i_2])) != (((/* implicit */int) (short)-18555))))) != (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 1480040077558624932ULL)) || (((/* implicit */_Bool) var_9))))) >> (((/* implicit */int) ((unsigned char) (_Bool)1)))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) 14024853643773238942ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (((/* implicit */short) (signed char)60)))))) : (0U))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) arr_7 [i_2 - 3])) : (((/* implicit */int) arr_7 [i_2 - 3]))))))))));
    }
    var_18 = ((/* implicit */short) var_10);
}
