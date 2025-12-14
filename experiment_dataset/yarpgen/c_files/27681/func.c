/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27681
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
    var_12 = ((/* implicit */signed char) var_7);
    var_13 = var_9;
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_5))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_15 *= ((/* implicit */signed char) arr_2 [(signed char)10]);
        var_16 = ((/* implicit */signed char) max((var_16), (var_11)));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                for (int i_3 = 3; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_9 [i_0] [i_0 + 1] [i_0] [i_0]))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_0] [i_3] [(unsigned char)12] [i_3] [i_3] [i_3]))));
                        arr_12 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) var_1);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_6)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (-1813033335)))) ? (((/* implicit */int) arr_0 [(signed char)4])) : (((((/* implicit */_Bool) arr_11 [14ULL] [8ULL] [(short)16] [i_0 + 1] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(_Bool)1])) : (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0])))))) : (((/* implicit */int) (signed char)(-127 - 1))))))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                for (signed char i_6 = 3; i_6 < 17; i_6 += 3) 
                {
                    {
                        arr_21 [i_0 - 1] [i_0] [i_5] [i_6 - 2] = ((_Bool) ((arr_13 [i_5] [i_6 + 1] [i_6]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [8U] [i_6 - 1] [i_6]))) : (var_5)));
                        arr_22 [2U] [i_4] [i_0] [i_4] = ((/* implicit */_Bool) ((long long int) max((((int) var_11)), (((/* implicit */int) arr_13 [i_0] [i_5] [i_6])))));
                        arr_23 [i_0] [i_6 - 3] [i_6] [i_6] = ((/* implicit */unsigned char) min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4))), ((-((+(arr_6 [i_0])))))));
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_11 [i_5] [i_6 - 1] [i_6] [i_5] [i_4] [i_5]))));
                            var_21 = ((/* implicit */signed char) (-(arr_26 [i_0])));
                            arr_27 [i_0] [i_4] [i_5] [i_0] [i_7] = ((/* implicit */signed char) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((long long int) arr_1 [i_0]));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (signed char)100))));
                            arr_30 [i_4] [i_0] [i_5] [i_0] [i_0 - 1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)198)) ? (arr_9 [i_0 + 1] [i_6 - 1] [i_8] [3ULL]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242)))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_18 [i_0]))) ? (arr_18 [i_0]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 577825013)) ? (2136338886U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17193))))))) : ((-(((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0]))))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_0] [i_4] [i_0] [i_0] [i_8])) & (((/* implicit */int) var_2))));
                        }
                        arr_31 [i_0] [i_4] [i_4] [i_0] [i_6] = ((/* implicit */_Bool) 3809775198U);
                    }
                } 
            } 
            arr_32 [(signed char)1] [i_0] [i_4] = ((/* implicit */unsigned int) arr_17 [i_0]);
        }
    }
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
    {
        arr_35 [i_9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_33 [i_9] [(short)20]))));
        /* LoopSeq 1 */
        for (int i_10 = 0; i_10 < 23; i_10 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
            {
                arr_42 [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_11] [i_10] [i_11])) ? (((/* implicit */int) min((arr_41 [i_9] [i_11]), (arr_40 [i_10])))) : ((+((-(((/* implicit */int) var_1))))))));
                var_26 = ((/* implicit */signed char) min((min((arr_39 [i_9] [i_10] [i_11]), (((/* implicit */unsigned long long int) arr_36 [(unsigned char)9] [i_10])))), (((unsigned long long int) arr_39 [i_9] [i_10] [i_11]))));
                arr_43 [i_11] [21] [i_11] [i_11] = ((/* implicit */unsigned int) var_6);
                arr_44 [i_11] [i_11] [i_11] [i_9] = ((/* implicit */unsigned short) arr_34 [i_10]);
            }
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_13 = 0; i_13 < 23; i_13 += 1) 
                {
                    arr_49 [i_10] [16U] [i_10] [i_10] [(signed char)14] [i_12] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_40 [i_10]), (arr_40 [i_9]))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_9] [i_10] [i_13])) ? (4395899027456ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_9] [i_10] [i_12] [i_13]))) : (arr_37 [(_Bool)1])))));
                    arr_50 [i_12] [i_12] [i_10] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((var_10) * (((/* implicit */unsigned long long int) 2136338886U)))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_34 [i_10])) ? (arr_37 [i_10]) : (arr_39 [i_9] [i_10] [i_12])))))));
                    arr_51 [i_12] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((unsigned long long int) arr_45 [i_13] [i_13] [i_13]));
                    arr_52 [i_9] [i_9] [i_9] [13LL] [i_9] [i_12] = ((/* implicit */unsigned long long int) arr_45 [i_13] [i_12] [i_10]);
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        arr_55 [i_9] [i_10] [i_12] [i_9] [i_14 - 1] [i_9] = ((/* implicit */short) ((unsigned int) var_1));
                        arr_56 [i_9] [i_12] [i_12] [i_9] [i_9] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)10))) : (arr_38 [i_14 - 1] [i_14] [i_14 - 1])))));
                        var_27 = ((/* implicit */int) var_8);
                        arr_57 [i_12] [i_9] [i_9] [i_13] [i_12] [i_14] [i_9] = ((/* implicit */signed char) max(((~(arr_53 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_13] [2]))), ((-(arr_53 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14] [i_12])))));
                    }
                }
                for (signed char i_15 = 2; i_15 < 20; i_15 += 3) 
                {
                    arr_60 [i_9] [i_10] [i_12] [i_12] [i_15] [i_12] = ((/* implicit */signed char) ((unsigned char) ((unsigned int) arr_47 [i_15] [i_12] [i_10])));
                    arr_61 [i_12] [i_10] [(short)17] [i_15 + 3] = ((/* implicit */signed char) (+(var_9)));
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!((_Bool)1)))), (var_5))))));
                }
                arr_62 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_34 [15U]), (arr_34 [i_12])))) && (((/* implicit */_Bool) arr_34 [i_10]))));
            }
            for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 1) 
            {
                arr_66 [i_9] [i_9] [i_10] [i_16] &= ((/* implicit */long long int) arr_39 [i_9] [i_9] [i_9]);
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 23; i_17 += 4) 
                {
                    for (unsigned char i_18 = 0; i_18 < 23; i_18 += 4) 
                    {
                        {
                            var_29 += ((/* implicit */signed char) max(((!(((/* implicit */_Bool) arr_71 [i_9] [i_9] [i_16] [i_10] [(unsigned char)10])))), ((!(((/* implicit */_Bool) arr_71 [i_9] [19U] [i_9] [i_9] [i_9]))))));
                            arr_72 [i_9] [i_10] [i_9] [i_18] [(signed char)14] = ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_68 [i_9] [i_9] [i_9] [1])) : (((/* implicit */int) arr_41 [i_10] [i_9]))));
                            arr_73 [i_9] [i_10] [i_16] [i_17] [i_18] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) arr_65 [i_9] [i_9] [i_9])), (var_5))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_63 [i_10] [i_16] [i_10])) : (((/* implicit */int) var_8))))), (((unsigned long long int) var_8))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 23; i_19 += 4) 
                {
                    for (unsigned int i_20 = 1; i_20 < 21; i_20 += 1) 
                    {
                        {
                            var_30 *= arr_33 [i_20 - 1] [i_20 - 1];
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (~(((/* implicit */int) arr_74 [i_20 + 2] [(_Bool)1] [i_20 - 1] [i_20 + 2])))))));
                            arr_81 [i_20] [i_20] [i_16] [i_20] [i_20] = ((/* implicit */signed char) max(((~(((/* implicit */int) var_8)))), (((/* implicit */int) var_8))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 3) 
            {
                arr_86 [i_9] [i_9] [i_21] = ((/* implicit */long long int) 4294967276U);
                var_32 = ((/* implicit */short) arr_41 [i_10] [i_9]);
                var_33 ^= ((/* implicit */unsigned int) var_2);
                var_34 = ((/* implicit */signed char) arr_59 [i_9] [i_9] [i_10] [i_21]);
            }
            arr_87 [i_10] [i_10] [i_9] &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((_Bool) 10ULL))), (((((/* implicit */_Bool) (short)-27438)) ? (21U) : (arr_34 [i_9])))));
            arr_88 [i_9] [i_10] [i_10] = ((/* implicit */signed char) ((unsigned int) ((signed char) arr_80 [i_10] [i_9] [i_10] [i_9] [i_9] [i_9] [i_9])));
        }
        /* LoopNest 3 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                for (unsigned int i_24 = 0; i_24 < 23; i_24 += 4) 
                {
                    {
                        arr_98 [i_23] [i_24] [i_24] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_77 [i_9] [i_23]))) - (9223372036854775793LL)))), (min((arr_37 [i_24]), (arr_37 [i_9])))));
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_96 [i_9] [i_22] [13LL] [i_23] [i_24])))) ? (var_5) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15316332631749137094ULL))))))));
                    }
                } 
            } 
        } 
    }
}
