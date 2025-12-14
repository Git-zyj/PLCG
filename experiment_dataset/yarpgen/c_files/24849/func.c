/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24849
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 -= ((/* implicit */short) (_Bool)1);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_13 = ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33540)) ? (((/* implicit */int) (unsigned char)121)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))));
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))));
        }
        /* LoopNest 3 */
        for (long long int i_2 = 3; i_2 < 20; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    {
                        arr_15 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(arr_14 [i_0])))), (((((/* implicit */_Bool) var_10)) ? (-2399505953371886579LL) : (((/* implicit */long long int) 1384046664))))))) : (14915602640471174350ULL)));
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_3))));
                        arr_16 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)37996)) ? (((/* implicit */int) (short)9448)) : (-666360008))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 4) 
    {
        /* LoopSeq 4 */
        for (short i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            arr_22 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_8)) : (arr_14 [i_6])))) || (arr_4 [i_5 + 1]))))));
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)199))))) ? (min((((/* implicit */long long int) arr_12 [i_5] [i_5 - 1] [i_6] [8ULL])), (var_7))) : ((-(var_7)))))))))));
        }
        for (short i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((((/* implicit */_Bool) max((var_8), (155734573)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_4))) : (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10))))))), (var_2))))));
            arr_25 [i_5 - 1] [i_5] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_3))))));
            arr_26 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((-(var_7))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7])))))) && (((/* implicit */_Bool) (~((-(2147483625))))))));
        }
        for (short i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_9 = 1; i_9 < 15; i_9 += 4) /* same iter space */
            {
                arr_32 [i_5] [13LL] [i_5] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (var_7))))))));
                var_18 += ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_9))))))))));
            }
            for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 4) /* same iter space */
            {
                arr_37 [i_5] [i_8] [(unsigned char)7] [i_8] = ((/* implicit */unsigned short) var_5);
                var_19 |= ((/* implicit */_Bool) 1930573713);
                /* LoopNest 2 */
                for (signed char i_11 = 0; i_11 < 19; i_11 += 4) 
                {
                    for (unsigned char i_12 = 3; i_12 < 15; i_12 += 4) 
                    {
                        {
                            arr_44 [i_5 + 1] [(signed char)18] [i_5] [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_11), (((/* implicit */unsigned long long int) arr_23 [i_5 - 1]))))) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) max((arr_23 [i_5 - 1]), (arr_23 [i_5 - 1]))))));
                            arr_45 [i_5] [i_8] [i_5] [i_8] [i_10 + 4] [18] [3ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_40 [i_12] [i_12] [i_12] [i_5] [i_12] [i_12] [i_12]), (((/* implicit */int) var_0))))) ? (min((((/* implicit */long long int) arr_40 [i_12] [i_12] [i_12] [i_5] [16U] [i_12] [i_12])), (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_40 [i_12] [i_12] [i_12 + 3] [i_5] [i_5] [i_12 + 1] [i_12 + 4]) : (arr_40 [i_12 - 1] [i_12 + 4] [i_12 + 4] [i_5] [i_12] [11ULL] [i_12 - 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 2; i_14 < 17; i_14 += 4) 
                    {
                        {
                            arr_51 [12ULL] [i_5] [i_8] [i_10 + 2] [i_13] [i_13] [i_14 - 1] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) arr_40 [i_10 - 1] [i_10 - 1] [i_5 + 1] [i_5] [(unsigned char)16] [i_14 + 1] [i_5 - 1])), (((((/* implicit */_Bool) var_8)) ? (var_2) : (869385688335391114ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_13])) ? (((/* implicit */int) arr_47 [i_5 + 1] [i_5 + 1] [i_10 + 2] [i_13] [i_14 - 1] [6U])) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)115)), ((short)69)))))))));
                            arr_52 [i_5 - 1] [i_5] [i_10 + 4] [i_13] [i_14 + 1] = ((/* implicit */int) max((max((var_4), (var_1))), (((((/* implicit */_Bool) var_3)) ? (arr_49 [i_10 - 1]) : (((/* implicit */unsigned long long int) -1384046650))))));
                            var_20 = ((/* implicit */int) var_11);
                        }
                    } 
                } 
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4))))))));
                arr_55 [(unsigned short)2] [(unsigned short)2] [i_15] |= max(((-(((/* implicit */int) (short)-13794)))), (((/* implicit */int) arr_30 [i_8])));
                arr_56 [i_15] [i_5] [i_5] [(_Bool)1] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)171))));
                var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((((/* implicit */int) arr_20 [i_8] [i_8])) == (((/* implicit */int) (short)9448)))), ((!(((/* implicit */_Bool) var_5)))))))));
            }
            arr_57 [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 7858772878608143190LL)))))));
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-9438)) ? (((/* implicit */unsigned long long int) 1034183510U)) : (((14956858175373921558ULL) + (((/* implicit */unsigned long long int) -1696630243))))));
        }
        /* vectorizable */
        for (unsigned char i_16 = 0; i_16 < 19; i_16 += 4) 
        {
            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_5 + 1] [i_5 - 1] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_11)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1384046668))))) : (((/* implicit */int) var_0))));
            arr_61 [i_5] [i_16] = ((/* implicit */unsigned long long int) arr_59 [i_5] [i_5]);
            arr_62 [i_5] [i_5 - 1] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
            arr_63 [i_5 + 1] [i_16] [i_5] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) (short)8429)))) ^ (var_6)));
        }
        arr_64 [i_5] [i_5] = ((/* implicit */long long int) var_3);
        arr_65 [i_5] = ((/* implicit */long long int) arr_39 [i_5 + 1] [i_5] [i_5 - 1] [i_5]);
        /* LoopSeq 2 */
        for (unsigned int i_17 = 1; i_17 < 18; i_17 += 2) 
        {
            var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((unsigned short) var_10)))));
            var_26 &= ((/* implicit */long long int) (unsigned char)171);
            /* LoopNest 3 */
            for (long long int i_18 = 1; i_18 < 17; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 19; i_19 += 2) 
                {
                    for (long long int i_20 = 1; i_20 < 16; i_20 += 3) 
                    {
                        {
                            arr_77 [i_5 - 1] [i_5] [i_18] [i_18] [i_19] [i_19] [i_20] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)12877))) < (((((/* implicit */_Bool) 1672107392U)) ? (601260770U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                            var_27 = ((((/* implicit */_Bool) max((max((1672107392U), (((/* implicit */unsigned int) var_0)))), (((((/* implicit */_Bool) var_3)) ? (arr_36 [i_5 + 1]) : (((/* implicit */unsigned int) var_8))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_11)))) ? (((/* implicit */unsigned long long int) (~(var_6)))) : (max((((/* implicit */unsigned long long int) (unsigned char)255)), (9367076034309241700ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))));
                            var_28 = ((/* implicit */long long int) min((var_28), (1574611497656658099LL)));
                            arr_78 [2LL] [i_17] [i_5] [i_17] [i_17] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 9079668039400309919ULL)) ? (8846682115599775566ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12629)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_21 = 0; i_21 < 19; i_21 += 1) 
        {
            arr_81 [i_5] = ((/* implicit */signed char) var_1);
            arr_82 [i_5] = ((/* implicit */unsigned short) var_4);
        }
        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), (var_4))))));
    }
    var_30 = ((/* implicit */short) 9600061958109776052ULL);
    var_31 = ((/* implicit */short) var_1);
    var_32 = ((/* implicit */unsigned long long int) var_3);
}
