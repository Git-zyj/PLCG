/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241191
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_11)) == (7700943593318398491ULL)));
    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) 7700943593318398492ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14336))) : (7700943593318398491ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) & (((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_17)))) & (((/* implicit */int) ((_Bool) var_0))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [12])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) arr_1 [(_Bool)1])) : (((7700943593318398503ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
        var_21 += ((/* implicit */_Bool) (-(119637985U)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 7; i_2 += 2) 
        {
            for (unsigned short i_3 = 1; i_3 < 7; i_3 += 1) 
            {
                {
                    arr_11 [i_1] [i_2] [i_2] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))) : ((~(((((/* implicit */_Bool) 3127704237U)) ? (arr_10 [i_1] [i_2 + 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))))));
                    arr_12 [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)-1))) ? (max((((arr_2 [i_1] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_2]))))), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [i_2])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (min((arr_1 [i_2]), (((/* implicit */long long int) arr_6 [i_2] [i_1])))) : (arr_1 [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) arr_2 [i_5] [(unsigned short)16]);
                                var_23 += ((/* implicit */short) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4043864075U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_3]))))), (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4]))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                                arr_18 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 3127704237U)) ? (((/* implicit */long long int) var_10)) : (-4409541626986077582LL))) | (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)8668), (((/* implicit */unsigned short) (short)-13298))))))))) >= (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4]))) + (arr_10 [(_Bool)1] [(signed char)7] [(_Bool)1]))) & (arr_0 [i_1] [i_2])))));
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_1 [i_2 + 3]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [9U] [i_1])) : (((/* implicit */int) arr_3 [(_Bool)1]))))), (((((/* implicit */_Bool) arr_2 [i_1] [(short)20])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (3127704230U)))))) ? (((unsigned int) ((arr_9 [i_1] [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_1 [i_1])))) : (((unsigned int) arr_8 [i_1]))));
        var_26 -= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1])) ? (-1884298760) : (var_11))))))));
        var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (17695391967998980013ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [(unsigned char)7] [i_1] [i_1]))))))) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [i_1])) : (var_11)));
        arr_19 [(signed char)2] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) arr_2 [i_1] [21U])) ? (((/* implicit */int) arr_17 [i_1])) : (((/* implicit */int) arr_4 [i_1])))), (((-988936675) / (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1])))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned char)127)) && (arr_13 [i_1] [i_1] [i_1] [i_1])))))));
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((min((2275115804U), (((arr_21 [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) / (min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4))), (((((/* implicit */_Bool) (unsigned char)128)) ? (arr_21 [i_6]) : (((/* implicit */unsigned int) var_11)))))))))));
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned short) ((arr_21 [i_6]) + (2019851498U)));
        /* LoopNest 2 */
        for (short i_7 = 2; i_7 < 10; i_7 += 3) 
        {
            for (unsigned int i_8 = 3; i_8 < 10; i_8 += 3) 
            {
                {
                    var_29 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned short)16320)), (arr_2 [i_6 + 1] [(unsigned char)16])));
                    /* LoopSeq 2 */
                    for (short i_9 = 1; i_9 < 11; i_9 += 3) 
                    {
                        arr_31 [i_7] [i_7] = ((/* implicit */_Bool) min((((((/* implicit */int) ((unsigned short) arr_26 [i_6] [i_7] [i_8] [i_7]))) % (((/* implicit */int) ((arr_20 [3U]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6])))))))), (((/* implicit */int) ((((/* implicit */int) var_16)) < (((((/* implicit */_Bool) arr_26 [(_Bool)1] [(_Bool)1] [(signed char)9] [i_7])) ? (((/* implicit */int) arr_29 [i_6] [i_7] [i_6 + 1] [i_6 + 1] [(unsigned char)8] [5U])) : (-1))))))));
                        arr_32 [2U] [i_7] [i_8] [2U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_6 + 1] [i_7 + 2] [(short)7] [i_7]))))) ? (((/* implicit */int) arr_26 [i_6] [i_7 + 1] [i_8 + 1] [i_7])) : ((+(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
                        arr_33 [i_7] [2U] [4U] [2U] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (+(((/* implicit */int) (unsigned short)0)))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_15)), (var_4)))) & (((((/* implicit */_Bool) var_7)) ? (arr_25 [(short)4] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [(_Bool)1] [i_7] [(_Bool)1] [(_Bool)1]))))))))));
                    }
                    for (short i_10 = 0; i_10 < 12; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) arr_1 [i_7]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 1; i_11 < 10; i_11 += 3) 
                        {
                            arr_41 [2U] [(unsigned short)10] [(signed char)4] [i_10] [2U] &= ((/* implicit */unsigned short) 17697659249335394275ULL);
                            var_31 &= ((/* implicit */int) var_3);
                            var_32 = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_37 [i_7] [9ULL] [9ULL])))), (((/* implicit */int) min((arr_37 [i_7] [i_8 + 2] [9]), (arr_37 [i_7] [i_10] [(signed char)11]))))));
                            arr_42 [i_7] [i_7] [i_6 + 1] [i_10] [i_6] = ((/* implicit */short) ((((_Bool) arr_36 [i_6 + 1] [i_11 + 1] [(unsigned short)9] [i_10] [i_11] [i_7])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)127))))) : (arr_36 [i_6] [i_7] [i_7 + 1] [i_8 - 1] [i_8 - 1] [i_7])));
                            var_33 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_36 [i_6 + 1] [i_7] [(unsigned char)8] [(short)6] [i_11 + 2] [10LL]) | (((((/* implicit */_Bool) (signed char)-125)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (1152921229728940032ULL)))))) || (((/* implicit */_Bool) arr_21 [(signed char)11]))));
                        }
                        arr_43 [i_6 + 1] [i_7 + 2] [i_7] [(signed char)11] = ((/* implicit */long long int) ((((/* implicit */int) (short)15814)) > (((/* implicit */int) (_Bool)1))));
                    }
                    arr_44 [(_Bool)1] [i_6] [1LL] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)244)), (-13)))) : (min((arr_0 [i_6] [i_6]), (((/* implicit */unsigned long long int) 8254340999780035927LL))))))) ? (((((/* implicit */long long int) min((var_6), (((/* implicit */unsigned int) (unsigned short)65535))))) - (((((/* implicit */_Bool) (unsigned short)28024)) ? (1602053757003300406LL) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_6] [(_Bool)1] [i_8]))))))) : (((/* implicit */long long int) ((unsigned int) (unsigned short)5672)))));
                    var_34 -= (unsigned short)8465;
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (-1056443494) : (((/* implicit */int) (unsigned char)250))));
                        arr_47 [i_7] [(unsigned char)10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8454))) != (arr_20 [i_12])));
                        var_36 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_17), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_28 [i_6 + 1] [i_12] [i_6] [i_6])) > (arr_2 [i_6 + 1] [i_6 + 1]))))))) || (((/* implicit */_Bool) ((max((arr_25 [i_7 - 1] [i_12]), (arr_2 [(unsigned short)10] [i_8]))) - (((((/* implicit */unsigned long long int) arr_45 [(unsigned short)9] [(_Bool)1] [(unsigned short)9])) / (arr_25 [i_7] [i_12]))))))));
                        var_37 *= 2305843009213693951ULL;
                    }
                }
            } 
        } 
    }
    for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
    {
        var_38 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) var_12))))) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_13])))))) ? (arr_2 [i_13] [i_13]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)226)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_4) : (var_6)))) : (var_7))))));
        arr_51 [i_13] = ((/* implicit */short) arr_2 [i_13] [2]);
    }
}
