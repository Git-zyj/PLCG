/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19366
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
    var_13 = ((/* implicit */unsigned char) min(((-((-(var_4))))), (max((var_5), (min((var_4), (2229811810330330385ULL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_14 += ((/* implicit */unsigned int) (unsigned short)5287);
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_4) : (min((((/* implicit */unsigned long long int) var_9)), (arr_0 [i_0])))))) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) min(((!(((/* implicit */_Bool) var_1)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (arr_1 [i_0]))))))));
        var_16 = ((/* implicit */unsigned int) min(((~(arr_1 [i_0]))), (((/* implicit */unsigned long long int) var_0))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_10 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(var_10))))));
            arr_11 [i_2] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_11)) + (2147483647))) << (((((/* implicit */int) arr_5 [i_1] [(unsigned short)22])) - (69))))) / (((/* implicit */int) arr_5 [i_1 - 2] [i_1 + 1]))));
            var_17 = ((/* implicit */long long int) arr_4 [i_1 - 2]);
        }
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 3) 
                {
                    for (long long int i_6 = 2; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_18 = (+(((/* implicit */int) (unsigned char)221)));
                            var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_17 [i_5] [(unsigned char)13] [i_4] [i_5])) ? (var_12) : (((/* implicit */unsigned long long int) var_9)))) + (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))));
                            arr_22 [i_6] [i_3] [i_4] [i_5] [i_6 - 2] [i_4] [i_1 - 2] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_11))))));
                            arr_23 [(short)5] [i_4] [(unsigned char)23] [i_5 + 2] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)35))))) && (((/* implicit */_Bool) arr_15 [i_1 - 2] [i_1]))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                var_20 = (-(((((/* implicit */_Bool) arr_7 [i_7] [i_3])) ? (var_10) : (((/* implicit */long long int) arr_15 [i_1] [i_3])))));
                arr_27 [(short)1] [i_3] [(short)1] |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_3)) ? (var_10) : (((/* implicit */long long int) arr_20 [i_3] [i_3] [i_3] [i_7] [i_1] [i_3]))))));
                var_21 += ((/* implicit */unsigned char) (~(((/* implicit */int) arr_24 [i_7]))));
            }
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 4; i_10 < 20; i_10 += 3) 
                    {
                        {
                            arr_36 [(short)17] [(short)17] [i_8] [i_8] [i_10] [i_1] = ((/* implicit */unsigned int) ((790326730631659653LL) > (((/* implicit */long long int) ((int) (unsigned char)103)))));
                            arr_37 [i_1] [i_3] [i_8] [i_8] [19] = ((/* implicit */unsigned char) ((short) (~(-790326730631659654LL))));
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [i_1 - 2] [i_10 + 4] [14] [i_1 + 1] [(unsigned char)12])) ? (((/* implicit */int) ((unsigned char) 12765399107101134294ULL))) : (((/* implicit */int) arr_5 [i_1] [i_8]))));
                            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_1] [i_1 - 1] [i_3] [0ULL] [i_10 + 1])) >= (((/* implicit */int) var_3)))))));
                        }
                    } 
                } 
                var_24 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) || (((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 + 1]))));
            }
            var_25 |= ((/* implicit */signed char) ((arr_19 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
            /* LoopSeq 2 */
            for (short i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 24; i_12 += 3) 
                {
                    for (unsigned char i_13 = 1; i_13 < 23; i_13 += 3) 
                    {
                        {
                            var_26 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_9 [i_13]) : (((/* implicit */int) var_6)))))));
                            var_27 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)215)) ? (12765399107101134301ULL) : (9712061664434316223ULL)))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (int i_14 = 0; i_14 < 24; i_14 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (short)11797)) <= (((/* implicit */int) arr_17 [i_1] [20ULL] [i_11] [i_14])))))));
                    arr_47 [i_14] [i_11] [i_1] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_9)) != (var_12))) ? (arr_28 [(unsigned char)9] [i_3] [i_11] [(unsigned short)11]) : (((/* implicit */long long int) arr_41 [i_11] [i_3] [i_11] [i_14]))));
                }
                for (int i_15 = 0; i_15 < 24; i_15 += 3) /* same iter space */
                {
                    var_29 ^= ((/* implicit */unsigned char) (((-(arr_49 [i_15] [i_11] [i_3] [i_1]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207)))));
                    arr_51 [(short)15] [i_1 - 1] [i_3] [i_11] [(short)15] = ((/* implicit */unsigned char) ((var_0) >= (((/* implicit */long long int) arr_4 [i_1 - 1]))));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1 - 1] [i_15]))) / (((((/* implicit */_Bool) arr_9 [i_11])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                }
                for (unsigned char i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 3) /* same iter space */
                    {
                        var_31 ^= ((/* implicit */unsigned short) var_12);
                        arr_56 [(unsigned char)15] [i_3] [i_11] [i_16] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (arr_54 [i_1] [i_3] [i_11] [i_16] [i_1 - 2] [i_1])));
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 3) /* same iter space */
                    {
                        arr_60 [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) arr_35 [i_1] [i_3] [i_11] [i_3] [i_18])))) : ((+(arr_20 [i_1] [i_3] [i_3] [i_16] [i_18] [i_3])))));
                        var_32 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_1] [(unsigned char)4] [i_16] [i_16]))) + ((+(arr_19 [(unsigned short)16] [i_3] [i_11] [i_11] [i_18])))));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 3) /* same iter space */
                    {
                        arr_63 [i_11] [i_16] [i_11] [i_3] [i_11] = (~(((/* implicit */int) arr_33 [i_1 + 1] [i_3] [i_11] [i_1 - 2])));
                        arr_64 [i_11] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_38 [i_1] [i_3] [i_16] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_3] [(unsigned short)4] [i_16]))) : (var_4))));
                        arr_65 [i_11] = ((/* implicit */long long int) ((unsigned long long int) var_9));
                        var_33 = ((/* implicit */long long int) (-((~(var_5)))));
                    }
                    var_34 ^= ((/* implicit */unsigned long long int) var_8);
                    arr_66 [i_16] [i_11] [i_1] = ((((/* implicit */_Bool) arr_53 [i_16])) ? (((((/* implicit */_Bool) arr_53 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_1] [i_3] [(short)3] [i_11] [i_16]))) : (arr_54 [i_16] [i_16] [i_11] [i_16] [i_16] [i_16]))) : (((/* implicit */unsigned long long int) var_10)));
                }
                for (unsigned short i_20 = 1; i_20 < 23; i_20 += 3) 
                {
                    var_35 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (unsigned char)203)))) / ((+(((/* implicit */int) var_3))))));
                    var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_17 [i_20] [16LL] [16LL] [i_1]))))) & (((/* implicit */int) arr_59 [i_20 + 1] [i_3] [i_11] [10ULL] [i_3] [i_3] [(unsigned char)8])))))));
                    /* LoopSeq 2 */
                    for (short i_21 = 2; i_21 < 23; i_21 += 3) /* same iter space */
                    {
                        var_37 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_46 [i_3] [i_20] [(unsigned char)11] [9] [i_21 - 1] [i_21 - 2]))));
                        arr_72 [i_1] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_45 [i_3] [i_11] [17U] [i_20 + 1]))));
                        arr_73 [i_1] [i_3] [i_11] [i_11] [i_21] [i_11] = ((/* implicit */short) ((((/* implicit */int) arr_35 [i_1 - 2] [i_1 - 1] [i_20] [i_21 + 1] [(unsigned char)14])) ^ (((/* implicit */int) arr_35 [i_1 - 2] [i_1 - 2] [i_20 + 1] [i_21 - 2] [i_21 - 2]))));
                    }
                    for (short i_22 = 2; i_22 < 23; i_22 += 3) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) (-(arr_45 [i_1 - 2] [8] [i_11] [i_20]))))));
                        arr_77 [i_1] [i_3] [i_11] [(unsigned char)8] [(unsigned char)5] = ((/* implicit */unsigned char) arr_43 [i_1] [i_1 - 2] [19] [i_1 - 2]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_23 = 0; i_23 < 24; i_23 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned long long int) 7088974585724054992LL)) : (var_5)))));
                        var_40 = ((/* implicit */unsigned char) arr_35 [i_23] [i_20] [(unsigned char)9] [(signed char)14] [i_1]);
                        arr_80 [(signed char)8] [(short)6] [i_11] [i_11] [i_20] [i_23] [i_23] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_53 [i_20])) | (((/* implicit */int) arr_14 [i_20 - 1] [i_20 + 1] [(unsigned char)17] [i_20]))));
                        arr_81 [i_11] [i_1] [i_1] [i_11] [i_20 - 1] [i_23] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                    }
                }
            }
            for (short i_24 = 0; i_24 < 24; i_24 += 3) /* same iter space */
            {
                var_41 = ((/* implicit */short) (-(((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned char)75))))));
                var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((-790326730631659627LL) != (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1 + 1]))))))));
            }
        }
        for (short i_25 = 0; i_25 < 24; i_25 += 3) 
        {
            var_43 = ((/* implicit */long long int) var_7);
            var_44 *= var_1;
            var_45 = ((/* implicit */long long int) ((((/* implicit */int) (short)-13566)) & (((/* implicit */int) ((12765399107101134310ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)41))))))));
            arr_87 [i_25] = ((/* implicit */unsigned char) (+(arr_12 [i_1 - 2])));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_26 = 0; i_26 < 24; i_26 += 3) 
        {
            var_46 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
            var_47 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_67 [i_1 - 1] [i_1] [i_1 - 2] [i_1 + 1] [i_1]))));
        }
        for (unsigned long long int i_27 = 0; i_27 < 24; i_27 += 3) 
        {
            var_48 = ((/* implicit */int) ((((((/* implicit */long long int) -1097969574)) & (var_10))) & (arr_62 [i_1] [i_27] [i_1] [i_27] [i_27])));
            var_49 = ((/* implicit */short) ((((/* implicit */int) var_2)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
            arr_93 [i_1] [i_27] [i_27] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) var_5)))));
            var_50 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
            var_51 = ((/* implicit */unsigned int) 5681344966608417322ULL);
        }
    }
}
