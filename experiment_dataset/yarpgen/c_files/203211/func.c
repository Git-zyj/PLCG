/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203211
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_17))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = max((max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), ((+(11568708975778403323ULL))))), (((/* implicit */unsigned long long int) ((long long int) 6878035097931148292ULL))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_1 + 1] [i_1 + 1]);
                    arr_11 [i_1] [i_1 + 1] [i_2 + 1] = ((/* implicit */_Bool) max((((arr_2 [i_1 + 2]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_2 [i_0]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 2; i_3 < 17; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                {
                    arr_16 [3LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 - 2] [(_Bool)1])) ? ((+(((/* implicit */int) var_18)))) : (((/* implicit */int) arr_3 [i_3 + 1] [i_3 + 2]))))) ? ((-(((((/* implicit */_Bool) arr_6 [16LL] [(signed char)18])) ? (arr_13 [i_4]) : (((/* implicit */int) var_0)))))) : ((~(((/* implicit */int) var_9))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_0] [i_0] [i_0])), (max((((/* implicit */int) (unsigned char)63)), ((-2147483647 - 1))))))) ? (min((((/* implicit */int) var_5)), (((((/* implicit */int) (unsigned char)236)) % (arr_13 [(signed char)15]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16981)) ? (11568708975778403301ULL) : (10141239611518055748ULL)))) ? (((/* implicit */int) arr_9 [(unsigned short)7] [i_3 + 1] [(unsigned short)7] [i_6])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6] [i_3] [i_4] [i_5])))))))));
                            var_22 += ((/* implicit */unsigned short) var_11);
                        }
                        var_23 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-286184024)))) ? ((+(((/* implicit */int) var_10)))) : (((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)209)))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)209))))));
                    }
                    var_24 = ((/* implicit */long long int) ((6878035097931148292ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165)))));
                    arr_22 [i_4] [(signed char)16] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_16))) * (((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_2)))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)-16)))) ^ ((~(((/* implicit */int) (unsigned short)19774))))))) < (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) | (1449552348897108274ULL)))) ? (11031775232417785834ULL) : (((/* implicit */unsigned long long int) ((var_15) ^ (((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) + (((/* implicit */int) ((short) var_11)))));
        arr_25 [i_7] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11031775232417785834ULL)) ? (arr_13 [i_7]) : (((/* implicit */int) arr_8 [i_7] [i_7] [i_7]))))) || (((/* implicit */_Bool) arr_8 [i_7] [i_7] [i_7]))))), ((-(((/* implicit */int) arr_8 [i_7] [i_7] [i_7]))))));
        arr_26 [i_7] [i_7] = ((/* implicit */unsigned short) var_14);
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_9 = 1; i_9 < 17; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                for (long long int i_11 = 3; i_11 < 18; i_11 += 1) 
                {
                    {
                        arr_36 [i_8] [i_8] [i_8] [i_11 - 2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) var_6)))))), (arr_7 [i_8] [i_8])));
                        var_27 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */short) arr_6 [i_8] [i_9])), (arr_27 [i_8])))) ? (max((var_16), (((/* implicit */unsigned long long int) (unsigned short)65529)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_6))))))), (((/* implicit */unsigned long long int) ((((var_12) ? (((/* implicit */int) arr_1 [(unsigned char)5])) : (((/* implicit */int) var_5)))) | (((/* implicit */int) arr_3 [(unsigned short)12] [(unsigned short)12])))))));
                        var_28 = ((/* implicit */signed char) max((min((((/* implicit */long long int) ((arr_29 [(unsigned char)17] [(signed char)5]) > (((/* implicit */int) arr_0 [i_10]))))), (((((/* implicit */_Bool) arr_35 [i_8] [i_8] [(unsigned short)3] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [(unsigned short)14] [(unsigned short)14] [(_Bool)1]))) : (arr_24 [i_8]))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_15 [i_9] [i_10] [i_11])), (max(((unsigned short)54716), (((/* implicit */unsigned short) arr_5 [i_8])))))))));
                    }
                } 
            } 
            arr_37 [i_8] [i_8] = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)106));
        }
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_8])) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)209)) % (((/* implicit */int) (signed char)-43))))))))));
    }
    var_30 = ((_Bool) var_9);
}
