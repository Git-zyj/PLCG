/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198213
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_20 = ((_Bool) var_6);
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) arr_12 [(short)8] [i_3] [i_2] [i_1 - 1] [i_0]);
                            arr_13 [i_3 - 1] [i_2] [i_0] [i_0] = ((/* implicit */int) arr_6 [i_1 + 1]);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_16 [i_5] [i_3 - 2] [i_1 - 2] [i_2] [i_1 - 2] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) (signed char)-126)))))));
                            var_22 = ((/* implicit */short) var_9);
                            arr_17 [i_5] [i_3] [i_0] [i_2] [(short)14] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_17))));
                        }
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            arr_22 [i_6] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)49))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1] [i_3 + 1] [i_1] [(unsigned short)9] [i_1 - 1] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_6] [i_3 + 1] [i_3] [i_0] [i_1 - 2] [i_0]))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            var_24 -= ((/* implicit */unsigned int) var_6);
                            arr_25 [(unsigned short)2] [(unsigned short)2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((arr_12 [(unsigned short)9] [i_3 + 1] [i_2] [i_2] [i_7]) >= (((/* implicit */int) arr_21 [i_3 - 3] [i_3 - 1] [i_3 + 2] [i_3 + 1]))));
                        }
                        var_25 = var_3;
                    }
                    for (long long int i_8 = 2; i_8 < 13; i_8 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_16))))));
                        var_27 -= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_1] [i_0] [i_8] [i_8])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1 - 1])) * (((/* implicit */int) var_17))))) : (arr_20 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_8 - 2] [i_8 + 1] [i_8])))) + (((((/* implicit */_Bool) ((arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_8 - 1]) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-116)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) | (-3389127818510143059LL)))) : (((((/* implicit */unsigned long long int) -1226207668315210369LL)) ^ (var_4))))));
                    }
                    var_28 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (signed char)127)))), (((/* implicit */int) (unsigned char)97))));
                    arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [(_Bool)1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_0] [i_1 - 2] [i_1] [i_0]))))) : (var_1))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (((long long int) (signed char)54))))));
                    var_29 = ((/* implicit */int) max((min((((/* implicit */long long int) (-(arr_18 [(short)11] [i_1] [i_1] [10ULL] [i_1] [(_Bool)1] [i_0])))), (((var_9) % (((/* implicit */long long int) arr_3 [i_2])))))), (((/* implicit */long long int) ((arr_18 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 2]) * (arr_18 [i_1] [i_1 - 2] [i_1 - 1] [i_1 + 1] [(short)9] [i_1 - 1] [i_1 - 2]))))));
                    arr_29 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((3041176774U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126)))));
                }
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-109)) ? (7ULL) : (((/* implicit */unsigned long long int) 8160U))))) ? (((((/* implicit */int) var_19)) + (((/* implicit */int) var_19)))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_9] [i_0])))))));
                    var_31 = var_0;
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_18)) - (19855)))))) || (((/* implicit */_Bool) max((arr_5 [i_0] [i_1 + 1] [i_1 - 2]), (((/* implicit */short) arr_4 [i_1 + 1])))))));
                    arr_32 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) ((-1009792149) < (((/* implicit */int) var_8)))))) == (var_6))) ? (((unsigned long long int) arr_20 [i_0] [i_1 - 2] [i_0] [(unsigned short)13] [i_9] [(unsigned short)13])) : (((/* implicit */unsigned long long int) var_12))));
                }
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    arr_35 [i_0] [i_0] [i_10 - 1] [i_10 - 1] = ((/* implicit */unsigned long long int) var_11);
                    arr_36 [i_10 - 1] [(unsigned short)11] [(short)2] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) var_2))))) || (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_5 [(unsigned char)8] [i_1] [(unsigned char)8])))))) ? (((/* implicit */int) arr_8 [11] [i_0] [i_1] [i_10])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [(signed char)8] [(signed char)8] [i_1] [i_1] [i_1 - 2] [i_1 - 2] [i_10 - 1])) && (((/* implicit */_Bool) arr_18 [i_10 - 1] [i_10 - 1] [i_10] [i_1] [i_1 + 1] [i_1] [i_0])))))));
                    arr_37 [(unsigned char)14] [0U] [i_10] |= ((/* implicit */unsigned int) arr_2 [i_0]);
                    arr_38 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned short) var_3);
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned char) var_18);
}
