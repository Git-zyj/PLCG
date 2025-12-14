/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20844
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_17)))) : (((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) / (var_16)))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0]) : (var_15))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3))))))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_1 [i_1])) + (27850)))))) % (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_5 [i_1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) var_13))))))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_1] [i_1]), (((/* implicit */unsigned short) arr_6 [i_1]))))) ? (min((((/* implicit */unsigned int) arr_6 [i_1])), (arr_2 [i_1] [i_1]))) : (((unsigned int) arr_5 [i_1]))));
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((long long int) (-9223372036854775807LL - 1LL))))) ? (min((((/* implicit */unsigned long long int) var_6)), (var_13))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_0)) ? (arr_11 [i_3] [i_3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
            var_22 = ((((/* implicit */_Bool) 255U)) ? (4294967041U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) ((short) (~(var_4))));
            var_24 = ((/* implicit */unsigned int) arr_12 [i_2] [i_2]);
            var_25 = ((/* implicit */signed char) ((arr_10 [i_4 + 2] [i_4] [i_4]) << (((arr_10 [i_4 + 2] [i_4] [i_4]) - (2047126178304952012LL)))));
            arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_11 [i_4 + 2] [i_4 + 2] [i_4 + 2])));
        }
        arr_15 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((int) arr_8 [i_2]))) : (min((var_15), (((/* implicit */long long int) arr_13 [i_2] [i_2] [i_2]))))));
        var_26 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((var_7) >> (((((/* implicit */int) arr_8 [i_2])) - (28269))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2])) ? (arr_11 [i_2] [i_2] [i_2]) : (arr_11 [i_2] [i_2] [i_2])))));
    }
    for (unsigned long long int i_5 = 4; i_5 < 21; i_5 += 4) 
    {
        var_27 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_16 [i_5 - 1])) ? (arr_16 [i_5 - 3]) : (((/* implicit */long long int) arr_17 [i_5 - 4] [i_5 + 2])))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_17 [i_5 - 1] [i_5])), (arr_16 [i_5 + 2])))) ? (((((/* implicit */_Bool) arr_17 [i_5 - 3] [i_5])) ? (((/* implicit */long long int) arr_17 [i_5 + 1] [i_5])) : (arr_16 [i_5 - 2]))) : (((/* implicit */long long int) var_7))));
    }
    var_29 += ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))) & (((((/* implicit */_Bool) var_13)) ? (var_18) : (((/* implicit */long long int) var_1)))))));
}
