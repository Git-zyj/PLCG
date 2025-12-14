/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48278
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
    var_19 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] = arr_6 [i_0];
                            arr_12 [i_0] [(unsigned short)8] [i_0] [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) * (6556099319891271875ULL)))) ? (((/* implicit */int) ((unsigned char) var_1))) : ((~(((/* implicit */int) var_12))))))), (((((6016283387639357981ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) | (min((((/* implicit */unsigned long long int) (signed char)-25)), (arr_7 [i_2] [i_1 - 3] [i_0]))))));
                        }
                    } 
                } 
                var_20 |= ((/* implicit */signed char) ((unsigned long long int) ((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) var_6))))));
                /* LoopSeq 2 */
                for (short i_4 = 2; i_4 < 18; i_4 += 3) 
                {
                    var_21 = ((/* implicit */signed char) ((short) arr_10 [i_1 - 2] [i_1 + 1]));
                    var_22 = ((unsigned short) (((!(((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned char)8] [i_1])) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_4 [i_1 - 3]), (arr_4 [i_1 - 1])))) | ((+(((((/* implicit */int) arr_16 [i_0])) & (arr_10 [i_4] [i_1])))))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_10 [i_0] [i_0]) : (((/* implicit */int) arr_1 [i_1] [5ULL])))));
                    arr_22 [(_Bool)1] [i_1 - 1] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [16LL] [i_1 + 2] [16LL])) >= (((/* implicit */int) arr_14 [i_0] [i_1 - 3] [i_1 - 2]))));
                    arr_23 [(short)20] [i_1 - 3] [i_0] [i_0] = ((/* implicit */int) (+(((unsigned int) arr_2 [i_0]))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2537900454U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_1] [i_5] [i_6])))))) ? (arr_3 [i_0] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((int) arr_7 [i_0] [i_1] [i_6]))))))));
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_4 [i_1 - 2])))))));
                    }
                    for (signed char i_7 = 2; i_7 < 21; i_7 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((short) arr_2 [(unsigned short)13]))) : (((/* implicit */int) arr_18 [i_7 + 1] [i_7 - 2])))))));
                        var_26 = ((/* implicit */signed char) ((((_Bool) arr_18 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_5] [i_7]))) != (var_8))))) : (arr_7 [i_0] [i_1 + 2] [i_5])));
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_1 - 2] [(unsigned char)2] [i_7] = ((((/* implicit */int) arr_29 [i_0] [i_1 + 2] [i_7 - 1] [i_7])) | (((/* implicit */int) var_18)));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (arr_3 [i_0] [i_0] [i_0])));
                        }
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_5)) ? (arr_24 [i_0] [i_0] [(signed char)2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0])))))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_10 [i_1 - 2] [i_7 - 2]))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((unsigned int) arr_7 [i_0] [i_1 - 2] [i_7 - 2])))));
                            arr_39 [i_0] = ((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) arr_30 [i_0] [i_0] [i_0] [i_1 - 1])) : (((/* implicit */int) arr_30 [i_1] [i_1] [i_1 + 1] [i_1 - 1]))));
                        }
                        var_31 = (~(((/* implicit */int) var_1)));
                    }
                }
                arr_40 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_37 [i_0] [(unsigned char)14] [i_1 - 1] [18ULL] [i_1 - 3] [i_1 - 1])))) ? (((arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_37 [i_1] [i_1] [i_1] [i_1] [i_0] [20ULL]) : (arr_37 [i_0] [i_1] [i_0] [i_0] [i_1 - 3] [i_1 + 1]))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_33 [i_0] [2ULL] [(unsigned char)11] [i_1 + 2] [i_1 - 1] [(unsigned char)7])))))));
            }
        } 
    } 
}
