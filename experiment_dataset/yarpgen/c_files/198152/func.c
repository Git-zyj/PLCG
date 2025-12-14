/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198152
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / ((+(((/* implicit */int) var_6))))))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
    var_21 = ((/* implicit */signed char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_8))))))) + (((/* implicit */int) var_8))));
    var_22 = ((/* implicit */unsigned long long int) var_3);
    var_23 ^= (~(var_19));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) var_6);
            var_25 = ((/* implicit */unsigned short) ((short) arr_4 [i_1 + 4]));
        }
        for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */_Bool) var_11);
            var_27 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [(short)22])) * (((/* implicit */int) arr_2 [(short)12]))));
            var_28 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0 - 1] [i_2 + 4])));
        }
        arr_7 [i_0] = ((var_16) + (var_17));
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_29 = min(((+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3])) || (((/* implicit */_Bool) arr_0 [i_3] [i_3]))))))), (((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_3 [i_3])))) ? (min((((/* implicit */int) (short)1242)), (2147483647))) : (min((var_11), (((/* implicit */int) (unsigned short)65535)))))));
        var_30 = ((((/* implicit */_Bool) min((min((((/* implicit */int) var_6)), (1559893800))), (((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))) && ((!(((/* implicit */_Bool) (~(arr_8 [i_3])))))));
        var_31 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)(-32767 - 1)), ((short)-16430)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_3))))) : (arr_5 [i_3])))) == (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) arr_4 [i_3]))))) | (((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (6609997094923562706ULL)))))));
        var_32 = ((/* implicit */int) min((((var_13) ? (((arr_5 [i_3]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)20230))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3]))))), (((/* implicit */unsigned int) ((_Bool) min((arr_6 [i_3]), (var_0)))))));
        var_33 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (((((_Bool)0) && (((/* implicit */_Bool) (signed char)-101)))) && ((!(var_13)))))), (max((var_10), (((/* implicit */int) arr_3 [i_3]))))));
    }
}
