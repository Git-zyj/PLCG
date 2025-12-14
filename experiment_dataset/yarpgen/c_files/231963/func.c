/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231963
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
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (-(((unsigned int) ((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */int) var_2))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
        var_16 -= ((/* implicit */unsigned int) var_2);
        arr_4 [i_0] = ((/* implicit */unsigned char) var_3);
    }
    for (unsigned char i_1 = 4; i_1 < 15; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) var_2);
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    {
                        var_17 = (~(((/* implicit */int) var_1)));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 1; i_5 < 15; i_5 += 4) 
                        {
                            var_18 += ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 1636884272)) ? (arr_13 [i_1 - 3] [i_2]) : (arr_13 [i_1 + 2] [2LL]))));
                            var_19 = ((/* implicit */signed char) ((min((var_10), (((/* implicit */int) min((arr_7 [(unsigned char)15]), (arr_15 [i_1] [i_2] [i_2] [i_4])))))) | (arr_2 [i_3])));
                            arr_19 [i_1] [i_2] = ((/* implicit */short) arr_10 [i_4] [i_1]);
                            arr_20 [i_1] = ((/* implicit */_Bool) arr_1 [i_1]);
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((int) arr_0 [i_1]));
                        }
                        var_20 = ((/* implicit */int) min((var_20), ((+(((/* implicit */int) (unsigned char)255))))));
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_12))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            arr_24 [i_1] [i_1] [i_3] [12LL] [i_6] = arr_22 [i_1 + 1] [5U] [6LL];
                            arr_25 [i_4] [16U] [(short)6] [i_4] [(short)6] [2] [16U] |= ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)242));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            arr_28 [i_1] = ((/* implicit */unsigned char) arr_6 [i_1]);
            /* LoopSeq 3 */
            for (signed char i_8 = 1; i_8 < 14; i_8 += 4) 
            {
                arr_31 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) arr_30 [i_8] [i_8 + 1] [i_8])), (1438150225)));
                arr_32 [i_1] = ((/* implicit */unsigned short) (unsigned char)2);
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_18 [i_1] [i_7] [i_8] [i_7] [i_1]))));
                /* LoopSeq 2 */
                for (short i_9 = 2; i_9 < 13; i_9 += 2) 
                {
                    arr_35 [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_4))));
                    arr_36 [i_1] [i_1] = var_5;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        arr_39 [11LL] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) -1264786423519320432LL)));
                        var_23 ^= ((/* implicit */unsigned short) ((arr_29 [i_8 + 2] [i_9 - 2] [i_8 + 2]) << (((var_10) + (1949932468)))));
                        arr_40 [i_10] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)162))))) ? ((-(0U))) : (arr_38 [i_1] [(unsigned char)0] [(unsigned char)0] [15ULL] [(unsigned char)0]));
                    }
                }
                /* vectorizable */
                for (unsigned int i_11 = 1; i_11 < 16; i_11 += 3) 
                {
                    var_24 ^= ((/* implicit */unsigned int) 161509145);
                    var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_11 - 1] [i_1] [(_Bool)1] [i_1] [(_Bool)1]))) : (arr_29 [i_1] [i_8] [i_11 + 1])))));
                }
            }
            for (unsigned int i_12 = 1; i_12 < 16; i_12 += 2) 
            {
                var_26 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_23 [i_1 - 1] [i_1 - 4])) ? (((/* implicit */int) arr_23 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) var_6))))));
                var_27 ^= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_43 [10LL] [(unsigned short)7]))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_48 [(short)6] [i_1] [i_13] = ((((/* implicit */_Bool) 161509128)) || (((/* implicit */_Bool) 161509132)));
                var_28 |= ((var_13) | (((/* implicit */int) var_4)));
            }
            var_29 = ((/* implicit */int) arr_38 [2] [2] [i_1 + 1] [12U] [16ULL]);
        }
    }
}
