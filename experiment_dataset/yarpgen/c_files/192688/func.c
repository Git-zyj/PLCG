/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192688
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
    for (unsigned int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) var_2)) - (15023041319509012373ULL))), (((/* implicit */unsigned long long int) var_0))))) || (((/* implicit */_Bool) ((10LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        var_15 = ((/* implicit */short) ((((max((0ULL), (((/* implicit */unsigned long long int) var_13)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (var_1))))))) != (max(((-(11877658733376683809ULL))), (((/* implicit */unsigned long long int) 15LL))))));
        arr_2 [2LL] [i_0] &= ((((unsigned long long int) var_8)) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 3])))))));
        var_16 &= ((/* implicit */unsigned char) min((max((arr_1 [i_0]), (arr_1 [i_0 + 1]))), (((/* implicit */unsigned long long int) ((arr_1 [i_0 + 2]) <= (arr_1 [i_0 + 1]))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(((/* implicit */int) var_13)))))));
    }
    for (unsigned int i_1 = 1; i_1 < 22; i_1 += 3) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) arr_4 [(unsigned char)3]);
        arr_6 [i_1 + 2] = ((/* implicit */int) 11877658733376683807ULL);
        arr_7 [11LL] = ((/* implicit */unsigned long long int) max((((((arr_4 [i_1]) / (arr_4 [i_1]))) * (((/* implicit */unsigned int) ((/* implicit */int) var_8))))), (max((arr_4 [i_1 + 1]), (((/* implicit */unsigned int) var_5))))));
        var_18 = ((/* implicit */unsigned char) max((var_6), (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) 15LL))))))));
    }
    for (unsigned char i_2 = 2; i_2 < 23; i_2 += 4) 
    {
        arr_10 [i_2] = arr_8 [i_2];
        var_19 = ((/* implicit */unsigned long long int) max((var_2), (min((arr_8 [i_2 - 2]), (((/* implicit */long long int) var_13))))));
    }
    var_20 -= ((/* implicit */short) var_12);
}
