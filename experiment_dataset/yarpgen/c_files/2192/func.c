/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2192
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) -337975639);
        var_17 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    /* LoopSeq 3 */
    for (short i_1 = 2; i_1 < 18; i_1 += 2) 
    {
        var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (+(-337975645)))) ? (((/* implicit */int) arr_5 [i_1 - 2])) : (((/* implicit */int) max(((unsigned short)65521), (((/* implicit */unsigned short) var_6))))))), ((-(((/* implicit */int) arr_5 [i_1]))))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (-(max((max((-337975635), (((/* implicit */int) (unsigned short)1023)))), (arr_4 [i_1 - 2]))))))));
    }
    for (int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_4 = 2; i_4 < 15; i_4 += 4) 
            {
                arr_17 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)242))));
                var_20 &= ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
            }
            var_21 *= var_15;
            arr_18 [i_3] [i_3] = ((/* implicit */int) arr_15 [i_3] [i_2] [i_2] [i_2]);
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((-6720516496007271380LL) + (9223372036854775807LL))) << (((max((((/* implicit */long long int) arr_9 [i_3] [i_2])), (arr_16 [i_2] [i_3 - 1] [i_5] [i_6]))) - (592456947155976799LL)))));
                    arr_23 [i_3] [i_3] [6U] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) min((-2166382526102701419LL), (((/* implicit */long long int) (short)10342))));
                    var_23 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 + 1] [i_3 - 1])) || (((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_3])))), (((var_2) <= (min((arr_12 [i_2]), (((/* implicit */long long int) (short)1093))))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    arr_26 [i_2] [i_3] [i_3] [i_3] = (-(((/* implicit */int) var_16)));
                    arr_27 [i_7] [i_3] [i_3] [i_7] [i_5] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_3 - 1]))));
                    arr_28 [i_2] [i_3] [i_5] [(unsigned char)6] = ((/* implicit */unsigned char) ((_Bool) arr_20 [3] [3] [i_3]));
                }
                arr_29 [i_3] [i_3] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) var_12)) : (arr_13 [i_3 + 1] [i_3 - 1] [i_3 - 1]))))));
                arr_30 [4] [i_2] [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_6)) - (arr_22 [i_5] [i_3 - 1] [i_3] [(unsigned char)1] [i_2]))))) >= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) <= (var_2)))) < (((/* implicit */int) var_11)))))));
            }
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) var_2))));
                arr_34 [i_2] [i_3] [4U] = 2166382526102701426LL;
                var_25 = ((/* implicit */long long int) ((((3151036861U) + (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1955247875U)) ? (((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_8])) : (((/* implicit */int) (unsigned char)194)))))));
                arr_35 [i_3] [i_3 + 1] [i_3] [i_8] = ((/* implicit */unsigned long long int) (short)-15180);
                /* LoopSeq 1 */
                for (short i_9 = 1; i_9 < 14; i_9 += 4) 
                {
                    var_26 = (-(((arr_10 [i_2] [i_2] [i_3]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_8] [4]))))));
                    arr_38 [i_3] = ((/* implicit */int) var_1);
                }
            }
            for (unsigned int i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    var_27 = ((/* implicit */unsigned long long int) var_11);
                    arr_43 [i_11 + 1] [i_3] [i_3] [(unsigned char)6] = ((/* implicit */short) (+(((/* implicit */int) var_0))));
                    arr_44 [i_3] [i_3] [(unsigned char)11] [i_11 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_2] [i_3] [i_10] [i_10] [i_10] [i_11]))) == (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)1043)) ? (((/* implicit */int) arr_14 [i_2] [i_3 + 1] [i_3] [i_11])) : (var_14)))) % (arr_31 [i_2] [8LL] [i_3])))));
                }
                for (signed char i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    var_28 = ((/* implicit */long long int) arr_22 [i_2] [i_3] [i_3 + 1] [i_12] [i_3 + 1]);
                    arr_48 [i_2] [10ULL] [i_3] [i_3] = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524287U)) ? (((/* implicit */long long int) var_14)) : (var_2)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))) <= (arr_16 [i_12] [i_10] [i_3] [i_2]))))))) <= (-2166382526102701422LL));
                }
                /* LoopSeq 3 */
                for (unsigned int i_13 = 1; i_13 < 15; i_13 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        arr_53 [i_14] [i_3] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_20 [i_10] [i_13] [i_3])) ? (((((/* implicit */long long int) arr_22 [i_2] [i_3 - 1] [i_2] [i_3] [i_14])) - (2166382526102701427LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)64493)) ^ (((/* implicit */int) (unsigned char)0))))))), (((/* implicit */long long int) (short)4582))));
                        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (14085405294542063880ULL))), (((/* implicit */unsigned long long int) max((7390080057044879094LL), (((/* implicit */long long int) arr_11 [i_2] [i_10] [i_13]))))))))));
                        arr_54 [i_10] [i_3] [i_2] = ((/* implicit */_Bool) ((long long int) min((min((((/* implicit */int) arr_46 [i_3])), (111546096))), (((((/* implicit */_Bool) arr_25 [i_3] [i_13])) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) var_4)))))));
                        arr_55 [i_3] = ((/* implicit */int) min((((((/* implicit */_Bool) ((-7390080057044879073LL) | (var_9)))) ? (arr_20 [i_3] [i_3 + 1] [i_3]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_41 [i_2] [i_3 + 1] [i_3] [i_13])), (arr_12 [i_10])))))), (((/* implicit */unsigned long long int) var_5))));
                        arr_56 [i_2] [i_2] [i_2] [i_10] [i_13] [i_3] [i_14] = ((/* implicit */unsigned int) var_9);
                    }
                    for (unsigned long long int i_15 = 4; i_15 < 15; i_15 += 4) 
                    {
                        arr_60 [i_2] [i_3] [13] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_13))));
                        arr_61 [i_2] [i_2] [i_10] [i_3] [(unsigned char)10] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_13])) ? (((/* implicit */int) arr_46 [i_3])) : (((/* implicit */int) (unsigned char)254))))) ? (((6950246102631464242ULL) / (((/* implicit */unsigned long long int) 2166382526102701428LL)))) : (((/* implicit */unsigned long long int) var_9))))));
                        var_30 *= ((/* implicit */signed char) (unsigned char)157);
                    }
                    for (unsigned char i_16 = 0; i_16 < 16; i_16 += 4) 
                    {
                        arr_65 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_40 [i_16] [i_3] [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_8)))))) ? (30) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (2166382526102701434LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_16]))) > (2166382526102701419LL)))) : (((/* implicit */int) (short)-7303))))));
                        var_31 = (unsigned char)245;
                        var_32 = ((/* implicit */unsigned char) 1605036744);
                    }
                    for (unsigned int i_17 = 0; i_17 < 16; i_17 += 2) 
                    {
                        var_33 = var_12;
                        arr_70 [i_17] [i_13 - 1] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) (+((-(max((arr_42 [i_3] [i_3] [i_13] [i_17]), (((/* implicit */unsigned long long int) var_16))))))));
                        arr_71 [i_2] [i_3] [i_3] [12LL] [i_3] = ((/* implicit */int) var_1);
                    }
                    arr_72 [i_3] [i_3 - 1] [i_10] [i_13] = min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [(unsigned char)14] [i_10] [(_Bool)0] [i_2])) && (((/* implicit */_Bool) (unsigned char)157)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_64 [i_2] [i_3 - 1] [i_10] [i_13 + 1] [i_2] [i_13 + 1])), (arr_45 [7ULL] [7ULL]))))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)119))) : (2166382526102701418LL))));
                    arr_73 [10] [i_3] [i_13 + 1] = ((/* implicit */unsigned long long int) arr_22 [i_13] [i_13 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1]);
                    arr_74 [i_13] [i_10] [i_3] [i_2] [i_2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_22 [i_3 - 1] [i_3 - 1] [i_10] [i_13 + 1] [i_13]))))));
                }
                /* vectorizable */
                for (long long int i_18 = 0; i_18 < 16; i_18 += 4) 
                {
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_14)) + (arr_47 [i_2] [i_3] [i_3 - 1])));
                    var_35 *= ((/* implicit */unsigned short) 2047);
                    arr_79 [i_3] = (i_3 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(32489191)))) <= (((arr_49 [i_10] [8] [i_10] [i_18] [i_18]) >> (((arr_25 [i_3] [i_18]) - (1524960537916796999ULL)))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(32489191)))) <= (((arr_49 [i_10] [8] [i_10] [i_18] [i_18]) >> (((((arr_25 [i_3] [i_18]) - (1524960537916796999ULL))) - (1054698048062525417ULL))))))));
                    var_36 = ((/* implicit */int) arr_59 [i_18] [i_10] [i_18] [i_3] [i_2]);
                }
                for (unsigned int i_19 = 0; i_19 < 16; i_19 += 3) 
                {
                    var_37 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)48))));
                    arr_82 [i_2] [i_3] [i_3] [i_3 + 1] [i_10] [i_2] = ((/* implicit */unsigned char) -129424670);
                }
            }
        }
        /* LoopNest 3 */
        for (unsigned char i_20 = 2; i_20 < 15; i_20 += 2) 
        {
            for (unsigned long long int i_21 = 4; i_21 < 14; i_21 += 2) 
            {
                for (unsigned char i_22 = 0; i_22 < 16; i_22 += 4) 
                {
                    {
                        var_38 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_21 [i_20]))));
                        var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) (unsigned char)155))));
                        arr_91 [i_2] [i_2] [i_20] [i_21] [i_22] = arr_89 [i_2] [i_21 - 3] [i_2] [13ULL];
                        var_40 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)2601)) + (-1073741824)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_23 = 3; i_23 < 18; i_23 += 2) 
    {
        arr_96 [i_23] [i_23] = ((/* implicit */unsigned int) (!(((((/* implicit */int) (unsigned char)162)) <= (((/* implicit */int) (short)19366))))));
        arr_97 [(_Bool)1] = ((/* implicit */unsigned char) arr_93 [i_23 + 1]);
        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (_Bool)1))));
    }
    /* LoopNest 2 */
    for (unsigned char i_24 = 0; i_24 < 10; i_24 += 1) 
    {
        for (signed char i_25 = 1; i_25 < 9; i_25 += 3) 
        {
            {
                arr_104 [i_25] [i_24] [i_25] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_40 [i_25] [i_25] [i_24]))));
                var_42 = ((((/* implicit */_Bool) min((max((9393045784742398084ULL), (((/* implicit */unsigned long long int) -129424651)))), (((/* implicit */unsigned long long int) arr_83 [i_24] [i_25 + 1]))))) ? ((+(((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2601))))))) : (min((arr_86 [i_25 - 1] [i_24]), (((/* implicit */unsigned long long int) arr_8 [i_25 + 1] [i_25 + 1])))));
                arr_105 [i_25] [i_25] = ((/* implicit */unsigned long long int) var_7);
            }
        } 
    } 
}
