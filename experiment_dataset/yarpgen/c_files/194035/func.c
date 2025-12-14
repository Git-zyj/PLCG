/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194035
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) min((((/* implicit */unsigned int) var_5)), (((unsigned int) ((var_9) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))))))));
    var_15 = ((/* implicit */unsigned long long int) ((((unsigned int) ((((/* implicit */int) (unsigned short)58737)) - (((/* implicit */int) var_6))))) * (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)58737))))) / (((/* implicit */int) (unsigned short)58737)))))));
    var_16 += ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_1) : (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((var_3) | (((/* implicit */long long int) var_2))))) : (8339572547067910209ULL))), (((/* implicit */unsigned long long int) ((((var_5) + (2147483647))) << (((((min((((/* implicit */int) var_12)), (var_5))) + (1327382489))) - (29))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_10)) ? (var_13) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_0])))) : (min((arr_0 [i_0]), (((/* implicit */int) var_8)))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_0)) ? ((+(2408207776279053199ULL))) : (var_0))), (((/* implicit */unsigned long long int) (-(((long long int) -4502864795215214645LL)))))));
        arr_6 [i_0] |= ((/* implicit */unsigned short) var_2);
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) var_8);
        var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (arr_8 [(unsigned short)3])))) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (4952268947226203222LL) : (((/* implicit */long long int) var_5))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((10319191473730565318ULL) | (1850099738798027962ULL))))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 3; i_2 < 22; i_2 += 4) 
        {
            arr_13 [19LL] [i_1] [13U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_9 [i_2 + 1]) : (arr_10 [(unsigned short)12])));
            var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_5)) : (var_0))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)47435)))))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_2 - 1] [i_2])) ? (((/* implicit */long long int) arr_11 [i_2 + 1] [i_2])) : (var_11)));
            arr_14 [i_1] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) 14766094122077100386ULL)) ? (2408207776279053199ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
        }
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            arr_18 [i_1] |= (+(var_3));
            var_22 += ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_8 [i_3])) + ((-(8691067637192769144LL)))));
        }
        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */long long int) arr_9 [i_1])) + (var_1))));
            arr_22 [i_1] &= ((/* implicit */_Bool) ((arr_11 [i_4] [i_1]) << (((arr_16 [i_4] [i_1] [i_1]) - (424435854U)))));
            var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (8339572547067910207ULL)))) ? (((/* implicit */unsigned long long int) ((long long int) var_12))) : ((-(2408207776279053201ULL)))));
        }
        arr_23 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-32)) + (((/* implicit */int) arr_20 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2)))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1] [i_1]))) : (var_3)))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 3; i_5 < 20; i_5 += 3) 
    {
        var_25 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((var_0) / (((/* implicit */unsigned long long int) var_1))))));
        arr_26 [i_5] [i_5 + 3] = ((/* implicit */unsigned int) (((-(-6458588464391631475LL))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
    }
    var_26 += ((/* implicit */int) ((((/* implicit */_Bool) 1380331234524860497LL)) ? (min((((/* implicit */unsigned long long int) var_12)), ((-(10307035864232984516ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
}
