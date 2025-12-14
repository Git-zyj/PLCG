/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45484
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        arr_2 [(unsigned char)8] = (!(((/* implicit */_Bool) var_16)));
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0 - 2] [i_0 - 2]);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((unsigned char) var_9));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_17 = (-(((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(_Bool)1] [i_1] [i_2] [i_3]))))));
                        arr_16 [i_0] [i_1 + 3] [2ULL] [(unsigned char)11] = ((/* implicit */short) var_4);
                        arr_17 [i_3] [i_2] [(unsigned char)7] [i_0 + 1] [i_0 + 1] = ((/* implicit */unsigned char) ((_Bool) 2676459683U));
                    }
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_20 [i_1] = ((/* implicit */long long int) ((signed char) (unsigned char)149));
                        arr_21 [i_4] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)13412)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((arr_11 [i_0] [i_0] [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
                    }
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_26 [i_5] [i_1] = ((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 - 2] [i_0 - 1]);
                        arr_27 [i_0] [i_1] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned short) arr_10 [(unsigned char)1] [i_1] [i_2] [(unsigned char)1]);
                        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) var_8)) - (9002)))));
                        var_19 += ((/* implicit */long long int) ((410551853010399115ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                        {
                            arr_31 [i_5] [i_5 - 1] [i_2] [i_1] [i_5] = ((/* implicit */short) ((arr_18 [i_6] [i_5 - 1] [i_1 + 2] [i_0 - 2]) > (((((/* implicit */int) arr_22 [i_5] [i_1 + 3] [i_6] [i_1 + 1])) >> (((arr_19 [i_0 + 1]) + (85132147)))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2040)) && (((/* implicit */_Bool) arr_14 [i_5] [i_2] [i_1] [i_0]))))) >> (((arr_18 [i_0] [i_1 - 1] [i_5 - 1] [i_0 + 1]) + (934921777)))));
                        }
                    }
                    var_21 = arr_12 [i_0] [i_1] [(_Bool)1];
                    var_22 = (!(arr_5 [i_0 - 1] [i_0 - 1]));
                    var_23 = arr_1 [i_0 - 2];
                    var_24 = ((arr_24 [i_0] [(_Bool)1] [i_0 - 2] [i_0]) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-79))) : (var_2))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
        var_25 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
    }
    /* vectorizable */
    for (short i_7 = 1; i_7 < 19; i_7 += 2) 
    {
        var_26 = ((/* implicit */short) (~(((/* implicit */int) (short)12457))));
        arr_35 [i_7] [i_7] = ((/* implicit */int) (((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) ((((/* implicit */int) arr_33 [i_7] [i_7])) <= (((/* implicit */int) var_15)))))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_7 + 2] [i_7 + 3])) & (((/* implicit */int) arr_33 [i_7] [i_7 - 1]))));
        var_28 = ((/* implicit */short) (-(arr_32 [i_7 - 1])));
    }
    for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
    {
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(681592987U)))) ? (((((/* implicit */_Bool) 770957391U)) ? (7516017218418067668LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)95))))) : (((/* implicit */long long int) 426676953))));
        /* LoopNest 2 */
        for (unsigned short i_9 = 2; i_9 < 14; i_9 += 2) 
        {
            for (signed char i_10 = 2; i_10 < 15; i_10 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)5714))) * (3613374315U)))))))))));
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775786LL)) || (((/* implicit */_Bool) 770957387U))))) - (((((((/* implicit */int) (short)-32748)) * (((/* implicit */int) (unsigned short)52124)))) & (426676945)))));
                        }
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_10] [i_10] [i_10 - 2] [i_10] [(unsigned short)10] [i_10]))) | ((-9223372036854775807LL - 1LL))))) ? (((arr_13 [i_10] [16] [i_10 - 2] [i_10] [17LL] [i_10]) ? (((/* implicit */int) arr_13 [i_10 - 1] [(unsigned short)9] [i_10 - 2] [i_10] [(unsigned char)14] [i_10])) : (((/* implicit */int) arr_13 [i_10] [i_10] [i_10 - 2] [i_10] [i_10 - 1] [i_10])))) : (((arr_13 [i_10] [i_10 + 1] [i_10 - 2] [i_10 - 2] [12] [i_10 + 2]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))));
                    }
                    arr_47 [7LL] [(unsigned short)7] [i_10] = ((/* implicit */unsigned char) var_0);
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) 
    {
        for (short i_14 = 0; i_14 < 11; i_14 += 2) 
        {
            {
                var_33 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)18)))) && (arr_24 [i_14] [i_14] [i_14] [i_13]))))));
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 11; i_15 += 2) 
                {
                    for (short i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        {
                            arr_57 [i_13] [i_14] [i_14] [i_15] [i_15] [i_16] |= ((/* implicit */unsigned int) (unsigned short)24576);
                            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_10 [i_13] [(unsigned char)11] [i_15] [i_13])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_13] [i_14] [i_15] [i_16])) ? (((/* implicit */int) var_15)) : (arr_48 [i_13] [i_14])))) : (max((arr_10 [i_13] [i_14] [i_14] [i_13]), (((/* implicit */unsigned int) 426676953)))))))));
                            arr_58 [i_13] [i_14] [i_15] [i_16] = ((/* implicit */unsigned int) arr_13 [i_13] [i_13] [(signed char)13] [(unsigned char)16] [i_15] [i_14]);
                        }
                    } 
                } 
                arr_59 [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) + (3524009904U)));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_17 = 0; i_17 < 25; i_17 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_18 = 0; i_18 < 25; i_18 += 2) 
        {
            for (long long int i_19 = 0; i_19 < 25; i_19 += 2) 
            {
                {
                    var_35 *= ((/* implicit */short) min((((/* implicit */int) (!(arr_63 [i_17])))), ((+(((/* implicit */int) var_13))))));
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((unsigned short) ((short) ((((/* implicit */_Bool) 359985870U)) ? (((/* implicit */int) (unsigned short)40980)) : (var_1))))))));
                    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) arr_67 [i_17] [i_17] [i_17] [i_17]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_20 = 0; i_20 < 25; i_20 += 2) 
        {
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) arr_73 [i_17] [i_21] [i_21] [i_21] [(unsigned char)18] [i_17])), (var_3)))) < (((((/* implicit */int) arr_70 [i_17] [i_20] [i_21])) >> (((((1525613238U) >> (((var_7) - (5793015178590861587ULL))))) - (1489854U))))))))));
                        arr_75 [5U] [i_17] [i_17] [i_17] [i_22] [i_17] = ((/* implicit */signed char) ((((((/* implicit */int) arr_69 [i_17] [i_17])) | (((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_70 [i_17] [i_17] [15LL])))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                        var_39 ^= ((((/* implicit */_Bool) ((signed char) ((((-426676946) + (2147483647))) << (((3934981423U) - (3934981423U))))))) ? (((var_6) / (((((/* implicit */unsigned int) arr_65 [i_17])) & (var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))));
                    }
                    var_40 = (-(((/* implicit */int) max((arr_61 [i_17] [i_17]), (arr_61 [i_17] [i_17])))));
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (+(var_2))))));
                }
            } 
        } 
        var_42 = ((/* implicit */long long int) (unsigned short)55644);
        arr_76 [i_17] [i_17] = ((/* implicit */short) var_10);
    }
    for (short i_23 = 0; i_23 < 25; i_23 += 2) /* same iter space */
    {
        arr_79 [i_23] = ((/* implicit */int) var_16);
        arr_80 [i_23] [i_23] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_67 [i_23] [(unsigned char)3] [i_23] [i_23])) : (((/* implicit */int) arr_67 [i_23] [i_23] [i_23] [i_23]))))));
        arr_81 [i_23] [(unsigned short)0] = ((/* implicit */unsigned long long int) var_8);
    }
    var_43 ^= ((/* implicit */long long int) ((((/* implicit */int) var_15)) | (((/* implicit */int) var_8))));
}
