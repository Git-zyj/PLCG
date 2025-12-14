/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35880
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
    var_11 ^= ((/* implicit */unsigned char) var_9);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned char)193)) + (((/* implicit */int) arr_0 [i_0])))) % (((/* implicit */int) arr_1 [i_0]))));
        arr_3 [i_0] = ((_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) var_3))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((short) ((arr_5 [i_1 + 1]) & (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_5 [i_1 + 1]))))))))))));
        var_13 *= ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)));
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(15412642500172249671ULL)))) ? ((-(arr_4 [(_Bool)1] [i_1 + 1]))) : (((/* implicit */unsigned long long int) max((arr_5 [i_1]), (((/* implicit */long long int) (unsigned short)255)))))))) ? (((arr_4 [i_1] [i_1 + 1]) + (((/* implicit */unsigned long long int) arr_5 [i_1 + 1])))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)247)))))), (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (var_0)))))));
        arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((/* implicit */_Bool) ((arr_4 [i_1] [i_1]) / (((((/* implicit */_Bool) 2147483647)) ? (14292219309001840238ULL) : (arr_4 [i_1] [i_1]))))))));
    }
    for (int i_2 = 3; i_2 < 10; i_2 += 2) 
    {
        var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) var_6))));
        var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)161))));
        arr_13 [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)254))));
    }
}
