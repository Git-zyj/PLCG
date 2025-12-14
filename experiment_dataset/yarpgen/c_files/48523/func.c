/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48523
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
    var_15 &= ((/* implicit */_Bool) var_1);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((((/* implicit */_Bool) (signed char)-124)) ? (13554262589808193240ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1920))));
        arr_4 [9U] [i_0] = var_4;
        var_17 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((4892481483901358375ULL) - (13554262589808193228ULL))) + (((unsigned long long int) arr_3 [i_0] [i_0]))))) ? (((unsigned long long int) 4892481483901358376ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 68719476728ULL))))));
    }
    for (unsigned char i_1 = 2; i_1 < 22; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 13389045485164789757ULL)) ? (((((/* implicit */_Bool) ((unsigned short) (unsigned char)118))) ? (((/* implicit */long long int) ((int) 71916856549572608LL))) : (((arr_5 [i_1 - 1]) ? (16777200LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 2]))))))) : (((long long int) -71916856549572609LL))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 - 1] [i_1 - 1])) ? (arr_8 [13ULL] [i_1 - 2]) : (((/* implicit */unsigned long long int) 2147483647)))))));
            arr_9 [i_1] [i_1 - 2] [i_1 - 2] = ((/* implicit */unsigned char) -2896529137765859800LL);
            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) var_14);
        }
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_9))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    {
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) -8237089910674886296LL)) ? (4892481483901358376ULL) : (16777200ULL)));
                        var_22 *= ((/* implicit */unsigned char) arr_15 [(_Bool)1] [i_3] [i_4] [(unsigned char)14]);
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_8)) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 2]))) : (((((/* implicit */_Bool) 7019366248569772930ULL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)137)) ? (13554262589808193251ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_4] [i_4]))))))) : (((/* implicit */int) ((short) 16062219953140853584ULL)))));
                        arr_18 [i_1 + 1] [i_3] = ((/* implicit */unsigned long long int) (~(arr_12 [i_1])));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                arr_22 [i_6] [i_3] [i_6] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) (!(arr_5 [i_1 - 1]))));
                var_24 *= ((/* implicit */unsigned short) ((((/* implicit */int) (((+(var_13))) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))) > (((((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) == (var_6)))) << (((((unsigned int) (short)-23222)) - (4294944062U)))))));
                var_25 &= ((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_1))))))) >= (((((/* implicit */_Bool) arr_19 [i_1 + 1] [i_1 + 1] [i_6])) ? (((/* implicit */unsigned long long int) -9164434135442763014LL)) : (var_6))));
                var_26 = (~(((/* implicit */int) var_10)));
            }
        }
        /* vectorizable */
        for (long long int i_7 = 1; i_7 < 21; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_8 = 4; i_8 < 20; i_8 += 3) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_30 [i_1] [i_1] [i_7] [i_8 - 4] [i_9 - 1] [i_9 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) (unsigned char)197)))));
                        var_27 = ((/* implicit */short) ((unsigned int) ((long long int) var_14)));
                    }
                } 
            } 
            var_28 ^= ((/* implicit */unsigned char) ((int) 4503565267632128ULL));
            /* LoopSeq 3 */
            for (long long int i_10 = 3; i_10 < 22; i_10 += 1) 
            {
                arr_33 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)9)) ? (((((/* implicit */_Bool) (unsigned char)74)) ? (arr_23 [i_7] [i_7 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)14730))))));
                var_29 = 1344395954420860879ULL;
                arr_34 [i_1] [i_7] [6ULL] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) 5057698588544761858ULL)) || ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_19 [i_1 - 2] [i_7] [i_10 + 1])))))) : (((long long int) arr_24 [i_1] [(short)22]))));
                var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_1 - 1] [i_1 - 1] [20LL])) ? (((/* implicit */unsigned long long int) arr_7 [i_10])) : (((((/* implicit */_Bool) (unsigned short)5)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_1 + 1] [i_7] [i_10 - 3])))))));
            }
            for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
            {
                var_31 = ((/* implicit */unsigned int) (((_Bool)1) ? (arr_26 [i_7] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                arr_37 [i_11] [4ULL] [i_7] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_31 [i_1 - 2] [i_7 + 1] [i_11]))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((unsigned long long int) arr_40 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 1]))));
                var_33 = var_9;
                /* LoopSeq 3 */
                for (int i_13 = 1; i_13 < 21; i_13 += 4) 
                {
                    arr_43 [i_1] [i_7] [i_7] [i_13] [i_13 + 2] = ((/* implicit */long long int) ((17102348119288690739ULL) < (16777186ULL)));
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_31 [i_7 - 1] [i_13 - 1] [i_13 - 1]))));
                    var_35 = ((/* implicit */unsigned char) ((_Bool) ((int) (_Bool)1)));
                }
                for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 1) 
                {
                    var_36 = ((((((/* implicit */_Bool) 18446744073692774410ULL)) ? (arr_41 [i_1 - 1] [i_1 - 1] [i_7] [i_7] [i_12] [i_14]) : (((/* implicit */unsigned long long int) var_13)))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2056130756684219991LL)) ? (((/* implicit */int) arr_21 [i_7] [i_7])) : (((/* implicit */int) var_9))))));
                    arr_46 [i_7] = ((/* implicit */unsigned char) (((_Bool)0) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) var_11)))))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_49 [i_1] [3] [i_7] [i_1 - 2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (((var_4) + (((/* implicit */unsigned long long int) 71916856549572617LL))))));
                    var_37 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [(_Bool)1] [i_7 + 1] [i_1 - 1])) ? (4503597479886848ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197)))));
                    var_38 = ((arr_8 [i_1 + 1] [i_7 + 2]) / (((/* implicit */unsigned long long int) arr_12 [i_15])));
                }
                /* LoopNest 2 */
                for (short i_16 = 3; i_16 < 22; i_16 += 4) 
                {
                    for (unsigned long long int i_17 = 1; i_17 < 20; i_17 += 3) 
                    {
                        {
                            arr_56 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)15))) ? (((((/* implicit */_Bool) 391206508U)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) ((short) var_6)))));
                            var_39 = var_8;
                        }
                    } 
                } 
            }
            arr_57 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((arr_13 [i_7 + 1] [i_7 - 1] [i_7] [i_7]) && (((/* implicit */_Bool) arr_52 [i_7 - 1] [i_7] [i_7]))));
        }
        arr_58 [i_1] = ((/* implicit */unsigned int) (+((-(((((/* implicit */_Bool) 567351295)) ? (((/* implicit */int) (unsigned char)192)) : (513108486)))))));
        arr_59 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_53 [i_1] [i_1] [i_1 + 1] [(signed char)19] [i_1 - 1]))) ? (((/* implicit */unsigned int) var_2)) : (4294967295U)));
        arr_60 [i_1] = ((int) (-(((((/* implicit */_Bool) -1316780982)) ? (7591080010521777011ULL) : (((/* implicit */unsigned long long int) 4593671619917905920LL))))));
    }
    var_40 = ((/* implicit */unsigned long long int) var_11);
    var_41 = ((/* implicit */unsigned char) var_3);
}
