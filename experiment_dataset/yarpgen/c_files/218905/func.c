/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218905
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
    var_16 *= ((/* implicit */unsigned char) var_7);
    var_17 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 2])) < (((/* implicit */int) arr_3 [i_0 + 2])))))));
                    var_18 = ((/* implicit */long long int) ((short) max((arr_2 [i_0 + 1]), (arr_2 [i_0 + 2]))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_3 = 3; i_3 < 22; i_3 += 1) 
        {
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((short) min((arr_0 [i_0 - 1]), (((/* implicit */long long int) arr_3 [i_0 + 1]))))))));
            arr_10 [(unsigned char)7] [i_3] = arr_9 [i_3 - 1] [i_0];
            var_20 = ((((/* implicit */_Bool) min((((/* implicit */short) arr_5 [i_3 - 1] [i_3 - 1] [i_0 - 1])), (arr_2 [i_0 + 1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) max((var_5), (arr_5 [(short)23] [i_3] [i_3]))))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) var_2))))) % (arr_0 [i_0 + 1]))));
        }
        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            var_21 = ((/* implicit */long long int) var_6);
            var_22 &= ((short) var_13);
        }
        arr_14 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned char)4])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) max((var_14), (var_5)))) : (((/* implicit */int) arr_3 [i_0 - 1]))))) : (min((arr_11 [i_0] [i_0 + 2] [i_0 + 1]), (116749583337936431LL))));
        var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((long long int) (short)-2)))) > (((/* implicit */long long int) ((/* implicit */int) arr_13 [20LL])))));
    }
    var_24 &= ((/* implicit */long long int) var_8);
    var_25 |= ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(-6935408517054916492LL)))) ? (((long long int) var_7)) : ((~(var_1))))) < (((long long int) (+(22LL))))));
}
