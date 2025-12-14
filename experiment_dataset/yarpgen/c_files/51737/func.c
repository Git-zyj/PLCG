/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51737
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) arr_1 [11LL] [i_0 - 1]))))));
        var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0])) ? (-16) : (-31))))));
    }
    var_21 = ((/* implicit */unsigned char) min((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_1] [i_2] = ((/* implicit */_Bool) arr_1 [i_1] [i_2]);
            arr_8 [i_1] [i_2] = ((/* implicit */short) (+(arr_6 [i_1] [i_2])));
        }
        /* LoopNest 3 */
        for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 6; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 2) 
                {
                    {
                        var_22 *= ((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (arr_12 [i_4 - 1] [i_5] [i_3 + 1])));
                        var_23 = ((/* implicit */long long int) (+(((/* implicit */int) var_16))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (3058748199U)));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                    {
                        {
                            var_25 *= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_10] [i_9] [i_6] [i_6]))) : (558446353793941504LL)))) == (0ULL));
                            arr_29 [i_6] [i_7] [i_8] [i_9] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_23 [i_6] [i_7] [i_6] [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))) == (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)96))) < (var_1))))));
                            var_26 = ((((/* implicit */_Bool) arr_17 [i_6])) ? (((/* implicit */int) arr_27 [i_10] [i_10 + 1] [i_10] [i_10] [i_10] [i_10 + 1] [i_10 + 1])) : (((/* implicit */int) var_5)));
                            var_27 = ((/* implicit */short) ((0U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10 + 1])))));
                        }
                    } 
                } 
            } 
            var_28 *= ((/* implicit */_Bool) ((unsigned short) var_2));
            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6] [i_6] [i_7] [i_7]))) : (10975258959869333402ULL)));
            var_30 = ((/* implicit */unsigned int) arr_19 [i_6] [i_7]);
            arr_30 [i_6] [i_7] = ((/* implicit */short) 18108232963469903674ULL);
        }
        var_31 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) % (((/* implicit */int) (short)(-32767 - 1)))));
    }
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (short i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 4) 
            {
                for (int i_14 = 2; i_14 < 16; i_14 += 2) 
                {
                    {
                        var_32 = ((/* implicit */unsigned int) (short)9702);
                        var_33 *= min((((((/* implicit */unsigned int) ((/* implicit */int) max((var_13), (((/* implicit */short) (unsigned char)70)))))) / (arr_0 [i_12]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_41 [i_14] [i_12] [i_14]), (((/* implicit */unsigned short) arr_1 [i_11 - 1] [i_11 - 1]))))) ? (arr_36 [i_11 - 1] [i_12] [i_14 + 2]) : (((/* implicit */int) (unsigned short)24576))))));
                        var_34 *= 4294967295U;
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 2) 
        {
            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) max(((~(arr_40 [i_11] [i_11] [i_15] [i_15] [i_15]))), (((/* implicit */long long int) arr_37 [i_11 - 1] [i_15])))))));
            /* LoopSeq 3 */
            for (int i_16 = 1; i_16 < 14; i_16 += 2) 
            {
                var_36 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-107))) <= ((+(18446744073709551615ULL)))));
                var_37 = 7829364955447936259LL;
                var_38 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29859)) ? (((/* implicit */int) (unsigned short)26700)) : ((-2147483647 - 1))))), (288230341791973376ULL)));
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_39 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) min((arr_39 [i_11] [i_15]), (334763959U))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8898342063713147254ULL)) && (((/* implicit */_Bool) 18446744073709551596ULL)))))) == (max((((/* implicit */unsigned long long int) var_2)), (var_9)))))) : ((-(((/* implicit */int) ((((/* implicit */unsigned int) 4063232)) == (4294967295U))))))));
                var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) var_2))));
                var_41 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_32 [i_11])))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_11]))) > (0LL))))));
                var_42 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (min((min((var_14), (((/* implicit */unsigned int) arr_32 [i_11])))), (1205194288U)))));
            }
            for (unsigned short i_18 = 3; i_18 < 16; i_18 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_19 = 2; i_19 < 16; i_19 += 2) 
                {
                    for (unsigned long long int i_20 = 2; i_20 < 14; i_20 += 2) 
                    {
                        {
                            var_43 = ((/* implicit */short) max((max((arr_52 [i_11]), (arr_52 [i_11]))), (((/* implicit */signed char) var_5))));
                            var_44 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(max((1190049826510117636ULL), (((/* implicit */unsigned long long int) arr_60 [i_11] [i_15] [i_18] [i_18] [i_19] [i_19 - 2] [i_15]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))) : (((((/* implicit */_Bool) arr_55 [i_11 - 1] [i_18 + 2] [i_18] [i_20 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_42 [i_18])), ((short)32761))))) : (((unsigned int) 4593671619917905920LL))))));
                            var_45 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) (~(arr_0 [i_20])))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_18 - 1] [i_19] [i_18] [i_19]))) & (9987728970244114106ULL))))) == (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_46 [i_11 - 1] [i_18 + 1] [i_18 + 1] [i_19 + 2]))))));
                        }
                    } 
                } 
                var_46 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1205194312U)))))) | ((~(18446744073709551614ULL)))))) ? (18446744073709551615ULL) : (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (min((((/* implicit */unsigned long long int) var_3)), (5ULL))))));
                var_47 = ((/* implicit */unsigned char) 4115401115564715937ULL);
                arr_61 [i_11 - 1] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) min((((/* implicit */unsigned short) ((var_14) > (arr_39 [i_11 - 1] [i_11 - 1])))), ((unsigned short)4604))))));
                arr_62 [i_11] [i_15] [i_11] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) (signed char)-63)))))))) | (((((/* implicit */_Bool) 14940222494139877375ULL)) ? (((/* implicit */long long int) arr_38 [i_11] [i_11 - 1] [i_11])) : (arr_40 [i_11] [(unsigned char)1] [i_11] [i_11] [i_18 + 2])))));
            }
        }
        arr_63 [i_11] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (arr_36 [i_11 - 1] [i_11] [i_11 - 1]) : (arr_36 [i_11 - 1] [i_11] [i_11]))) | ((+(((/* implicit */int) var_2))))));
        var_48 = ((/* implicit */int) min((var_48), (max(((-(((/* implicit */int) arr_1 [i_11 - 1] [i_11])))), (((/* implicit */int) (_Bool)1))))));
    }
}
