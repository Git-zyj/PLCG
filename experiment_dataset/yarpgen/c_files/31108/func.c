/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31108
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
    var_19 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_6)))))) ? (((/* implicit */int) var_14)) : (((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */int) var_8)))) : (((((/* implicit */int) var_13)) / (((/* implicit */int) var_0)))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_17)))) : ((~(((/* implicit */int) (unsigned short)41128))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_21 -= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_2 [i_0] [(signed char)4])) >> (((((/* implicit */int) var_8)) + (100))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */int) max((var_7), (((/* implicit */signed char) arr_2 [i_0] [i_0]))))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_22 *= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) var_8))))) ? (var_4) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1])) != (arr_7 [i_1])))) : ((+(((/* implicit */int) var_0)))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned short) (+(arr_4 [i_1])));
    }
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) ((min((arr_9 [i_2]), (((/* implicit */unsigned int) ((var_11) <= (((/* implicit */long long int) arr_9 [i_2]))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2])))));
        var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_2]))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_14 [i_2] [i_2] [i_2])) : (var_18)))) ? (max((var_9), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_3] [i_3] [i_2]))) : (var_16))))));
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_6))));
                    var_26 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */int) arr_15 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1])))));
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            arr_23 [i_5] [i_6] = ((/* implicit */long long int) max((((/* implicit */int) var_17)), (min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) arr_18 [i_6]))))));
            var_27 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_16)))));
        }
        var_28 -= ((/* implicit */_Bool) (~(((((/* implicit */int) max((var_1), (((/* implicit */short) var_13))))) / (((((/* implicit */int) var_13)) - (((/* implicit */int) arr_19 [i_5] [i_5]))))))));
    }
}
