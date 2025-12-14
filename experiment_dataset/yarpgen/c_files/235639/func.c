/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235639
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        arr_11 [18] [i_2] [i_1] [18] &= var_0;
                        arr_12 [i_0] [(short)1] [3] [i_3] [(unsigned char)6] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 5279943498280516600LL)) ? (var_3) : (((/* implicit */unsigned int) -1))));
                        arr_13 [i_0] [i_0] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1 - 3])) ^ (((/* implicit */int) arr_5 [i_1 - 1]))));
                        var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) arr_10 [i_0]))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 3; i_5 < 18; i_5 += 4) 
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_0] [i_5 - 1] [i_2] = ((/* implicit */long long int) ((-109675580) >= (((/* implicit */int) ((((/* implicit */long long int) -1)) <= (-143110748854094925LL))))));
                            var_11 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_2))) % (3220068168U)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32767))) | (1252336047U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_1))))))))));
                            var_12 = ((143110748854094925LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)16256))));
                        }
                        for (int i_6 = 4; i_6 < 20; i_6 += 1) 
                        {
                            arr_23 [i_0] [i_1] [11ULL] [i_4] [i_4] = ((/* implicit */_Bool) var_5);
                            arr_24 [i_0] [i_2] [i_6 - 2] [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_4)), (var_0)))) ^ (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2])) ? (((/* implicit */unsigned long long int) arr_6 [i_6 - 3] [i_6] [i_6 - 3])) : (arr_3 [i_6 + 1])))));
                        }
                        var_13 -= ((/* implicit */unsigned char) ((15U) != (max((((/* implicit */unsigned int) max((((/* implicit */int) (short)-16257)), (16128)))), (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 1) 
                    {
                        var_14 = ((/* implicit */short) (+((-2147483647 - 1))));
                        /* LoopSeq 2 */
                        for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            arr_31 [i_0] [i_0] [i_2] [i_2] [i_7] [i_8] = ((/* implicit */long long int) -1);
                            arr_32 [i_7] [i_1] [i_1] [15] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_7] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_1 - 1] [i_7 + 1])) : (((/* implicit */int) arr_7 [(short)6] [i_1 - 2] [i_2] [(short)6]))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)9])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) (unsigned short)1)) : ((~(324808464)))));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */int) arr_19 [i_0] [i_2] [i_0] [i_2] [i_2] [i_0] [i_9])) != (((/* implicit */int) var_2)))))));
                            arr_35 [i_0] [i_1 + 1] [i_2] [i_7] [i_9] [i_7] = ((/* implicit */short) (~((~(var_0)))));
                        }
                    }
                    arr_36 [(unsigned char)15] [i_1 - 2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_25 [i_0] [i_1 - 1]), (arr_25 [i_0] [i_2])))) ? (min((((/* implicit */unsigned int) (unsigned char)190)), (var_3))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)32)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        arr_39 [13U] [i_1] [i_1] [i_0] &= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)202))));
                        /* LoopSeq 1 */
                        for (short i_11 = 2; i_11 < 18; i_11 += 1) 
                        {
                            var_17 -= (+(((((/* implicit */_Bool) arr_0 [i_11 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_8))));
                            arr_44 [i_0] [i_1 - 3] [i_1 - 1] [i_0] [i_10] [i_11 - 1] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((-143110748854094917LL), (((/* implicit */long long int) var_3))))))))));
                            var_18 = ((/* implicit */unsigned int) min(((-(((/* implicit */int) (short)16269)))), (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))) - (((/* implicit */int) var_6))))));
                            arr_45 [i_0] [i_1 + 1] [i_2] [i_10] &= ((/* implicit */_Bool) max(((-(3042631248U))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1 - 3] [i_1 - 3]))) - (4294967281U)))));
                        }
                        arr_46 [i_0] [9] [i_1] [i_1] [9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)39597)) ? (24) : (((/* implicit */int) (unsigned char)59))));
                        var_19 = ((/* implicit */unsigned char) arr_18 [i_10] [i_1] [i_1] [i_2] [i_10] [i_0] [(_Bool)1]);
                    }
                }
            } 
        } 
        arr_47 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) * (min((((/* implicit */unsigned int) 11)), (2512440414U)))));
    }
    /* LoopNest 3 */
    for (unsigned char i_12 = 1; i_12 < 10; i_12 += 1) 
    {
        for (short i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7409195422902918429LL)) ? (((/* implicit */int) (unsigned short)49938)) : (25165824)));
                    /* LoopSeq 3 */
                    for (int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) max((arr_17 [(unsigned char)10] [i_14] [14] [14]), (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_8)) : (arr_49 [4LL] [4LL]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_12] [i_15])) && (((/* implicit */_Bool) (short)-7677)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_16 = 0; i_16 < 11; i_16 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) min(((short)-19158), (((/* implicit */short) (unsigned char)149))));
                            arr_60 [i_16] [i_15] [i_14] [i_14] [i_12] [i_12] = ((/* implicit */unsigned int) arr_6 [i_13] [i_13] [i_14]);
                            arr_61 [i_12 - 1] [i_13] [i_13] [i_15] [i_16] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)16257)) == (324808461)))) * ((-(arr_1 [i_15] [i_13])))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_12 + 1]))) & (arr_22 [i_12] [i_12 + 1] [i_12 - 1] [i_13] [i_13]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) min((((/* implicit */long long int) -324808446)), (arr_52 [i_12] [(unsigned short)9]))))))));
                        }
                        for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 1) 
                        {
                            var_23 = ((/* implicit */int) ((var_1) ? (((((/* implicit */_Bool) arr_22 [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_12 - 1])) ? (arr_22 [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12] [i_12 - 1]) : (arr_22 [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_12 - 1]))) : (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) : (arr_22 [i_12 + 1] [i_12 + 1] [(short)13] [i_12 + 1] [i_12 - 1])))));
                            arr_64 [i_14] = ((((/* implicit */int) max((((/* implicit */unsigned char) var_1)), ((unsigned char)255)))) / ((+(((/* implicit */int) (unsigned char)103)))));
                            arr_65 [i_12 + 1] [(unsigned char)0] [i_14] [(unsigned char)8] [i_15] &= var_7;
                        }
                        arr_66 [i_14] [i_14] [i_14] [i_13] [i_14] = ((/* implicit */short) ((int) (((+(var_8))) >> (((((/* implicit */int) ((short) (unsigned char)210))) - (208))))));
                    }
                    for (unsigned char i_18 = 1; i_18 < 8; i_18 += 2) /* same iter space */
                    {
                        arr_71 [i_14] = ((/* implicit */unsigned short) (short)-9108);
                        arr_72 [i_14] [i_13] [i_14] = ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -22761056))))), ((+(var_0)))));
                        var_24 -= ((/* implicit */int) (short)-24414);
                    }
                    for (unsigned char i_19 = 1; i_19 < 8; i_19 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 1) 
                        {
                            arr_77 [i_14] [i_14] [i_19 + 2] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) -1)) != (796668948087040679LL))) ? (((/* implicit */long long int) arr_15 [(short)17] [i_14])) : (-8397595061840188785LL)));
                            arr_78 [(short)8] [0LL] [i_14] [i_19] [0LL] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)38))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_21 = 0; i_21 < 11; i_21 += 1) 
                        {
                            arr_81 [i_14] [i_14] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49952)) ? (((/* implicit */int) (short)-1)) : (arr_34 [i_12] [i_12 - 1] [i_13] [i_13] [i_12] [i_19] [i_21])))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)18)) : (7))))));
                            arr_82 [i_14] [i_14] [8] [i_19] = ((/* implicit */unsigned char) (((!(arr_76 [i_14] [8U] [i_19] [i_21]))) ? (((int) var_8)) : (((/* implicit */int) var_5))));
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            arr_87 [i_12] [i_13] [i_14] [i_13] [i_22] &= ((/* implicit */_Bool) ((int) (-(16760832U))));
                            arr_88 [(short)6] [i_14] [i_14] [i_19 + 2] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((-2065090758), (((/* implicit */int) (short)-19158)))) * (((/* implicit */int) var_1))))) ? (((long long int) min((((/* implicit */long long int) 612919537U)), (arr_83 [i_19 + 1] [i_13] [i_14] [i_14] [i_19] [i_13])))) : (((/* implicit */long long int) (~(4278206468U))))));
                            arr_89 [2] [2] [2LL] [i_13] [i_22] &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)37)) - (-197613910)))), (((((/* implicit */_Bool) 7216333019751043417ULL)) ? (((/* implicit */long long int) -7)) : (arr_22 [i_12] [i_12 + 1] [i_14] [i_19] [i_14])))));
                            arr_90 [i_12 - 1] [i_14] [(unsigned short)0] [i_19] [i_19] [i_22] [i_22] = ((/* implicit */long long int) (short)7676);
                        }
                    }
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((-1256061071) > (((/* implicit */int) (short)30495)))) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)57))))))))));
    var_26 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) ^ (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (short)0))))))) & (max((((/* implicit */int) var_2)), ((~(((/* implicit */int) var_9))))))));
}
