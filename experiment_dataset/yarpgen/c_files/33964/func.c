/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33964
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_3] [i_1] [i_1]))));
                        arr_13 [i_3] [i_1] [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((((/* implicit */_Bool) -1893735199)) && (((/* implicit */_Bool) arr_0 [i_0])))) || (((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 + 3]))))), (((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (arr_3 [i_1]))))));
                        /* LoopSeq 3 */
                        for (long long int i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            arr_16 [i_1] [i_4] = ((/* implicit */unsigned short) ((int) arr_12 [(short)16] [i_2] [(short)16] [i_0]));
                            var_11 *= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)7))));
                            arr_17 [i_1] [i_3] [19ULL] [i_1] [i_1] = var_8;
                        }
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            var_12 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))) | (((((/* implicit */_Bool) -1945442972)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) 678862847)))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_18 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2])), (-1945442972))))));
                            var_13 = ((/* implicit */unsigned char) -713166984);
                            var_14 = ((/* implicit */long long int) ((((/* implicit */int) max((var_1), (var_9)))) < (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_19 [i_1] [i_1] [i_1 - 2] [2ULL] [i_1] [i_1 + 1] [2ULL])))))));
                        }
                        for (signed char i_6 = 1; i_6 < 19; i_6 += 4) 
                        {
                            arr_23 [i_1] [i_1] [(signed char)11] [i_2] [i_3] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_6 + 1] [(signed char)18])) ? (arr_21 [i_1] [i_1] [i_1] [i_1 - 3] [i_6 - 1] [i_6 - 1] [i_6]) : (arr_21 [i_0] [i_0] [i_1] [i_1 - 3] [i_0] [i_6 + 1] [i_6]))) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) var_4)))), (((/* implicit */int) ((signed char) (unsigned char)18)))))) ? (((/* implicit */int) ((short) arr_4 [i_1 - 2] [i_1 - 2] [i_6 + 1]))) : (((int) arr_1 [i_6 - 1] [i_1 + 1])))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (((703992967372598371ULL) >> (((((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_2] [i_2] [i_1] [i_6 + 1] [(signed char)8])) ? (var_6) : (((/* implicit */long long int) 1893735200)))) + (1576067013691199398LL)))))));
                            var_17 = ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) (short)32767)))));
                        }
                        arr_24 [i_1] [i_1] [17LL] [(short)8] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_20 [8] [i_0] [8] [(unsigned char)15] [i_1] [i_2] [i_3])))) ? (((/* implicit */int) ((short) 713166976))) : (((((/* implicit */_Bool) -1527510130)) ? (min((((/* implicit */int) (signed char)-79)), (545469624))) : (((((/* implicit */_Bool) 545469624)) ? (((/* implicit */int) (unsigned char)98)) : (1945442967)))))));
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) min((arr_12 [i_0] [i_1] [i_2] [i_3]), (arr_12 [i_0] [(unsigned char)13] [i_2] [i_3])));
                    }
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) -1527510130))) < (max((((/* implicit */int) arr_1 [i_0] [i_1 + 2])), (arr_12 [i_7] [i_2] [(unsigned short)10] [(signed char)5])))))), (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_1 + 2])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)253))))) : (min((var_5), (((/* implicit */unsigned long long int) 4294967295U))))))));
                        var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_26 [i_0] [i_1 + 1] [i_1 + 1] [i_7] [i_7])) < (((/* implicit */int) arr_26 [(unsigned char)12] [i_1 + 1] [i_2] [i_7] [i_1 - 3])))))));
                        arr_28 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((4294967286U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6)))));
                        arr_29 [i_7] [6ULL] [i_0] [i_1] [(unsigned char)12] &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((long long int) (unsigned char)242)) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) var_1)))))))), (min((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_5))), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_0] [i_1]))))));
                        var_20 = ((/* implicit */int) var_3);
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                    {
                        var_21 ^= ((/* implicit */unsigned long long int) var_2);
                        /* LoopSeq 4 */
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */int) arr_6 [i_1] [i_1]);
                            arr_34 [6ULL] [i_8] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */int) var_7)) : (((int) var_9))));
                        }
                        for (short i_10 = 2; i_10 < 17; i_10 += 3) 
                        {
                            arr_37 [i_0] [(unsigned char)17] [i_1] [i_2] [i_8] [i_10 + 2] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (var_8))) ? (((/* implicit */long long int) arr_2 [i_1 - 2] [i_10 - 2])) : (((long long int) arr_2 [i_1 + 4] [i_10 - 2]))));
                            var_23 = ((/* implicit */unsigned int) ((long long int) var_8));
                            arr_38 [i_1] [i_1 + 1] [(_Bool)1] [i_1 + 1] [i_1 + 1] [i_1] [(signed char)1] = ((/* implicit */_Bool) min(((((~(arr_35 [i_0] [(_Bool)1] [i_1] [(short)7] [i_10]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)52788)))))), (max((((/* implicit */unsigned long long int) max((var_6), (var_8)))), (((unsigned long long int) arr_27 [16] [i_1] [i_1]))))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) (signed char)96);
                            var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_1 - 3] [(signed char)1] [i_1] [i_1 + 1] [i_1] [7U] [i_1])) < (((/* implicit */int) arr_19 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1])))))) >= (max((((/* implicit */unsigned long long int) ((2U) >= (((/* implicit */unsigned int) -1484038446))))), (max((var_5), (((/* implicit */unsigned long long int) 157592438U))))))));
                        }
                        for (unsigned char i_12 = 1; i_12 < 18; i_12 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned short) max((((long long int) -5004239957048021788LL)), (((/* implicit */long long int) ((max((23ULL), (((/* implicit */unsigned long long int) (signed char)-81)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1) >= (((/* implicit */int) var_7)))))))))));
                            arr_44 [i_1] [i_1] [13ULL] [i_2] [i_8] [i_8] [(signed char)10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) >= (707218640479859130ULL)));
                            var_27 ^= ((/* implicit */signed char) ((long long int) (unsigned char)200));
                        }
                    }
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                    {
                        arr_47 [(_Bool)1] [(unsigned short)14] [i_2] [i_2] [i_13] |= ((/* implicit */short) min(((-(arr_40 [i_0] [(signed char)0] [i_0] [i_2] [i_13]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) (+(765517438)))) : ((-(var_8))))))));
                        arr_48 [i_1] [(_Bool)1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_45 [i_0] [i_0]))));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */signed char) min((((/* implicit */long long int) var_2)), (var_8)));
    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)1)))))));
    var_30 = ((/* implicit */long long int) 15177091558339696109ULL);
}
