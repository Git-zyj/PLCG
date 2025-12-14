/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1951
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
    /* LoopSeq 3 */
    for (short i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-6)) + (2147483647))) << (((((-647103697) + (647103718))) - (21)))));
        var_19 = arr_1 [i_0];
        var_20 *= ((/* implicit */short) (+(((/* implicit */int) var_12))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_21 = ((/* implicit */short) (((+(((/* implicit */int) arr_2 [i_1])))) + (((/* implicit */int) (_Bool)0))));
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 17; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)16)))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_6 [i_1] [i_2] [16LL])) ? (((/* implicit */int) arr_9 [(unsigned char)13] [i_2 - 1] [8U] [i_3 + 2] [i_3] [i_3 + 2])) : (((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : ((((_Bool)1) ? (min((((/* implicit */long long int) var_3)), (9223372036854775807LL))) : (min((((/* implicit */long long int) arr_8 [i_1] [i_1] [(_Bool)1] [i_4])), (23LL)))))));
                    }
                } 
            } 
        } 
        arr_11 [i_1] = ((/* implicit */signed char) min((((/* implicit */long long int) ((short) max((3344341564376821962ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (min((((/* implicit */long long int) arr_2 [(_Bool)1])), (var_15)))));
        var_24 = ((((/* implicit */_Bool) arr_10 [(unsigned short)12])) ? (((/* implicit */int) ((signed char) (signed char)(-127 - 1)))) : (((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (unsigned short)4424)) : (((/* implicit */int) (_Bool)1)))));
    }
    for (short i_5 = 1; i_5 < 17; i_5 += 2) 
    {
        arr_16 [i_5] [(short)20] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8720576765102281412ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_15 [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))) : ((((_Bool)1) ? ((~(arr_1 [(signed char)21]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) min((var_0), (arr_0 [i_5 + 1]))))));
        var_26 = ((/* implicit */signed char) (unsigned char)16);
    }
    var_27 = ((/* implicit */unsigned int) var_4);
}
