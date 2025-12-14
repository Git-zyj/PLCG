/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240948
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)89))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)64)) <= (var_10)))) : (((/* implicit */int) var_9))))) ? (var_2) : (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)89))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) arr_0 [i_0 - 1]);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_15 *= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned short)12288))));
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 17; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [2U]))) : (arr_7 [i_2] [i_1])));
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((arr_8 [i_0] [i_0 - 1] [i_1] [i_3]) ? (((/* implicit */unsigned long long int) var_11)) : (arr_3 [i_0]))) / (arr_3 [i_1 + 2]))))));
                    }
                } 
            } 
            arr_12 [(unsigned char)15] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)86)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (3801234400U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
        }
        for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
        {
            var_17 -= ((/* implicit */_Bool) ((10716730863081128917ULL) << (((((/* implicit */int) (signed char)-124)) + (179)))));
            var_18 = (+(-6668915132251053679LL));
            arr_16 [18ULL] [i_0 - 2] [i_0 - 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0 - 2]))));
            arr_17 [i_0] [i_4] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_4 - 1] [i_4 - 1]))));
        }
        for (int i_5 = 1; i_5 < 19; i_5 += 4) 
        {
            arr_21 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 493732895U))));
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 4) 
            {
                var_19 = ((/* implicit */unsigned long long int) arr_19 [i_0] [i_5]);
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) var_9))));
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_7 = 2; i_7 < 19; i_7 += 4) 
        {
            for (signed char i_8 = 1; i_8 < 18; i_8 += 4) 
            {
                {
                    var_21 -= ((/* implicit */short) ((long long int) var_12));
                    arr_30 [i_0 + 1] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0 - 2] [i_7 - 1] [i_8 + 1])) ? (((/* implicit */int) arr_14 [i_0 + 1] [i_7 - 1] [i_8 + 1])) : (((/* implicit */int) (signed char)89))));
                    /* LoopSeq 2 */
                    for (int i_9 = 1; i_9 < 17; i_9 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_9 - 1])) ? (((long long int) arr_22 [(unsigned char)12])) : (((/* implicit */long long int) ((/* implicit */int) (short)19261)))));
                        arr_33 [i_8] [i_7] [0LL] = ((/* implicit */unsigned char) 15835213932104623446ULL);
                        arr_34 [i_0] [i_8] [i_8] [i_9 + 2] [18U] [i_9] = ((/* implicit */unsigned long long int) 1158253040U);
                        arr_35 [i_0] [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (4104072199U)));
                    }
                    for (int i_10 = 1; i_10 < 17; i_10 += 4) /* same iter space */
                    {
                        arr_38 [i_8] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 15ULL)) && (((/* implicit */_Bool) var_10)))) ? (arr_37 [i_7 + 1] [i_8 + 1] [i_10 + 2] [i_10] [i_8 + 1] [i_10]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)19270)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))));
                        arr_39 [i_0] [i_0] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)37114)) ? (arr_7 [i_8] [i_8]) : ((+(190895097U)))));
                        /* LoopSeq 2 */
                        for (signed char i_11 = 2; i_11 < 19; i_11 += 4) 
                        {
                            var_23 -= ((/* implicit */int) var_3);
                            var_24 -= ((/* implicit */int) (!(((/* implicit */_Bool) 493732903U))));
                            arr_44 [(_Bool)1] [(_Bool)1] [12LL] [i_8] [12LL] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-4257))));
                            arr_45 [i_0] [18] [(short)7] [i_8] [i_11] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-108)))))));
                        }
                        for (long long int i_12 = 1; i_12 < 17; i_12 += 2) 
                        {
                            var_25 *= 359579493U;
                            arr_49 [i_8] [i_12] [18ULL] [i_10 + 2] [(unsigned char)5] [(unsigned char)17] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_7] [i_10 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-89)))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18028))) : (1158253037U)))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [(signed char)3])) ? (35180077121536ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)31484)) ? (1158253040U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172))))))));
                            arr_50 [i_0] [i_8] [i_8] [(short)11] [(short)8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 35180077121536ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_40 [i_8])))) <= (((/* implicit */int) ((_Bool) var_1)))));
                        }
                    }
                }
            } 
        } 
    }
    for (unsigned char i_13 = 1; i_13 < 15; i_13 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_14 = 2; i_14 < 15; i_14 += 2) 
        {
            arr_57 [i_13] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) 0U)) : (6296418903743511725ULL))), (((/* implicit */unsigned long long int) (unsigned short)10986))));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) max((((unsigned long long int) 2557915102U)), (((/* implicit */unsigned long long int) ((unsigned short) 134217720ULL))))))));
        }
        for (unsigned char i_15 = 4; i_15 < 14; i_15 += 2) 
        {
            arr_60 [i_13 + 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (short)19270)) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)31487)), (arr_58 [i_13] [i_15] [i_15])))))))));
            /* LoopNest 2 */
            for (long long int i_16 = 3; i_16 < 14; i_16 += 2) 
            {
                for (unsigned short i_17 = 1; i_17 < 14; i_17 += 4) 
                {
                    {
                        var_28 += (unsigned char)7;
                        var_29 = ((((/* implicit */_Bool) max((((arr_25 [5] [5] [i_16 + 2]) ? (((/* implicit */int) (short)19270)) : (arr_31 [i_17] [(unsigned char)12] [19] [i_16 - 2] [i_13] [i_16]))), ((+(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) ((_Bool) (unsigned short)62416))) : (((/* implicit */int) max((((/* implicit */short) var_12)), ((short)31630)))));
                    }
                } 
            } 
            var_30 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_13 - 1])) ? (var_10) : (((/* implicit */int) (_Bool)1))))), (arr_13 [i_13 - 1] [i_13 + 1])));
        }
        var_31 ^= ((/* implicit */unsigned short) 15102624679676982051ULL);
    }
    var_32 = ((/* implicit */_Bool) (((~(min((((/* implicit */long long int) (short)(-32767 - 1))), ((-9223372036854775807LL - 1LL)))))) % (((/* implicit */long long int) ((/* implicit */int) var_3)))));
}
