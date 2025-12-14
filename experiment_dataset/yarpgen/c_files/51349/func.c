/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51349
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
    var_14 = ((/* implicit */_Bool) -222387524);
    var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (828357763) : (((/* implicit */int) var_8))))) : (max((var_6), (((/* implicit */long long int) -222387519)))))), (((/* implicit */long long int) var_7))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) min((-222387519), (((/* implicit */int) (unsigned short)13968))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_0 [i_0]))));
        var_18 *= ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) -222387513)))));
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 222387524)) ? (-1563523286) : (arr_2 [i_0] [i_0]))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 222387523)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) 18446744073709551605ULL);
        var_20 = min((min((arr_1 [i_1]), (arr_1 [i_1]))), (((/* implicit */int) ((_Bool) arr_1 [i_1]))));
        arr_8 [i_1] = ((/* implicit */signed char) min((-1768900020), ((~(((/* implicit */int) (unsigned char)85))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)65093)) || (((/* implicit */_Bool) (unsigned char)28)))) ? (((((/* implicit */int) arr_5 [i_1])) << (((((/* implicit */int) (unsigned char)243)) - (237))))) : (max((222387523), (-222387501)))))), (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) -584668318)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (var_0))) : (((/* implicit */unsigned int) arr_3 [i_1]))))));
    }
}
