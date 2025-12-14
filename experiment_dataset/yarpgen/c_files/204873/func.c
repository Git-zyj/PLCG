/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204873
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
    var_19 = ((/* implicit */_Bool) var_0);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0] [11ULL]), ((short)24386)))) ? (((/* implicit */unsigned long long int) max((max((var_2), (((/* implicit */unsigned int) 33554424)))), (((/* implicit */unsigned int) var_13))))) : (((((/* implicit */_Bool) ((-9223372036854775806LL) / (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) var_13))))) : (arr_2 [i_0 + 1])))));
        arr_3 [(short)8] [5] = ((signed char) min((((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */short) var_12))))), (((436292865) | (((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((/* implicit */unsigned long long int) arr_4 [i_1 + 1])) : (arr_2 [i_1 + 3]))))));
        /* LoopSeq 3 */
        for (short i_2 = 4; i_2 < 14; i_2 += 2) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)3))) ? (((((/* implicit */_Bool) (short)6144)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_16))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)7679)))))));
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 2])) << ((((+(((/* implicit */int) (unsigned short)35570)))) - (35564))))))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 14; i_4 += 3) 
            {
                for (int i_5 = 1; i_5 < 16; i_5 += 4) 
                {
                    {
                        arr_18 [(_Bool)1] [i_5] [i_5] [i_1] = ((/* implicit */_Bool) ((((arr_9 [i_3 + 4] [i_5 - 1] [i_4 + 3]) + (2147483647))) << ((((+(arr_4 [i_3]))) - (3891864788U)))));
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 + 2] [i_3 + 2] [i_5 + 1]))) - (((((/* implicit */_Bool) arr_12 [i_1])) ? (-9173044592000872682LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                        var_25 &= ((/* implicit */unsigned short) (!((_Bool)0)));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3485605027U)) ? (2538082080U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)86)))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned int) ((_Bool) arr_2 [i_1 + 2]));
            var_28 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) 11727919725092273098ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))) : (var_2))));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (unsigned char)5)) ? (arr_1 [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [(unsigned short)9] [(unsigned short)9] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)254))) != (arr_2 [i_3 + 2])))))));
        }
        for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 2) /* same iter space */
        {
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_12))))) <= (arr_1 [(short)2] [i_1]))))));
            arr_21 [i_1] [8LL] &= ((/* implicit */_Bool) (+(1287020693)));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            for (signed char i_9 = 2; i_9 < 16; i_9 += 2) 
            {
                {
                    var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((var_1) - (((/* implicit */long long int) var_7))))) % (arr_27 [i_7] [i_9 + 1] [i_8 - 1])));
                    var_32 -= ((/* implicit */unsigned char) 2049979438);
                    arr_31 [i_8] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) ((signed char) arr_9 [i_7 - 1] [i_7 - 1] [i_9]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_14)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) arr_20 [i_8] [i_8])) >= (((/* implicit */int) (short)3840)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 4) /* same iter space */
                        {
                            var_34 *= ((/* implicit */int) arr_22 [i_7 + 3]);
                            arr_36 [i_11] [i_9] [(short)2] [i_9] [i_7] &= ((/* implicit */unsigned short) 312372881U);
                        }
                        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 4) /* same iter space */
                        {
                            arr_40 [i_7] [i_8] [i_7] [i_9 + 2] [i_10] [i_8] = ((/* implicit */short) arr_19 [i_9 - 2] [16ULL]);
                            var_35 &= ((((/* implicit */_Bool) ((unsigned int) 3168557974U))) ? (((unsigned int) arr_25 [i_9])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) > (arr_5 [i_7] [i_7]))))));
                        }
                        arr_41 [i_7 + 1] [i_7] [i_8 - 1] [i_8] [i_9] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1152921504606845952ULL)) ? (arr_28 [i_8 - 1] [i_9 + 2]) : (3909781149414377304LL)));
                    }
                }
            } 
        } 
        var_36 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_7] [12LL] [12LL] [i_7])))))));
    }
    var_37 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)3)) > (((((/* implicit */_Bool) (short)1984)) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) (signed char)6))))))) - (((/* implicit */int) var_10))));
    var_38 ^= ((/* implicit */unsigned short) ((min((9006735562329207941ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) << (((var_5) - (15014721473373566590ULL)))));
}
