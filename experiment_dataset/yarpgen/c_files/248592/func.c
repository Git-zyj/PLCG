/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248592
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (_Bool)1))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_2] [(unsigned short)4])) ? (arr_7 [i_2 + 1] [i_2] [(short)12]) : (arr_7 [i_2 - 1] [i_2 - 1] [(signed char)14]))))));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((13091141888364418903ULL) ^ (((/* implicit */unsigned long long int) arr_1 [i_1])))) | (((arr_5 [i_0]) / (((/* implicit */unsigned long long int) 1383161970U))))));
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) arr_7 [(short)16] [i_2 + 2] [(short)16]))));
            }
            for (long long int i_3 = 4; i_3 < 18; i_3 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_4 = 2; i_4 < 19; i_4 += 1) 
                {
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */_Bool) ((signed char) (signed char)-126))) ? (((3155707965128734484ULL) ^ (((/* implicit */unsigned long long int) arr_11 [i_4] [i_3])))) : (arr_9 [i_3] [i_3] [i_1])))));
                    arr_15 [i_3] [i_3] [i_0] [i_3 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_4 [i_0] [i_3]))) ? (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])) : ((-(15291036108580817132ULL)))));
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_4] [i_3] [i_1] [i_0])))))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_13 [i_3] [i_3 + 2] [i_4 - 2] [i_4])) - (59675))))))));
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)125)) ? (((((/* implicit */_Bool) 441398999)) ? (((/* implicit */unsigned long long int) -441399012)) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((4294967295U) ^ (((/* implicit */unsigned int) -1142955271)))))));
                }
                for (int i_5 = 2; i_5 < 19; i_5 += 4) 
                {
                    arr_20 [i_0] [i_1] [i_3 - 2] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_3 - 4] [i_0]))));
                    arr_21 [i_0] [i_0] [i_0] [i_1] [4] [i_5] = ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]);
                }
                /* LoopSeq 2 */
                for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                {
                    var_17 -= ((/* implicit */long long int) ((((/* implicit */int) arr_23 [i_0] [i_3 - 2] [i_3] [i_6 - 1])) * (((/* implicit */int) arr_23 [i_0] [i_3 - 2] [i_3] [i_6 - 1]))));
                    var_18 = 441398992;
                    /* LoopSeq 4 */
                    for (short i_7 = 1; i_7 < 17; i_7 += 2) /* same iter space */
                    {
                        arr_28 [i_0] [i_3] [i_0] [i_6] [i_0] [i_3] [i_0] = ((/* implicit */_Bool) var_8);
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((var_0) && (((/* implicit */_Bool) arr_12 [9] [i_1] [i_3 + 1] [i_6])))))));
                        arr_29 [i_7] [i_6] [i_0] [19U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 13091141888364418904ULL)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) var_6))));
                        arr_30 [i_0] [i_6] [i_3 - 4] [i_1] [i_0] = ((/* implicit */unsigned short) ((long long int) 2784070131177673647LL));
                    }
                    for (short i_8 = 1; i_8 < 17; i_8 += 2) /* same iter space */
                    {
                        arr_33 [i_0] [i_0] [i_3] [i_6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2784070131177673647LL)) && (((/* implicit */_Bool) arr_25 [i_8 + 1] [1ULL] [i_8 + 3] [i_3] [i_3]))));
                        arr_34 [i_0] [i_6 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))) : (arr_22 [i_3 - 3] [i_3 - 3] [i_3 + 1] [i_3 - 4] [i_0])));
                        arr_35 [i_0] [i_1] [i_0] [i_0] [i_8] = ((((/* implicit */_Bool) ((unsigned short) 1775872128))) ? (((/* implicit */unsigned long long int) ((long long int) 3155707965128734489ULL))) : (((16118067068212382214ULL) | (((/* implicit */unsigned long long int) arr_22 [i_8] [i_8] [i_8 + 3] [i_8] [i_0])))));
                        arr_36 [i_0] [i_1] [i_0] [i_6 - 1] [14LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((arr_18 [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-126))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -618634620)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (short)-13705)))))));
                        var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_0])) | (((/* implicit */int) arr_32 [i_8 + 3] [i_1] [i_0]))))) || (((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_8] [i_6 - 1] [i_8])));
                    }
                    for (short i_9 = 1; i_9 < 17; i_9 += 2) /* same iter space */
                    {
                        arr_39 [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) (-((((_Bool)1) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) (signed char)126))))));
                        arr_40 [i_9] [i_6] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) arr_1 [i_0])))));
                    }
                    for (short i_10 = 1; i_10 < 17; i_10 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_11 [i_0] [i_0])))) && (((/* implicit */_Bool) ((arr_27 [i_1] [i_6] [i_0] [i_1] [i_0]) >> (((/* implicit */int) (unsigned short)0)))))));
                        arr_43 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_0] [i_1] [(unsigned char)19] [i_6] [i_6])) ? (-2784070131177673636LL) : (((/* implicit */long long int) 2914633395U))))) ? (((((/* implicit */_Bool) arr_32 [i_0] [i_6 - 1] [i_10])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))) : (arr_42 [i_0] [i_1] [i_3] [i_0] [i_10])));
                        arr_44 [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) (+(arr_7 [i_6] [i_3] [i_0])));
                    }
                }
                for (unsigned short i_11 = 1; i_11 < 17; i_11 += 1) 
                {
                    arr_47 [i_0] [i_1] = ((/* implicit */short) arr_32 [i_3 - 1] [i_3 - 4] [i_3 + 2]);
                    var_22 = -2784070131177673644LL;
                    arr_48 [i_0] = arr_5 [i_0];
                }
                var_23 = ((/* implicit */_Bool) arr_31 [i_0] [(unsigned short)19] [i_1] [i_0]);
                arr_49 [i_0] = ((((/* implicit */_Bool) arr_42 [i_3 + 2] [i_0] [i_3 - 3] [i_0] [i_3 - 1])) ? (((/* implicit */int) (unsigned short)13218)) : (((/* implicit */int) arr_38 [i_3] [i_3] [i_3 + 1] [i_3 - 2] [i_0])));
            }
            /* LoopSeq 1 */
            for (int i_12 = 3; i_12 < 18; i_12 += 2) 
            {
                arr_53 [i_0] [i_0] [i_12] [i_0] = arr_22 [i_1] [i_1] [i_12] [i_12] [i_0];
                var_24 = ((/* implicit */long long int) (_Bool)0);
                arr_54 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_12] [i_12 - 3] [i_12 - 2]))) | (258520680U)));
            }
        }
        /* vectorizable */
        for (signed char i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                for (unsigned char i_15 = 1; i_15 < 18; i_15 += 3) 
                {
                    {
                        arr_64 [i_15] [i_0] [i_0] [i_0] = ((/* implicit */short) -7074757680530555774LL);
                        arr_65 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_13] [i_0] [i_15]))) | (var_8)))));
                    }
                } 
            } 
            arr_66 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_0] [i_0] [i_13])) ? (arr_9 [2] [i_13] [i_13]) : (arr_9 [i_0] [i_0] [i_0])));
            var_25 = ((/* implicit */_Bool) 4294967280U);
        }
        for (signed char i_16 = 0; i_16 < 20; i_16 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                var_26 = ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_16 [i_0] [i_16] [i_16] [i_0])), (arr_38 [i_16] [i_16] [i_16] [i_16] [i_0])))) ? (min((1795149574U), (((/* implicit */unsigned int) 508)))) : (((/* implicit */unsigned int) min((343863541), (((/* implicit */int) (unsigned short)49636)))))));
                var_27 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_25 [(signed char)13] [i_17] [i_0] [i_0] [i_0]))) ? (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 22ULL)) && ((_Bool)1)))))))) ? (((long long int) ((((/* implicit */int) (unsigned short)15900)) >> (((1210670526U) - (1210670518U)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4294967288U)), (var_7)))) ? (((unsigned int) 18446744073709551581ULL)) : ((-(var_9))))))));
                /* LoopNest 2 */
                for (unsigned char i_18 = 4; i_18 < 18; i_18 += 3) 
                {
                    for (unsigned int i_19 = 1; i_19 < 16; i_19 += 2) 
                    {
                        {
                            arr_77 [i_0] [i_0] [i_0] [i_18] [i_16] = ((/* implicit */short) ((((_Bool) -2784070131177673629LL)) ? (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (max((arr_9 [i_18] [10ULL] [i_16]), (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_0] [0U] [i_0] [i_0] [i_0])))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19362))) / (15599074313868606316ULL))))) : (((/* implicit */unsigned long long int) arr_67 [i_19]))));
                            var_28 = ((/* implicit */signed char) arr_75 [i_0] [17U] [i_0] [i_18] [i_19 + 2]);
                        }
                    } 
                } 
            }
            var_29 = (+(((unsigned long long int) (unsigned short)19336)));
            var_30 *= ((/* implicit */unsigned short) min((min((arr_5 [6U]), (((/* implicit */unsigned long long int) -2784070131177673636LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((unsigned int) 117440512U)) : (2407895857U))))));
            var_31 = ((/* implicit */int) max((((/* implicit */unsigned int) arr_19 [i_16] [i_0])), (min((((/* implicit */unsigned int) var_6)), ((-(var_8)))))));
        }
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0])) && ((!(((/* implicit */_Bool) arr_38 [12] [12] [12] [i_0] [i_0]))))))))));
    }
    for (unsigned char i_20 = 2; i_20 < 8; i_20 += 2) 
    {
        arr_80 [i_20 - 1] [i_20 + 1] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_56 [i_20 + 3] [i_20])) ? (((/* implicit */int) (short)-28092)) : (arr_56 [i_20] [i_20])))), (18446744073709551566ULL)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_21 = 3; i_21 < 11; i_21 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_22 = 1; i_22 < 10; i_22 += 1) 
            {
                for (unsigned short i_23 = 0; i_23 < 12; i_23 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_24 = 2; i_24 < 11; i_24 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
                            arr_91 [i_23] [i_22] [i_23] [(unsigned short)8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >> (((/* implicit */int) (_Bool)1))));
                            arr_92 [i_20] [i_22] = ((/* implicit */int) -137254608497330216LL);
                            arr_93 [i_22] [4U] [i_22 + 1] [i_21] [i_20] [i_22] = ((/* implicit */unsigned short) arr_61 [i_22] [i_22 - 1] [i_22]);
                            arr_94 [i_20] [i_22] [i_20 + 1] [i_22] [i_20 - 1] [i_20] = ((/* implicit */unsigned char) var_1);
                        }
                        for (unsigned long long int i_25 = 1; i_25 < 10; i_25 += 3) 
                        {
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) -343863531))) ? (((((/* implicit */long long int) var_9)) | (-137254608497330219LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
                            var_35 ^= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned short) (unsigned char)233)))));
                            var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4096)) || (((/* implicit */_Bool) -137254608497330206LL))))))));
                            var_37 *= ((/* implicit */_Bool) ((short) arr_57 [i_20] [i_20]));
                        }
                        arr_97 [i_20] [i_20] [i_22] [i_20] = ((/* implicit */long long int) (_Bool)1);
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)55))) / (4294967280U)));
                        arr_98 [i_22] [i_22] = ((/* implicit */signed char) ((arr_23 [i_20] [i_20] [i_22] [i_20]) ? (((((/* implicit */int) (unsigned char)85)) ^ (((/* implicit */int) var_3)))) : (((arr_56 [i_22] [i_22]) | (681274358)))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (short i_26 = 0; i_26 < 12; i_26 += 1) 
            {
                var_39 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_55 [i_20 - 2] [i_21])) ? (arr_55 [i_20 + 3] [i_21]) : (arr_55 [i_20 + 3] [(unsigned short)3])));
                arr_102 [i_20] [i_21 - 2] [i_21 - 2] = ((/* implicit */unsigned long long int) ((arr_58 [i_26] [11LL] [11LL]) && (((/* implicit */_Bool) arr_22 [i_20] [i_20] [i_21] [i_21 - 3] [i_20]))));
            }
            var_40 = ((/* implicit */unsigned long long int) arr_41 [i_21 - 2] [i_21] [i_21 - 3] [i_20 + 1] [i_20 + 4]);
        }
        for (short i_27 = 1; i_27 < 11; i_27 += 2) 
        {
            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 233268314)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) (unsigned char)168)))))));
            arr_105 [i_20] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_25 [i_20] [i_27 + 1] [i_20 - 1] [i_20] [i_27])) ? (arr_25 [i_20] [i_27 - 1] [i_20 - 2] [i_27 - 1] [i_20]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_20 + 2] [i_27 + 1] [i_20 + 4] [i_20 + 1]))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_14 [i_20] [i_20]))))));
            arr_106 [i_27] [i_20] = max((((/* implicit */unsigned int) (unsigned char)31)), (11U));
            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 20U)) ? (-1987166725) : (((/* implicit */int) arr_103 [i_20] [i_27])))))))));
        }
        /* LoopNest 3 */
        for (unsigned short i_28 = 1; i_28 < 9; i_28 += 1) 
        {
            for (signed char i_29 = 4; i_29 < 8; i_29 += 1) 
            {
                for (unsigned int i_30 = 2; i_30 < 11; i_30 += 3) 
                {
                    {
                        var_43 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_61 [i_29] [i_29] [i_29])) ? (((/* implicit */int) arr_75 [i_30] [i_30] [i_29 + 1] [i_28 - 1] [i_20])) : (((/* implicit */int) (unsigned short)27366))))) ? (min((4286578688ULL), (((/* implicit */unsigned long long int) arr_75 [i_20] [i_20] [i_28 + 1] [i_20] [(short)2])))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_67 [i_29])), (-20LL)))))) >> (((min(((-(var_7))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)27366)), (4294967288U)))))) - (27357ULL)))));
                        var_44 = ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((/* implicit */unsigned long long int) (+(15U)))) : (((unsigned long long int) 17LL)));
                        var_45 = ((/* implicit */unsigned int) arr_86 [i_20] [i_20] [i_20] [i_29]);
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_31 = 2; i_31 < 17; i_31 += 4) 
    {
        arr_119 [i_31 - 2] = ((/* implicit */unsigned int) -9029701895743694281LL);
        var_46 -= ((/* implicit */short) ((((((/* implicit */_Bool) (-(-20LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-115))) ^ (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_31] [i_31 + 1] [i_31 - 1] [i_31]))))) >= (((/* implicit */unsigned long long int) -8LL))));
        var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) var_8))));
    }
}
