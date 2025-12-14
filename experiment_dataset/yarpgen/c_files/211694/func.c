/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211694
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
        var_17 = ((/* implicit */unsigned char) arr_1 [(_Bool)0] [i_0]);
        var_18 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [(short)17] [i_0])) ? (((/* implicit */unsigned long long int) -6726797954777231787LL)) : (arr_3 [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
    }
    for (signed char i_1 = 1; i_1 < 17; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            var_19 *= (~(min((((/* implicit */long long int) (signed char)-2)), (9223372036854775807LL))));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_0 [i_2]))))))) ? ((+(((long long int) var_4)))) : (((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_1 + 1])), (-1217398960)))))))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 4) 
        {
            arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((1217398967), (((/* implicit */int) (short)-28210))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_7 [i_1] [i_1 - 1] [i_3 - 2]), (arr_7 [i_3] [i_1 + 1] [i_3 + 1]))))) : (max((((/* implicit */unsigned long long int) arr_7 [(signed char)11] [i_1 + 1] [i_3 + 1])), (arr_8 [i_1 + 1])))));
            var_21 = ((/* implicit */long long int) arr_7 [i_3 - 2] [i_1 + 1] [i_1]);
            arr_13 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) ((long long int) 1217398959))), (10098684527905525618ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(8348059545804025998ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)24707), ((short)-28189))))) : (((((/* implicit */_Bool) var_2)) ? (230566246U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))))))))));
            var_22 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)123)), (1080863910568919040LL)))), (arr_8 [i_3 - 1]))), (((/* implicit */unsigned long long int) (~(var_15))))));
        }
        for (unsigned long long int i_4 = 3; i_4 < 16; i_4 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [(signed char)3] [i_4 - 2] [i_5]))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25249)) || (((/* implicit */_Bool) (unsigned short)35877))));
                        arr_23 [i_4] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) ((9223372036854775807LL) << (((((/* implicit */int) (unsigned char)62)) - (62)))))) ? (((/* implicit */unsigned long long int) var_11)) : (14467388701191794169ULL))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        var_25 ^= ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_24 [i_6] [i_1] [(_Bool)1]), (((/* implicit */unsigned short) var_12))))) ? (min((8348059545804025998ULL), (((/* implicit */unsigned long long int) 1217398959)))) : (10098684527905525615ULL))) < (max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (max((arr_26 [i_1] [i_4] [i_4] [i_5] [i_5] [i_6] [i_5]), (((/* implicit */unsigned long long int) var_1))))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned short)29658), (((/* implicit */unsigned short) arr_21 [i_4]))))) ? (2198754820096LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                        var_27 = ((/* implicit */unsigned char) (signed char)-17);
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_16 [i_1] [(unsigned char)11] [i_6])) ? (((/* implicit */long long int) var_0)) : (var_1))), (((/* implicit */long long int) ((unsigned char) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1 - 1]))) : (max((((/* implicit */unsigned long long int) (short)-28206)), (arr_26 [i_1] [i_1] [i_1] [i_4 - 1] [i_1] [i_4 - 2] [i_8])))));
                    }
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)219)) ? (9223372036854775805LL) : (((/* implicit */long long int) ((678627982U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1 - 1] [i_4 - 1]))))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */unsigned short) arr_4 [i_4] [(unsigned char)12]);
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */int) (signed char)114)), (var_7))), (((/* implicit */int) min((((/* implicit */short) arr_7 [i_4] [i_4] [i_5])), ((short)-28189))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) max((var_12), (((/* implicit */short) arr_9 [i_5]))))), (arr_24 [(unsigned char)6] [i_4 - 2] [i_1 - 1])))) : (((/* implicit */int) arr_6 [i_9])))))));
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        arr_31 [i_1 - 1] [i_1 - 1] [(unsigned short)3] [i_5] [i_4] [i_10] = ((/* implicit */unsigned short) ((short) ((long long int) ((((/* implicit */_Bool) (unsigned char)14)) ? (1117696996768762001ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned short)6] [i_5])))))));
                        var_32 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)6)), (2787192831353865480ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)243), (((/* implicit */unsigned char) (_Bool)1)))))) : (max((var_8), (((/* implicit */unsigned int) (unsigned short)37836))))))), (((((/* implicit */_Bool) ((arr_3 [i_1] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37856)))))) ? (max((15659551242355686146ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)37836)), (-2198754820097LL))))))));
                    }
                    arr_32 [10] [i_4] [i_5] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) min((arr_21 [i_4]), (arr_21 [i_4]))))));
                }
                arr_33 [i_4] [i_4] [(unsigned char)15] [1LL] = (~(((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) arr_16 [i_1] [i_4 - 3] [i_5])), (2198754820096LL))))));
            }
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 18; i_11 += 3) 
            {
                for (short i_12 = 0; i_12 < 18; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 18; i_13 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) 469762048U)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned char)194))));
                            var_34 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((unsigned int) (unsigned short)65535)) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219)))))) + (15659551242355686136ULL)));
                            arr_44 [i_1] [i_1] [i_1] [i_4] [i_12] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2198754820103LL)) ? (2147483647) : (var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28210))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1 - 1] [i_12]))))) ? (arr_8 [i_4 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_1 - 1]))))));
                            arr_45 [i_1] [i_4] [i_11] [i_12] [i_13] = ((/* implicit */unsigned long long int) arr_4 [i_1 - 1] [i_1 - 1]);
                        }
                    } 
                } 
            } 
        }
        var_35 = ((/* implicit */int) (short)-26689);
    }
    var_36 = ((/* implicit */signed char) ((unsigned short) min((var_1), (min((((/* implicit */long long int) var_8)), (var_6))))));
}
