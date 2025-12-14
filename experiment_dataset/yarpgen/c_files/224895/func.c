/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224895
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
    var_16 = ((/* implicit */int) var_7);
    var_17 = min((((/* implicit */long long int) ((1352477047988207102LL) != (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (-6103071531694991713LL));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_18 = min((((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) ? (arr_1 [8LL] [8LL]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2052107700)) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) var_5))))))), (((/* implicit */long long int) 2047U)));
        arr_2 [i_0 - 1] [i_0] = max((((/* implicit */unsigned short) ((signed char) var_5))), (((unsigned short) arr_1 [i_0] [i_0 + 1])));
        var_19 = arr_1 [(unsigned short)10] [(unsigned short)10];
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_6 [2U] [2U] = ((/* implicit */unsigned int) ((short) ((unsigned int) arr_3 [i_1 - 1])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_3 = 3; i_3 < 11; i_3 += 4) 
            {
                var_20 = ((/* implicit */_Bool) ((unsigned char) arr_9 [(unsigned char)9] [i_2 + 3] [i_3 + 3]));
                arr_13 [i_2] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))));
                var_21 = ((/* implicit */_Bool) (short)-26009);
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_2]))))) ? (arr_3 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                arr_14 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
            }
            for (unsigned long long int i_4 = 4; i_4 < 13; i_4 += 1) 
            {
                arr_18 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) -3678025672259720887LL)) || (((/* implicit */_Bool) 2393604153150106440LL))));
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (_Bool)1))));
            }
            for (unsigned char i_5 = 1; i_5 < 12; i_5 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) (_Bool)0);
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (0LL) : (-6098253935202117379LL)));
                        var_26 = ((/* implicit */signed char) ((_Bool) arr_15 [i_1] [i_1] [i_2 - 1] [i_2]));
                        arr_27 [i_7] [i_7] [i_5] = ((/* implicit */signed char) (+(arr_1 [i_1 + 2] [i_1])));
                    }
                    var_27 = ((/* implicit */unsigned short) arr_21 [i_1] [i_1 + 2] [2LL] [i_2 + 3] [i_5 + 2]);
                    var_28 = ((/* implicit */_Bool) ((arr_8 [i_1 + 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                }
                for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    var_29 = ((/* implicit */int) var_7);
                    var_30 = arr_0 [6ULL];
                }
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    var_31 = ((/* implicit */short) (-(-11LL)));
                    arr_34 [i_5] = ((unsigned long long int) ((((/* implicit */_Bool) -9223372036854775779LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7171))) : (2393604153150106440LL)));
                    var_32 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    arr_38 [i_1] [i_5] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5563053815153537773LL)));
                    var_33 |= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        arr_41 [i_5] = ((/* implicit */int) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4090764231U)));
                        var_34 = ((/* implicit */unsigned int) arr_7 [i_2] [i_10] [i_11]);
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 9032999139781100964ULL))))) << (((((/* implicit */int) var_6)) - (235)))));
                        arr_42 [i_1] [i_2] [i_5] [i_1] [8LL] [i_10] [i_5] = ((/* implicit */long long int) arr_33 [i_1] [i_2 - 1] [i_10] [i_10] [i_11]);
                        var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_5] [i_2 + 2] [i_2] [i_5])) ? ((+(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) arr_36 [i_2 + 3] [i_2 + 3] [i_10] [i_5]))));
                    }
                    for (long long int i_12 = 2; i_12 < 10; i_12 += 1) 
                    {
                        arr_45 [i_1] [i_1] [i_1] [(short)10] [i_5] = ((/* implicit */long long int) arr_3 [i_1 + 1]);
                        arr_46 [6ULL] [i_2] [i_5] [i_5] [i_12] [i_12] = ((/* implicit */unsigned long long int) arr_5 [i_10]);
                        var_37 = ((/* implicit */long long int) (short)25736);
                        var_38 = arr_40 [(short)5] [i_2 - 1] [i_2] [(unsigned char)11] [i_2];
                        arr_47 [i_12] [i_5] [i_5] [(short)1] = ((/* implicit */unsigned short) ((int) var_5));
                    }
                    var_39 = ((/* implicit */signed char) arr_3 [i_1 - 1]);
                    var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -2LL))));
                }
                var_41 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) -3163068145906523112LL)) ? (((/* implicit */int) (signed char)125)) : (arr_44 [i_1] [i_2] [(short)6] [3LL] [3LL] [i_5])))));
            }
            arr_48 [(unsigned short)2] [i_2] = ((/* implicit */long long int) var_1);
        }
        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-1)) ? (min((-2393604153150106453LL), (((/* implicit */long long int) arr_4 [i_1 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        arr_49 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 24U)) ? (((/* implicit */long long int) -1948342255)) : (-4147403711414855981LL)));
    }
    /* vectorizable */
    for (unsigned char i_13 = 1; i_13 < 12; i_13 += 3) /* same iter space */
    {
        arr_53 [8LL] = ((/* implicit */unsigned char) 18446744073709551602ULL);
        arr_54 [i_13] = ((((/* implicit */_Bool) (-(2126159431296300491ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)195))))) : (((/* implicit */int) (!(var_1)))));
        arr_55 [i_13] [2] = ((/* implicit */long long int) -681391116);
        /* LoopSeq 2 */
        for (int i_14 = 0; i_14 < 14; i_14 += 3) 
        {
            var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_13 + 2])) ? (var_0) : (((/* implicit */unsigned long long int) ((var_14) ? (11LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
            var_44 = ((/* implicit */int) ((((/* implicit */_Bool) 9170534714160032214LL)) ? (-2LL) : (-1LL)));
        }
        for (int i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            var_45 = ((/* implicit */unsigned int) var_7);
            var_46 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_13] [i_15] [i_15]))) : (arr_52 [i_13 + 2])));
            arr_61 [i_15] [4LL] [i_13] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        }
    }
    /* LoopSeq 3 */
    for (unsigned int i_16 = 1; i_16 < 13; i_16 += 1) 
    {
        var_47 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_16 + 2])) ? (((/* implicit */int) ((_Bool) -886093853))) : (((/* implicit */int) arr_62 [i_16 - 1])))))));
        arr_64 [i_16] [i_16] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_62 [i_16 + 4])) ? (((/* implicit */int) arr_62 [i_16 + 4])) : (((/* implicit */int) arr_62 [i_16 - 1])))), (((/* implicit */int) (unsigned short)59335))));
        arr_65 [16ULL] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_63 [i_16 - 1]))) ? (-2393604153150106441LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_62 [i_16 + 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_62 [(unsigned char)9])))))));
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 13; i_17 += 4) 
    {
        var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) arr_28 [12U] [12U] [i_17] [i_17]))));
        arr_68 [i_17 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_17] [i_17] [i_17 - 1])) < (((/* implicit */int) arr_35 [10ULL] [i_17] [i_17] [(unsigned char)8]))))) >> ((((-(((/* implicit */int) (_Bool)1)))) + (29)))));
        var_49 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (arr_66 [i_17 + 1] [i_17 - 1]) : ((-(var_15)))));
        /* LoopSeq 2 */
        for (long long int i_18 = 0; i_18 < 14; i_18 += 4) 
        {
            arr_72 [i_18] = ((/* implicit */unsigned char) arr_29 [i_17] [(unsigned char)8] [1LL] [(unsigned char)8]);
            arr_73 [i_17] [i_17] [i_17 - 1] = ((/* implicit */short) ((_Bool) arr_62 [i_17 + 1]));
        }
        for (long long int i_19 = 2; i_19 < 13; i_19 += 1) 
        {
            var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3199826909375577981LL)) ? (9170534714160032214LL) : (3086416454176189850LL)));
            var_51 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 27LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)65))) : (9170534714160032214LL)))) * (arr_28 [i_19] [i_17 - 1] [(unsigned short)8] [i_19 + 1])));
            var_52 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
        }
    }
    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
    {
        arr_79 [8LL] [i_20] = ((/* implicit */long long int) arr_51 [i_20] [(unsigned char)5]);
        var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) var_7))));
        var_54 = ((/* implicit */unsigned short) arr_9 [(unsigned short)10] [i_20] [i_20]);
        var_55 = ((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)-12791)));
        var_56 = ((/* implicit */_Bool) arr_7 [i_20] [i_20] [i_20]);
    }
}
