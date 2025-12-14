/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233574
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
    var_13 = (+(((/* implicit */int) ((signed char) var_7))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))) : (((/* implicit */int) var_3))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
        {
            arr_6 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 + 2]))));
            var_15 = ((/* implicit */long long int) var_7);
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)2]))) * (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
            arr_7 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)93)) / (((/* implicit */int) (signed char)105))));
        }
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
        {
            var_17 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (signed char)-88))))) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (signed char)93))))));
            var_18 = ((/* implicit */int) (~(((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3730))) : (-6445622345207871503LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2])))))));
        }
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_4 = 2; i_4 < 9; i_4 += 4) 
            {
                var_19 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_10 [i_0 + 2])) | ((~(((/* implicit */int) (signed char)116))))))));
                var_20 += ((/* implicit */unsigned int) (((_Bool)1) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))) + (((/* implicit */int) arr_3 [i_4 + 1] [i_0 - 2])))) : (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_10 [i_4 - 1])) : (((/* implicit */int) (signed char)-110))))));
            }
            var_21 = ((/* implicit */_Bool) var_8);
        }
        var_22 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)1))))), (((arr_0 [i_0 - 2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [7ULL] [i_0 - 1])))))));
        var_23 = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
        /* LoopSeq 1 */
        for (int i_5 = 1; i_5 < 7; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 4; i_6 < 7; i_6 += 4) 
            {
                for (unsigned int i_7 = 1; i_7 < 8; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        {
                            arr_23 [i_5] = ((/* implicit */short) arr_9 [i_8] [i_6] [i_5 + 1]);
                            arr_24 [i_0] [i_0] [i_5] [0U] [i_0] = ((/* implicit */unsigned char) 893931232);
                            arr_25 [i_0] [i_5] [i_6] [i_7] [i_5] [i_6] = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_8 [i_7])))) - (((10314017791028031795ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
            } 
            arr_26 [i_0] [i_0] [i_5] = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (arr_0 [i_0 + 1])))));
            /* LoopNest 3 */
            for (unsigned short i_9 = 3; i_9 < 8; i_9 += 1) 
            {
                for (unsigned char i_10 = 2; i_10 < 9; i_10 += 4) 
                {
                    for (unsigned int i_11 = 3; i_11 < 8; i_11 += 4) 
                    {
                        {
                            arr_34 [i_0] [i_10] [i_9 + 1] [i_5] = ((/* implicit */unsigned char) var_6);
                            arr_35 [i_0] [7ULL] [7ULL] [(signed char)5] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)85)) ? (arr_19 [i_5] [i_5]) : (arr_19 [i_5] [i_5]))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [(short)2] [i_5 + 3])) << (((arr_18 [(short)6] [i_11 - 3] [(short)6] [i_5 + 3]) - (6499111786322749011ULL))))))));
                        }
                    } 
                } 
            } 
            arr_36 [i_5] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9762271479760469976ULL))))) : ((-(((/* implicit */int) (signed char)85))))));
            var_24 = ((/* implicit */signed char) (~(arr_12 [i_0] [(signed char)6] [i_0] [i_0])));
        }
    }
    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
    {
        arr_39 [i_12] [i_12] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)109)) % (((/* implicit */int) (unsigned short)55031)))) ^ (((((var_10) <= (((/* implicit */int) arr_38 [i_12])))) ? (((/* implicit */int) (signed char)-72)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_3))))))));
        var_25 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) <= ((~(arr_37 [3LL]))))))) - (arr_37 [(signed char)18]));
    }
    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_10))));
    /* LoopNest 3 */
    for (int i_13 = 1; i_13 < 13; i_13 += 4) 
    {
        for (unsigned long long int i_14 = 1; i_14 < 11; i_14 += 2) 
        {
            for (unsigned short i_15 = 2; i_15 < 11; i_15 += 2) 
            {
                {
                    arr_47 [i_13] [i_13] = ((/* implicit */short) ((_Bool) (+(((((/* implicit */int) arr_42 [i_13] [i_14] [i_13])) * (((/* implicit */int) (_Bool)1)))))));
                    arr_48 [i_13] [i_14 + 2] [i_14 + 3] [i_13] = ((/* implicit */long long int) ((((int) (+(((/* implicit */int) (signed char)33))))) > (((/* implicit */int) var_6))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
    {
        for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_18 = 1; i_18 < 7; i_18 += 4) 
                {
                    for (unsigned long long int i_19 = 3; i_19 < 7; i_19 += 3) 
                    {
                        {
                            arr_62 [i_19] [i_19 - 3] [i_16] [i_16] [i_16] [i_16] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_18]))) ? (((((/* implicit */_Bool) arr_44 [i_18] [i_18] [3LL])) ? (((/* implicit */int) (unsigned short)30715)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) min(((signed char)123), (((/* implicit */signed char) (_Bool)1)))))))), ((((_Bool)1) ? (arr_0 [i_17]) : (arr_0 [i_16 + 1]))));
                            arr_63 [i_16] [i_16] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))), (((arr_54 [i_16 + 1]) >> (((((/* implicit */int) (unsigned short)25497)) - (25451)))))));
                            arr_64 [i_16] = ((/* implicit */signed char) var_12);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_20 = 3; i_20 < 8; i_20 += 1) 
                {
                    for (short i_21 = 3; i_21 < 8; i_21 += 2) 
                    {
                        for (unsigned long long int i_22 = 2; i_22 < 8; i_22 += 2) 
                        {
                            {
                                arr_71 [i_16 + 1] [i_16 + 1] [i_20] [i_16] [i_22] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)32760))))));
                                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_12)))) ? (var_11) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32764)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-101))))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_23 = 2; i_23 < 9; i_23 += 2) 
                {
                    for (int i_24 = 1; i_24 < 9; i_24 += 1) 
                    {
                        {
                            arr_76 [i_16] [i_17] [i_23] [i_16] = ((/* implicit */short) ((((/* implicit */int) (signed char)-67)) + (((/* implicit */int) (_Bool)1))));
                            /* LoopSeq 2 */
                            for (long long int i_25 = 3; i_25 < 8; i_25 += 1) 
                            {
                                arr_79 [i_16] [i_16] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_0 [i_17])))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_25 - 1] [i_24 - 1] [i_16])))))) ? (((((/* implicit */_Bool) ((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_16] [i_16] [i_16]))) : (arr_68 [i_16])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_25] [i_17] [i_16]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))) % (arr_32 [i_25 - 1] [i_24 + 1] [(signed char)2] [i_23 - 1] [i_23 - 2] [i_17] [i_16 + 1]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))));
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */int) (signed char)120)) > (((/* implicit */int) (_Bool)1)))))));
                                var_29 -= ((/* implicit */signed char) (~((~(((/* implicit */int) (signed char)-74))))));
                                var_30 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_57 [i_24 + 1] [i_24 + 1] [i_24] [i_24]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_10 [i_16]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11)))) : (((arr_19 [i_17] [i_16]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_25] [i_23] [i_16])))))))) : (var_11));
                                arr_80 [i_16] = ((/* implicit */_Bool) (+(((arr_15 [i_23 + 1] [i_16 + 1] [i_16 + 1]) ? (((/* implicit */int) arr_15 [i_23 + 1] [i_16] [i_16 + 1])) : (((/* implicit */int) (short)4095))))));
                            }
                            for (unsigned int i_26 = 1; i_26 < 8; i_26 += 1) 
                            {
                                arr_83 [i_17] [i_17] [i_16] [i_17] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [i_26 + 1] [i_16] [i_16 + 1])) ? (((((/* implicit */_Bool) (short)29540)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) (signed char)-122)))) : ((+(((/* implicit */int) (signed char)-124))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) var_4)) - (4448)))))) ? (var_10) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((arr_9 [i_24] [9ULL] [9ULL]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) var_9)) ? (arr_66 [i_26] [i_23] [i_16 + 1]) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-122), ((signed char)124)))))))));
                                var_31 += ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)-31)))) <= ((-(((/* implicit */int) (_Bool)1))))));
                            }
                        }
                    } 
                } 
                var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)8591)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-34))) <= (576484678453006466ULL)))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))))))));
            }
        } 
    } 
}
