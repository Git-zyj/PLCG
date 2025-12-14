/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212304
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
    var_12 = ((/* implicit */long long int) var_6);
    var_13 = ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_10))) <= (-269535630606084902LL))) ? ((+(((/* implicit */int) var_9)))) : ((~(((/* implicit */int) var_4))))))) ? (min((((unsigned int) var_9)), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33170))) == ((~(-2840791145601688173LL))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_14 = 8589934591ULL;
                arr_4 [i_0] = ((/* implicit */_Bool) ((int) (-((+(arr_3 [20ULL]))))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min(((-(((/* implicit */int) var_0)))), ((+((-(((/* implicit */int) arr_2 [(_Bool)1] [i_0])))))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])) ? (arr_10 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1]) : ((+(arr_10 [i_1 + 1] [i_1 + 1] [5LL] [i_1] [i_0])))));
                        var_17 |= ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_2]))))) << (((/* implicit */int) ((arr_9 [i_3] [i_3] [i_0]) > (arr_9 [i_0] [i_0] [i_2]))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
                    {
                        var_18 |= ((/* implicit */unsigned char) arr_8 [i_2] [11] [i_0]);
                        var_19 = ((7086570693658342826LL) <= (((/* implicit */long long int) (-(((/* implicit */int) var_7))))));
                        var_20 = ((((/* implicit */int) arr_2 [i_2] [i_1])) > (min((((((/* implicit */int) var_9)) % (arr_12 [5] [i_4] [i_2] [5] [i_0]))), (arr_12 [i_0] [19ULL] [i_1 - 1] [(short)15] [i_0]))));
                        var_21 = ((/* implicit */short) (-((-(arr_9 [i_0] [i_1 - 2] [i_0])))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_5] [i_5] [i_2])) == (((((/* implicit */_Bool) 7086570693658342826LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (3928058153719059982ULL)))))), (((((/* implicit */_Bool) ((arr_3 [i_0]) >> (((/* implicit */int) (short)2))))) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) ((_Bool) arr_0 [i_0]))))))))));
                        arr_15 [i_0] [i_0] [i_0] = ((max(((~(((/* implicit */int) arr_0 [10LL])))), (arr_12 [i_5] [i_0] [i_1 - 2] [i_0] [i_0]))) == (((((/* implicit */int) arr_13 [i_0])) >> (((((((/* implicit */_Bool) arr_1 [i_0])) ? (7086570693658342851LL) : (7086570693658342836LL))) - (7086570693658342832LL))))));
                    }
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_6)))) ? ((+(arr_6 [i_0] [i_1] [i_2] [i_2]))) : (((/* implicit */unsigned int) (-((~(((/* implicit */int) var_1)))))))));
                    arr_16 [i_0] [i_1] [i_2] &= ((/* implicit */short) ((signed char) ((((/* implicit */int) ((arr_11 [i_0] [i_0] [i_0] [2ULL] [i_2]) < (-6603516742977579253LL)))) * (((((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2])) % (((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned char i_6 = 2; i_6 < 22; i_6 += 1) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) arr_12 [i_6 + 1] [i_6] [i_6] [i_1 - 1] [i_0])) % (arr_9 [i_0] [i_1 - 1] [i_0]))), (((/* implicit */unsigned long long int) arr_12 [i_6 + 1] [20ULL] [i_6] [i_1 - 1] [i_0]))));
                    arr_20 [(_Bool)1] = ((((((/* implicit */int) (short)12704)) | (((/* implicit */int) arr_13 [i_1 - 2])))) > (((/* implicit */int) min((arr_13 [i_1 - 2]), (arr_13 [i_1 - 1])))));
                    /* LoopSeq 4 */
                    for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((arr_13 [i_7]) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) var_4))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16137)) ? (arr_22 [i_0] [i_0] [i_1] [i_6] [i_7]) : (((/* implicit */int) arr_0 [i_1]))))), (arr_7 [i_0] [i_1] [i_6] [i_7]))))));
                        var_26 ^= ((/* implicit */int) ((signed char) (_Bool)1));
                        arr_24 [i_7] [i_6] [i_6] [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) min((arr_23 [i_6 - 2]), (((/* implicit */unsigned short) (short)-12687)))))));
                        arr_25 [4LL] [i_6] = ((/* implicit */long long int) (short)16123);
                        arr_26 [i_7] [i_6] [i_1 - 2] [1ULL] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_12 [i_0] [(_Bool)1] [(signed char)10] [i_6] [i_7]);
                    }
                    for (int i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                        var_28 = ((/* implicit */signed char) min((((/* implicit */int) (short)-22219)), (max(((-(arr_12 [i_8] [i_1] [(unsigned char)22] [(unsigned short)19] [i_8]))), (((/* implicit */int) (short)-12678))))));
                        var_29 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_28 [i_0] [i_1 - 1] [i_0])))) / ((-(arr_21 [i_1] [i_1 - 1] [i_6 - 1])))));
                    }
                    for (unsigned char i_9 = 1; i_9 < 21; i_9 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((var_6) & (((/* implicit */unsigned long long int) 79803021054505438LL)))))))) * (((/* implicit */int) arr_14 [i_0] [i_6] [i_6] [i_0] [i_6]))));
                        arr_32 [i_0] = min((arr_5 [i_0] [i_1] [i_6]), (((/* implicit */signed char) ((((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */short) var_7))))) <= (((arr_21 [i_0] [i_1] [i_6]) ^ (((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 3 */
                        for (short i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            arr_35 [i_0] [i_10] [i_10] [i_9] [(unsigned char)1] = ((/* implicit */unsigned long long int) ((arr_33 [i_9 + 2] [i_1 - 1] [i_6 + 1]) < ((~(arr_33 [i_9 + 2] [i_6] [i_6 + 1])))));
                            arr_36 [i_0] [i_0] [i_6] [i_0] [i_10] = ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) var_5)) ? (arr_31 [i_0] [13LL] [i_6 - 2] [i_9] [(unsigned char)16] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_18 [i_6] [i_9])))))))));
                            var_31 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (arr_6 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [21ULL] [21ULL] [10U] [i_10]))) | (3798900792U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)14)) >= (arr_12 [i_0] [i_1 + 1] [i_6 - 2] [4LL] [i_6 - 2])))) <= (((/* implicit */int) (short)23323)))))));
                        }
                        for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_8 [i_0] [i_6] [i_11]))) ? (((arr_39 [i_0] [i_0] [i_6 - 2] [i_0]) / (arr_39 [i_9] [i_9] [i_6 - 2] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_6] [i_6 - 1] [i_9])))));
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) (+(1023)))) ? (arr_7 [i_9 - 1] [i_9 - 1] [i_9 + 2] [i_9]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((arr_22 [i_11] [i_1 - 2] [i_1] [(signed char)4] [i_11]) - (886919146)))))))))))));
                            var_34 = ((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_6 + 1])), (((((/* implicit */int) arr_0 [i_6 - 2])) - (((/* implicit */int) arr_0 [i_6 - 1]))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_43 [i_0] [i_0] [i_6] [i_9] [i_12] = ((/* implicit */_Bool) ((short) arr_34 [i_12] [i_9] [(signed char)21] [(unsigned char)19] [i_1 - 2] [i_0]));
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((unsigned int) 14263705073197796539ULL)))));
                            var_36 = ((/* implicit */signed char) ((unsigned int) ((long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) (signed char)49))))));
                            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((arr_1 [i_0]) << ((((~(((/* implicit */int) var_0)))) + (32))))) << (((min((((long long int) 79803021054505425LL)), (((/* implicit */long long int) var_1)))) - (8173LL))))))));
                            var_38 = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        var_39 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((var_6) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8)))))))) ? (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_1 + 1] [i_6] [i_0])) : (((unsigned long long int) ((_Bool) (signed char)110)))));
                        var_40 = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_27 [i_1 + 1] [i_1 + 1]))))));
                    }
                    for (unsigned char i_13 = 1; i_13 < 22; i_13 += 1) 
                    {
                        var_41 ^= ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_37 [i_0]))))));
                        var_42 = ((/* implicit */long long int) max((var_42), (((/* implicit */long long int) (~((+((~(((/* implicit */int) arr_19 [i_0] [(_Bool)1])))))))))));
                        arr_46 [i_13] [i_6] [i_1] [i_1 + 1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_13 + 1])))))) || (((arr_18 [i_0] [i_0]) || (((/* implicit */_Bool) arr_19 [i_0] [i_0]))))));
                        var_43 -= ((/* implicit */long long int) (_Bool)1);
                    }
                    var_44 = ((/* implicit */unsigned int) var_2);
                }
                for (unsigned char i_14 = 2; i_14 < 22; i_14 += 1) /* same iter space */
                {
                    var_45 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_13 [i_14]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)21496), (arr_14 [i_0] [i_0] [(short)15] [6LL] [i_0]))))) : (max((((/* implicit */unsigned int) var_3)), (arr_1 [i_0])))))) != (((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_14 - 1] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0]))) : (12072615285993884543ULL)))))));
                    var_46 -= ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((arr_10 [i_0] [i_0] [i_0] [i_0] [15LL]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))) & (((long long int) arr_37 [i_1]))))));
                }
                var_47 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-8421))))) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-79803021054505444LL))) : (((/* implicit */long long int) ((int) var_7))))))));
            }
        } 
    } 
}
