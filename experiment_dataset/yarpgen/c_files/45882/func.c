/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45882
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
    var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) var_12))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (short i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_4))));
            var_19 += ((/* implicit */short) ((((/* implicit */_Bool) (short)-5279)) ? (1999363911828532385ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)78)))));
            var_20 ^= ((/* implicit */signed char) arr_1 [i_0] [i_0]);
            var_21 = ((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1]);
            arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1])) < (((/* implicit */int) var_9)))))) : (-4037170560392923111LL)));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_22 = ((/* implicit */_Bool) (-(((unsigned long long int) arr_1 [i_0] [i_2]))));
            arr_9 [i_0] = ((/* implicit */unsigned long long int) (~(2339852202U)));
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_2])) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_2] [i_2])) : (var_16)))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            var_24 |= ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_1 [i_0] [i_0])) & (((((/* implicit */_Bool) 4037170560392923098LL)) ? (((/* implicit */int) (short)-25293)) : (((/* implicit */int) (unsigned char)235))))))));
            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_4 [(signed char)19] [i_3 + 2] [i_3]))))));
            arr_12 [i_0] [(signed char)13] |= (((~(((arr_3 [(_Bool)1] [(unsigned char)15]) ? (arr_11 [12ULL] [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_0] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) arr_4 [i_0] [(short)12] [i_3 + 2])))))));
        }
        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_5)) / (2177950121U)))) ? ((~(((/* implicit */int) (unsigned short)9106)))) : (((/* implicit */int) (unsigned short)35204))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_17 [i_0] [i_4] [i_5] [i_0])) ? (((/* implicit */int) var_2)) : (min((((/* implicit */int) arr_21 [i_6] [i_4] [(signed char)14] [(unsigned char)19] [(signed char)14] [i_0])), (-947162567)))))));
                            var_27 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)148)), ((unsigned short)51273)))) ? (2117017180U) : ((((_Bool)1) ? (2091387743U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-3487)))))))) && (((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_11))))));
                            arr_24 [i_6] [i_4] [i_6] [i_5] [i_6] [i_7] [i_7] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((1955115085U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6] [i_4] [i_5] [i_4] [i_7] [i_7])))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)28644)))) % (((/* implicit */int) (short)-15781))));
                            var_28 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_23 [i_6])), (((((/* implicit */_Bool) 16447380161881019225ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_23 [i_6]))))));
                            var_29 = ((/* implicit */signed char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_23 [i_6])))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0]))) ^ (2151558525050541956LL)));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_4] [i_4])) ? (((arr_14 [i_0] [i_0] [i_0]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_19 [i_8] [i_6] [i_0] [i_0])))) : (((/* implicit */int) arr_10 [i_0]))));
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2117017180U)) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) (_Bool)1))));
                            var_33 -= ((/* implicit */unsigned char) ((arr_17 [i_8] [i_6] [(unsigned char)14] [(unsigned char)14]) >> (((arr_17 [(_Bool)1] [i_5] [i_4] [i_0]) - (8849966392849550307LL)))));
                            arr_27 [i_6] [i_6] = ((/* implicit */short) ((arr_11 [i_0] [i_4] [i_6]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            arr_31 [i_0] [i_4] [i_6] [i_6] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */int) (short)-12259)) : (((/* implicit */int) (_Bool)1))));
                            arr_32 [i_6] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (unsigned char)80)) & (((/* implicit */int) arr_13 [i_0] [(signed char)6] [(unsigned short)15])))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    {
                        var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)7))));
                        var_35 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_22 [i_10] [i_10] [i_4] [i_10])) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)17555)))))))) - (((arr_14 [i_0] [i_10] [i_11]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_4] [i_10]))) : (16447380161881019224ULL)))));
                        var_36 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) max((((/* implicit */short) (_Bool)1)), ((short)22927)))), ((unsigned short)55567)));
                        arr_39 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_11);
                    }
                } 
            } 
            var_37 = ((/* implicit */unsigned long long int) (unsigned char)137);
        }
        var_38 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)114)) * (((/* implicit */int) arr_16 [12] [i_0] [i_0]))))) ? (((/* implicit */int) arr_8 [i_0])) : (((((/* implicit */int) var_0)) & (((/* implicit */int) (unsigned char)197))))))), (((unsigned long long int) min((((/* implicit */unsigned char) arr_35 [(unsigned short)16] [i_0] [i_0])), (arr_5 [i_0]))))));
        /* LoopSeq 3 */
        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            arr_42 [i_0] = (unsigned char)194;
            var_39 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_20 [i_0] [i_12] [i_0] [i_12])) | (((/* implicit */int) (signed char)114))))));
        }
        /* vectorizable */
        for (signed char i_13 = 1; i_13 < 19; i_13 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                for (unsigned short i_15 = 3; i_15 < 18; i_15 += 4) 
                {
                    {
                        var_40 = ((/* implicit */_Bool) ((arr_40 [i_0] [i_0] [i_13 + 1]) / (arr_40 [i_0] [i_0] [i_13 - 1])));
                        var_41 -= ((/* implicit */long long int) var_13);
                    }
                } 
            } 
            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((arr_37 [i_13 - 1] [i_13 + 1]) > (arr_37 [i_13] [i_13 + 1]))))));
            var_43 ^= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_2 [i_0])))) >= (((/* implicit */int) arr_1 [i_13 + 1] [i_13 - 1]))));
            var_44 = ((/* implicit */int) arr_33 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13]);
            var_45 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_13 - 1] [i_13] [(short)9] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_18 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_13 - 1])));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_52 [i_16] [i_16] [i_0] = ((/* implicit */short) var_10);
            arr_53 [i_0] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)156), (((/* implicit */unsigned char) (signed char)121))))) ? (((((/* implicit */int) (!(arr_10 [i_0])))) ^ (((/* implicit */int) ((short) arr_2 [i_0]))))) : (((/* implicit */int) (((+(var_7))) != (((arr_11 [i_0] [i_16] [i_16]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
            var_46 = ((/* implicit */unsigned char) 2383267261U);
            var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) var_1))));
        }
    }
    for (signed char i_17 = 1; i_17 < 17; i_17 += 4) 
    {
        var_48 = ((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9106))) ^ ((~(5455109739716257323LL))))), (((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_17 - 1] [i_17 - 1] [i_17] [i_17] [i_17]))) & (6157061600343218374LL)))));
        arr_57 [i_17] = ((/* implicit */int) min((((unsigned short) arr_15 [i_17 - 1] [i_17] [i_17] [i_17 + 1])), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned int) (_Bool)1)), (720127225U))) < (2383267254U))))));
    }
    for (signed char i_18 = 1; i_18 < 24; i_18 += 4) 
    {
        var_49 -= ((/* implicit */unsigned long long int) (unsigned short)63330);
        arr_60 [i_18 - 1] = ((/* implicit */unsigned long long int) (unsigned short)56430);
        arr_61 [i_18 + 1] [i_18 - 1] = ((/* implicit */short) max((((((/* implicit */int) arr_58 [i_18] [i_18])) * (((((/* implicit */_Bool) arr_58 [i_18 - 1] [i_18 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_58 [i_18] [i_18])))))), (((((/* implicit */int) (signed char)114)) / (((/* implicit */int) (signed char)-121))))));
    }
    /* LoopSeq 4 */
    for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 4) 
    {
        var_50 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)26888)) | ((~(((/* implicit */int) (short)-15397))))))), (min((((/* implicit */unsigned long long int) arr_15 [i_19] [i_19] [i_19] [i_19])), (arr_25 [i_19] [i_19] [i_19] [i_19] [(signed char)13]))));
        arr_65 [i_19] [(signed char)1] = ((/* implicit */signed char) (+(((((/* implicit */int) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(_Bool)0] [i_19] [i_19] [0ULL])))))) | (((/* implicit */int) arr_16 [i_19] [(unsigned char)6] [i_19]))))));
    }
    for (unsigned char i_20 = 1; i_20 < 10; i_20 += 4) 
    {
        var_51 = ((/* implicit */short) ((max((max((var_5), (((/* implicit */int) (signed char)-65)))), (((/* implicit */int) arr_35 [(short)5] [i_20] [i_20 + 1])))) / (min(((-(((/* implicit */int) (unsigned short)48562)))), (((/* implicit */int) (short)32679))))));
        arr_68 [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_18 [i_20] [i_20] [i_20 - 1] [i_20])))) ? (((123778184) & (((/* implicit */int) (unsigned char)187)))) : (((/* implicit */int) var_3))));
        /* LoopSeq 1 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) 3865738952U))));
            var_53 = ((((/* implicit */_Bool) arr_51 [i_20] [i_20] [i_21])) || (((1911700042U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)67))))));
        }
        var_54 = ((/* implicit */short) (signed char)6);
    }
    /* vectorizable */
    for (unsigned char i_22 = 0; i_22 < 17; i_22 += 4) 
    {
        var_55 = ((/* implicit */_Bool) ((((/* implicit */int) arr_45 [i_22] [i_22] [i_22])) | (((((/* implicit */int) arr_2 [(short)7])) * (((/* implicit */int) (_Bool)0))))));
        arr_74 [i_22] = (((((~(((/* implicit */int) var_4)))) + (2147483647))) << (((((var_6) / (((/* implicit */int) (signed char)-19)))) - (20868410))));
        var_56 -= ((/* implicit */signed char) ((((/* implicit */int) arr_20 [i_22] [i_22] [i_22] [i_22])) * (((/* implicit */int) arr_5 [i_22]))));
        var_57 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-88)) + (2147483647))) >> (((((/* implicit */int) arr_48 [i_22] [i_22] [i_22] [i_22] [(_Bool)1] [i_22])) - (53)))))) != ((+(arr_4 [i_22] [i_22] [i_22])))));
    }
    for (unsigned int i_23 = 0; i_23 < 23; i_23 += 4) 
    {
        var_58 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)4917)) ? (123778184) : (((((/* implicit */_Bool) (unsigned char)55)) ? (((/* implicit */int) arr_58 [i_23] [i_23])) : (((/* implicit */int) arr_58 [i_23] [(signed char)17])))))) - (((/* implicit */int) ((((/* implicit */int) (signed char)67)) <= (((/* implicit */int) (unsigned char)34)))))));
        var_59 = ((/* implicit */long long int) max((min((min(((unsigned short)41340), (((/* implicit */unsigned short) (_Bool)0)))), (((/* implicit */unsigned short) arr_58 [i_23] [i_23])))), (((/* implicit */unsigned short) max((arr_58 [i_23] [i_23]), (arr_58 [i_23] [i_23]))))));
        arr_77 [i_23] = ((/* implicit */short) var_10);
        arr_78 [i_23] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)192))));
    }
    var_60 ^= ((/* implicit */signed char) (unsigned char)56);
}
