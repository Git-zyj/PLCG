/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235324
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
    var_12 += ((/* implicit */int) 1533239002U);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_2 [(unsigned short)10] [i_0] &= ((/* implicit */unsigned short) 1533239002U);
        var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (1533239002U) : (((/* implicit */unsigned int) ((-1105616332) % (((/* implicit */int) (unsigned short)1)))))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_14 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(-696388390814980328LL)))))) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) var_7))));
        var_15 = ((((((/* implicit */_Bool) max((2761728293U), (((/* implicit */unsigned int) (unsigned short)65521))))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (1533239002U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)24576)) + (((/* implicit */int) (unsigned short)1))))))) & (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) (unsigned short)1748)))) / (((/* implicit */int) var_11))))));
        var_16 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_0 [i_1])))) ? (((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) (~(arr_4 [i_1])))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 2761728316U)) ? (2761728293U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (((((/* implicit */_Bool) (~(-1105616332)))) ? (2761728293U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (-2038613194) : (((/* implicit */int) var_4)))))))));
        var_18 ^= (signed char)3;
        var_19 -= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [2])) ? (((((/* implicit */int) var_3)) << (((/* implicit */int) (unsigned short)1)))) : (arr_4 [i_2])))) | ((~(((unsigned int) arr_9 [2U])))));
        var_20 = ((/* implicit */unsigned short) 1105616332);
        var_21 = arr_6 [i_2];
    }
    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) * (((((/* implicit */_Bool) (signed char)-93)) ? (arr_5 [(unsigned short)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (((((/* implicit */_Bool) 2038613194)) ? (-2038613195) : (((/* implicit */int) arr_11 [i_3])))) : (max((1366615893), (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (short)-1)))))))));
        var_23 &= ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) ^ (arr_4 [i_3])))));
    }
    var_24 = ((/* implicit */int) var_11);
    var_25 = ((/* implicit */unsigned char) max((((/* implicit */int) var_0)), (((((((/* implicit */_Bool) -1125563568)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)22009)))) - (((/* implicit */int) var_8))))));
}
