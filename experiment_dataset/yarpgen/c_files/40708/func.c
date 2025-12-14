/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40708
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_17 += ((/* implicit */unsigned char) ((arr_1 [i_0]) >> (((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 2147483647)))) - (9428391465162370338ULL)))));
        var_18 += ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (7022109321821696472ULL))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)149)) ? (10681092788766533746ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (842114786U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)112))))))));
    }
    for (int i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) (_Bool)1);
        arr_5 [i_1 + 3] [i_1 + 2] = ((/* implicit */unsigned char) 2144068867);
        arr_6 [i_1 + 2] |= var_14;
    }
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) var_4))))), (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) var_3))))))) ? (((/* implicit */unsigned int) (~(160140357)))) : (min((min((var_1), (var_16))), (((/* implicit */unsigned int) max((var_5), ((short)(-32767 - 1)))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */long long int) 3324690016U)))), (((/* implicit */long long int) ((4070289264U) - (((/* implicit */unsigned int) var_13)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((unsigned int) max((((/* implicit */int) (short)-32754)), (var_11))))));
}
