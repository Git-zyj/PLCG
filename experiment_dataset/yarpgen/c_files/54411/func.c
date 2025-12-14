/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54411
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
    var_14 ^= ((/* implicit */signed char) var_6);
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 2243894865U)) : (var_1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_4 [11] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) var_12)) != ((~(((/* implicit */int) (unsigned char)116)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) max((15437332954461338015ULL), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) max((2002028017U), (((/* implicit */unsigned int) (unsigned char)209))))) : (arr_1 [i_0])))));
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((arr_0 [i_0]), (arr_0 [i_0])))), (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)227)), ((unsigned short)2)))))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) max((max((((/* implicit */unsigned char) arr_5 [i_1] [16])), (arr_6 [i_1] [i_1]))), (arr_6 [i_1] [i_1])));
        var_17 = ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) arr_5 [i_1] [i_1])), (2243894865U)))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_6 [18] [24U]), (((/* implicit */unsigned char) var_10))))))))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) max((min(((short)15757), (((/* implicit */short) (_Bool)1)))), ((short)8942))))));
    }
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
}
