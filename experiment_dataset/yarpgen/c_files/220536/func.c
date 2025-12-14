/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220536
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) arr_0 [i_0 - 1]))))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (signed char)-33))));
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (signed char i_4 = 4; i_4 < 20; i_4 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (unsigned char)30))));
                            arr_14 [i_0 + 1] [i_1] [(unsigned char)11] [i_2] [i_3] [i_1] = ((/* implicit */long long int) (unsigned char)255);
                        }
                    } 
                } 
            } 
            arr_15 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((short) (unsigned char)225));
            /* LoopSeq 1 */
            for (short i_5 = 2; i_5 < 19; i_5 += 2) 
            {
                arr_18 [i_1] [17U] [i_5] [i_5 + 3] = ((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_5]);
                /* LoopNest 2 */
                for (long long int i_6 = 3; i_6 < 19; i_6 += 3) 
                {
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */int) (short)31457)) | (((/* implicit */int) arr_8 [i_0] [(unsigned char)5] [i_5] [i_6] [i_0])))) ^ (((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) var_1))))));
                            var_19 *= ((/* implicit */unsigned int) (-(11868782045645470829ULL)));
                            arr_26 [i_0] [i_0] [i_0 + 1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((_Bool) (signed char)116)) ? ((~(arr_23 [i_0]))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_5] [i_5] [i_7])) ? (((/* implicit */int) var_10)) : ((-2147483647 - 1))))));
                            arr_27 [i_7] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_1] [i_1])) < (((/* implicit */int) (unsigned char)30))));
                            var_20 = ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [i_1] [i_5])) ? (((((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_0 - 1] [(signed char)4] [i_7])) ? (((/* implicit */int) (unsigned short)42136)) : (((/* implicit */int) arr_0 [i_5])))) : (((/* implicit */int) var_3)));
                        }
                    } 
                } 
                arr_28 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((short) (+(((/* implicit */int) (unsigned short)23400)))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 2; i_8 < 20; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_5 - 2] [i_8 - 2] [i_9 + 3])) % (((/* implicit */int) (unsigned short)42136)))))));
                            arr_35 [i_1] [i_1] [i_8] [i_8] [i_9] [i_9] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-19586)) ? (3501913545U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_31 [i_0]))))));
                            var_22 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [(_Bool)1]))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_8]))) / (var_0)))));
                            var_23 *= ((/* implicit */short) (unsigned short)42136);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    var_24 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 1] [i_0] [i_5] [i_10])) ? (((/* implicit */int) arr_36 [16] [i_5] [(_Bool)1])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0 + 1] [i_0 + 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_5] [i_5] [i_1] [i_5] [i_5])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_15)))))));
                    arr_39 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1] [i_1] [i_5] [i_5 + 3] [i_10]))) : (674896905U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)9497)) / (((/* implicit */int) arr_21 [i_10] [i_10] [i_10] [i_10])))))));
                }
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    arr_42 [i_0] [i_1] [i_5 - 1] [i_1] = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) 0LL)))));
                    var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)714)))) ? (((/* implicit */int) arr_38 [i_0 + 1] [i_1] [i_5 + 2] [i_11 + 1])) : (((/* implicit */int) arr_17 [i_0 - 1]))));
                }
            }
        }
        for (short i_12 = 1; i_12 < 21; i_12 += 1) 
        {
            arr_47 [i_0] [i_0] = ((/* implicit */unsigned char) (~((-(var_5)))));
            arr_48 [i_0] = ((/* implicit */int) var_7);
        }
        arr_49 [i_0] [(signed char)13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (arr_10 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23400)))));
    }
    for (short i_13 = 0; i_13 < 18; i_13 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_14 = 0; i_14 < 18; i_14 += 2) 
        {
            for (unsigned int i_15 = 1; i_15 < 15; i_15 += 3) 
            {
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    {
                        arr_65 [i_16] [i_15] [i_15] [i_13] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)35462)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned short)42135))))) ? ((~(((/* implicit */int) (short)-27207)))) : (((((/* implicit */_Bool) arr_0 [i_13])) ? (((/* implicit */int) arr_63 [i_16 + 1] [i_14] [i_13])) : (((/* implicit */int) (short)-23991))))))), (arr_52 [i_15] [i_16])));
                        var_26 = ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-64)) && (((/* implicit */_Bool) (unsigned char)1)))) ? (arr_2 [i_16 + 1] [i_15] [i_15 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_16 + 1] [i_15] [i_15 + 3])) || (((/* implicit */_Bool) arr_2 [i_16 + 1] [i_15] [i_15 + 1]))))))));
                        arr_66 [i_15] [i_14] [i_15] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((arr_23 [i_16]), (((/* implicit */int) arr_56 [i_15 + 3] [i_16 + 1]))))) * (((unsigned long long int) (!(((/* implicit */_Bool) 9062964014150421777ULL)))))));
                    }
                } 
            } 
        } 
        arr_67 [(unsigned short)12] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_41 [8ULL])))) >= (arr_52 [i_13] [i_13])));
        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((arr_36 [i_13] [i_13] [i_13]) ? (((/* implicit */int) arr_36 [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_36 [i_13] [i_13] [i_13]))))) & (((long long int) arr_36 [i_13] [i_13] [i_13])))))));
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((arr_9 [i_13] [i_13] [i_13] [i_13]) % (2416883428U))))) ? (max((((((/* implicit */_Bool) arr_10 [11] [i_13] [i_13] [i_13] [(short)10] [i_13] [i_13])) ? (arr_30 [i_13] [i_13] [i_13] [i_13] [i_13]) : (((/* implicit */unsigned long long int) arr_40 [i_13] [i_13] [i_13] [i_13])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_50 [i_13])) << (((((/* implicit */int) arr_60 [i_13])) + (3520)))))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(unsigned short)21] [(unsigned short)21] [i_13] [i_13] [i_13]))))))))));
    }
    for (unsigned char i_17 = 1; i_17 < 9; i_17 += 4) 
    {
        var_29 = ((/* implicit */short) (signed char)60);
        var_30 = ((/* implicit */unsigned short) ((arr_58 [i_17] [i_17]) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -8904547390188194152LL)) : (((unsigned long long int) (signed char)-64))))));
    }
    var_31 = ((/* implicit */unsigned short) var_11);
}
