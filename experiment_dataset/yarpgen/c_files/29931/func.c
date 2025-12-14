/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29931
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
    var_20 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [(_Bool)1] &= ((((/* implicit */_Bool) min((12ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (min((5ULL), (18446744073709551593ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0])), (var_15)))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), ((short)-26740))))) : (((var_8) ? (min((10ULL), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)255)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) var_12)) : (11143032513464366018ULL)))) ? (min((((/* implicit */int) (short)4389)), (arr_3 [i_1]))) : (((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_19))))))) ? (((/* implicit */long long int) min((max((((/* implicit */int) var_5)), (var_13))), (arr_4 [i_1])))) : (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)48)), (var_13)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (1006094744) : (((/* implicit */int) (_Bool)1))))) : (min((var_15), (((/* implicit */long long int) var_7))))))));
        arr_7 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */short) arr_5 [i_1] [i_1]))))), (max((7303711560245185592ULL), (((/* implicit */unsigned long long int) max((arr_5 [i_1] [11LL]), (arr_5 [(unsigned short)9] [(unsigned short)9]))))))));
        var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (15ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1]))))) ? (var_18) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [(signed char)11])) : (((/* implicit */int) var_19))))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 38ULL)) ? (((/* implicit */int) (_Bool)1)) : (arr_4 [i_1])))) ? (((/* implicit */int) arr_1 [i_1])) : (arr_3 [i_1])))) ? (min((18446744073709551612ULL), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) (_Bool)1)), (7421397488506941523LL))), (((/* implicit */long long int) min((arr_4 [i_1]), (((/* implicit */int) arr_5 [i_1] [i_1]))))))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) (short)4386)) : (((/* implicit */int) var_19))));
    }
    var_25 = ((/* implicit */short) var_14);
    var_26 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */int) var_1)), (412120797))) : (min((((/* implicit */int) var_0)), (-412120798))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_14))))) ? (var_12) : (((/* implicit */int) var_10))))));
}
