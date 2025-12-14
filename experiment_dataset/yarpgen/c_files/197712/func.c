/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197712
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_0 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)7]))))) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)44)) : (-2147483639)))))) ? (((((/* implicit */_Bool) (-(2147483640)))) ? (((/* implicit */unsigned long long int) var_10)) : (min((10349961957423733284ULL), (8543407749503114538ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) (unsigned short)12288)), (2390698100U))))))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (var_3)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (-724334241)))) : (((((/* implicit */_Bool) (unsigned char)69)) ? (86663315U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224))))))) : (var_4)));
        arr_3 [i_0] |= ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((unsigned int) var_0))), (var_3))) & (((/* implicit */long long int) ((/* implicit */int) var_15)))));
        var_18 &= ((/* implicit */int) 924426407U);
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) min((var_5), ((unsigned char)69)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_8 [(signed char)24] |= ((/* implicit */int) max((min((1153137133994387943LL), (arr_7 [i_1]))), (max((((var_6) & (((/* implicit */long long int) ((/* implicit */int) var_9))))), (var_2)))));
        arr_9 [14] |= (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 15747679213308875640ULL)) ? (((/* implicit */unsigned long long int) 499396451U)) : (12531833991166729826ULL))))));
        arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_5)) : ((((((-(((/* implicit */int) (unsigned short)53248)))) + (2147483647))) << (((((((/* implicit */_Bool) 17944029765304320LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)218))) : (var_0))) - (218LL)))))));
    }
    var_19 = ((/* implicit */_Bool) var_0);
    var_20 = ((/* implicit */unsigned short) min((max((((var_9) ? (0ULL) : (((/* implicit */unsigned long long int) -2433292249080413064LL)))), (((/* implicit */unsigned long long int) var_11)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((long long int) 3048928840U))) : (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
    var_21 += ((/* implicit */unsigned long long int) min((var_0), ((~(max((((/* implicit */long long int) (unsigned char)52)), (var_3)))))));
}
