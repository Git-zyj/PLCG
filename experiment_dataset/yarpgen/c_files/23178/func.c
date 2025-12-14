/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23178
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
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) 1965671239U))))), (var_15)));
    var_17 = var_14;
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_18 |= ((/* implicit */_Bool) min((max((((/* implicit */int) ((arr_5 [i_0 - 1] [i_0 + 3] [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-31861)))))), (var_12))), ((-(((/* implicit */int) (short)13801))))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_3 + 1])))) >> (((((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3 + 1] [i_3])) % (((/* implicit */int) var_9)))) - (17)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-31861))))) ? (max((16523603266394345646ULL), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_3])))) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) max((arr_0 [i_3 + 1]), ((-(((/* implicit */int) (unsigned char)56)))))))));
                        /* LoopSeq 2 */
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_4])) & (((/* implicit */int) max((arr_2 [i_3 + 1] [i_0 + 3] [(_Bool)1]), (arr_2 [i_3 + 1] [i_0 - 1] [i_4]))))));
                            arr_13 [i_0] [i_4] [i_3 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((int) 3819391141925806545ULL))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned char) (signed char)117))))))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 1])))));
                        }
                        for (long long int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) min((1292304025), (1853849768)))) : (arr_1 [i_0 + 1]))), (((/* implicit */long long int) ((arr_12 [i_0 - 1] [i_0 + 3] [i_0 + 1] [i_0 + 2] [i_0 + 2]) || (((/* implicit */_Bool) (unsigned char)2)))))));
                            arr_16 [i_0 - 1] = ((/* implicit */short) (+(((arr_2 [4ULL] [i_2] [i_2]) ? (((/* implicit */int) arr_2 [i_5] [i_3] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0 + 1] [i_0 - 1]))))));
                            var_22 = ((/* implicit */_Bool) -1853849769);
                        }
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            arr_20 [i_6] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1584096786)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_2] [i_1] [i_2] [i_3]))));
                            var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_3 + 1]))));
                            var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 2] [i_3] [14U]))) : (680218657U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_1))))))));
                        }
                        for (short i_7 = 1; i_7 < 16; i_7 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) max((680218662U), (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) 4006866329U)))))))))));
                            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((317741597U) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2696506471U)))))))) ? (arr_0 [i_0]) : ((~(((((/* implicit */_Bool) 2306777998U)) ? (((/* implicit */int) arr_4 [i_3 + 1] [i_1])) : (((/* implicit */int) var_9)))))))))));
                        }
                        for (signed char i_8 = 1; i_8 < 17; i_8 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((int) arr_5 [i_8 - 1] [i_3 + 1] [i_0 - 1] [i_0])))));
                            arr_25 [i_8] [i_1] [i_2] [i_3] [i_8 - 1] = ((/* implicit */signed char) (((+(arr_19 [i_8 + 1] [i_8 + 1] [(_Bool)1] [i_8] [i_8 + 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_9 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 - 1]))))));
                            arr_26 [i_0 + 1] [i_8] [i_2] [i_3 + 1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_8] [i_3] [i_2] [i_1]) : ((-((~(680218661U)))))));
                        }
                    }
                    var_28 += ((/* implicit */unsigned int) (-(((((/* implicit */int) max((var_0), (arr_12 [i_0] [i_1] [12LL] [i_2] [i_1])))) >> (((((/* implicit */int) var_7)) - (145)))))));
                    /* LoopSeq 4 */
                    for (int i_9 = 0; i_9 < 18; i_9 += 3) 
                    {
                        var_29 = ((/* implicit */short) min((((/* implicit */int) arr_15 [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 3] [i_0 + 2] [i_0 - 1])), (((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_14 [i_0] [i_0 + 2] [i_0] [i_0 + 3] [(signed char)10])) - (3139)))))));
                        arr_30 [i_0] [(_Bool)1] [i_2] [i_9] = ((/* implicit */unsigned short) ((unsigned int) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (5469394817722863464LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                    {
                        var_30 -= ((/* implicit */unsigned int) (short)-31861);
                        var_31 = ((unsigned int) ((unsigned short) (~(((/* implicit */int) var_7)))));
                        /* LoopSeq 1 */
                        for (short i_11 = 1; i_11 < 15; i_11 += 3) 
                        {
                            arr_37 [i_0] [i_1] [i_1] [i_2] [i_10] [i_11] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_5)) * ((+(((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_2] [i_2] [i_10] [i_11 - 1])))))))));
                            var_32 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (11545226261133990124ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_11] [i_11] [i_10] [i_0] [i_0 - 1]))))))));
                            arr_38 [i_10] = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */short) arr_7 [i_0 - 1])), (arr_22 [i_0 + 3]))));
                        }
                        arr_39 [i_10] [i_2] [i_1] [i_0 + 1] &= ((/* implicit */unsigned int) (short)0);
                    }
                    for (unsigned int i_12 = 4; i_12 < 17; i_12 += 3) 
                    {
                        arr_43 [i_0 + 1] [i_12] [10U] [i_12] = ((/* implicit */unsigned long long int) (_Bool)1);
                        arr_44 [i_2] [i_1] [i_1] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 7126743197892816689LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_7 [i_0 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2018))) : (arr_5 [i_0] [i_1] [i_2] [i_12 + 1]))))))) : ((+(((/* implicit */int) ((_Bool) 3614748625U)))))));
                    }
                    for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        arr_48 [i_13] [i_2] [i_1] [i_0 + 2] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned int) arr_10 [i_0] [i_0 + 1] [i_0 - 1] [i_13] [16])));
                        arr_49 [i_0 + 2] [i_1] [i_2] [i_13] = (!(((/* implicit */_Bool) arr_27 [(short)14] [i_1] [i_0 + 1] [i_13])));
                        arr_50 [i_0] [(short)5] [i_1] [i_2] [i_13] [i_13] = (short)12331;
                        arr_51 [i_0] &= (_Bool)1;
                    }
                    /* LoopSeq 3 */
                    for (short i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) var_6)))), ((!(((/* implicit */_Bool) var_3))))));
                        arr_54 [i_14] [i_2] [i_1] [i_0] = ((/* implicit */int) min((((((/* implicit */long long int) var_5)) + (-1LL))), (((/* implicit */long long int) ((min((2147483640U), (((/* implicit */unsigned int) (unsigned short)46001)))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))));
                        arr_55 [i_0] [i_14] = ((/* implicit */_Bool) 2779415826U);
                        var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((((_Bool) -599479939)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3922417658U))))));
                    }
                    for (int i_15 = 1; i_15 < 16; i_15 += 4) 
                    {
                        var_35 = arr_23 [i_15 - 1] [i_15] [i_2] [i_15] [i_0 + 2];
                        arr_60 [i_0] [i_15] [i_2] = ((/* implicit */unsigned int) ((_Bool) max((((signed char) arr_6 [i_0] [i_1] [i_2] [i_2])), (((/* implicit */signed char) var_1)))));
                    }
                    for (short i_16 = 3; i_16 < 17; i_16 += 3) 
                    {
                        arr_65 [i_0 + 1] [i_0 + 1] [i_2] [i_16] [6] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 2 */
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                        {
                            var_36 = var_10;
                            var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((unsigned int) (~(min((((/* implicit */int) (short)15136)), (var_14)))))))));
                            arr_70 [i_17] [i_16] [i_2] [i_16] [i_0 + 2] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-32766)) + (((/* implicit */int) (unsigned short)18025))));
                            arr_71 [i_2] [17U] [i_16] = ((short) ((((int) 14756108915425350933ULL)) + ((+(((/* implicit */int) var_1))))));
                        }
                        for (unsigned int i_18 = 2; i_18 < 17; i_18 += 3) 
                        {
                            arr_74 [i_16] [i_2] [i_16] [i_18] = ((/* implicit */long long int) (short)681);
                            var_38 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])), (((((/* implicit */int) arr_46 [(short)2] [(short)2] [i_2] [i_16 - 3] [i_18])) - (((/* implicit */int) (short)-13042))))));
                        }
                    }
                    var_39 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_2]))) <= (var_8))) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) (signed char)-105))))) ? (((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned char)1)))), (((var_1) ? (((/* implicit */int) arr_41 [i_0 - 1] [i_2] [i_0 - 1] [i_0])) : (((/* implicit */int) (short)-29705))))))) : (((unsigned int) (-(((/* implicit */int) (unsigned short)23974)))))));
                }
            } 
        } 
    } 
}
