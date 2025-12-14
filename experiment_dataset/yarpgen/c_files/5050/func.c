/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5050
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (+(arr_0 [i_0]))))))));
        var_12 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)24631)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))) : (1633506178U)));
    }
    for (long long int i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)40904)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43)))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) 3076909320U)) || (((/* implicit */_Bool) (unsigned short)49152))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) || ((!(((/* implicit */_Bool) var_8))))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 15; i_2 += 2) 
        {
            var_16 |= ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 2])) ? (arr_1 [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) var_1))));
        }
    }
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (var_4)))));
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_19 -= ((/* implicit */signed char) (~((((!(((/* implicit */_Bool) arr_6 [i_3] [i_3])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7))))) : (arr_1 [i_3 + 1] [i_3])))));
        var_20 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_2 [i_3 + 1]))))));
        var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)32))))) ? (((((/* implicit */_Bool) 3756799711U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40905))) : (3099670594225272027LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
        var_22 += arr_8 [i_3 + 1];
    }
    for (int i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        var_23 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_5) ? (arr_3 [i_4]) : (((/* implicit */long long int) arr_4 [i_4] [i_4]))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_5 [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((+((-9223372036854775807LL - 1LL)))))))));
        var_25 *= ((/* implicit */unsigned int) (+(3099670594225272027LL)));
    }
}
