/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21836
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
    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_12)), ((unsigned char)14)))) ? (max((((/* implicit */long long int) (unsigned short)9723)), (4780829169745262555LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5)))))), (3154327877560602884LL)));
    var_20 = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) (unsigned char)14))), (((((((/* implicit */int) var_14)) | (((/* implicit */int) var_3)))) >> (((((/* implicit */int) max((((/* implicit */short) (signed char)40)), ((short)-32766)))) - (22)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((arr_0 [i_0]) != ((+(-4780829169745262555LL))))))));
        var_22 *= ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [(unsigned char)2]), (arr_0 [i_1])))) || (((((/* implicit */_Bool) arr_3 [2U])) && (((/* implicit */_Bool) (signed char)-85))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_13 [i_1] = ((signed char) arr_7 [i_1] [i_2]);
                arr_14 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_1])) >= (((/* implicit */int) arr_2 [i_1]))));
            }
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                arr_18 [i_4] [i_2] [i_1] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (signed char)40))))));
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_4] [i_5] [i_6])) ? (arr_22 [i_1] [i_1]) : (arr_22 [i_5] [i_6])));
                            var_25 += ((/* implicit */unsigned char) ((signed char) arr_7 [i_1] [i_1]));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((1073737728U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-21219))))) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_4])) : (((/* implicit */int) arr_7 [i_1] [(unsigned char)5])))))));
                var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_4]))));
            }
            for (short i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                var_28 *= ((/* implicit */long long int) ((signed char) (_Bool)1));
                arr_28 [i_7] [i_2] [i_1] = ((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_1] [i_1] [i_1]);
                var_29 *= ((/* implicit */signed char) var_6);
                arr_29 [i_1] [i_2] = ((/* implicit */unsigned short) arr_11 [i_1] [i_2] [i_7]);
            }
            var_30 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_1] [i_1] [8LL])) && (arr_2 [i_1])));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    for (short i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        {
                            arr_42 [i_11] [i_8] [i_9] [i_8] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_21 [(signed char)7] [i_8] [i_9])) <= (((/* implicit */int) arr_40 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))) % (((((/* implicit */int) (short)-15283)) | (((/* implicit */int) (unsigned short)51547))))))), (((long long int) -4780829169745262543LL))));
                            arr_43 [i_11] [i_8] [i_9] [i_8] [i_8] [i_8] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -4780829169745262560LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8))) : (((((/* implicit */unsigned int) (+(((/* implicit */int) (short)12041))))) - (2015864227U)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) ((_Bool) var_5))), (arr_30 [(_Bool)1] [i_12])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)58146)) || (((/* implicit */_Bool) ((2372880618U) >> (((arr_27 [i_1] [i_8] [i_12]) + (3453269412604346893LL)))))))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) var_12))))), (((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_1] [i_1] [i_1]))) ^ (4780829169745262559LL))))))))));
                var_32 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_1] [i_8] [i_8] [i_12] [i_12]))) * (arr_39 [i_1] [1LL] [i_8] [1LL] [1LL] [i_12] [(short)11]))))));
            }
            var_33 |= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)11714))));
            arr_47 [(unsigned char)11] [i_8] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((-4780829169745262555LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11703))))) ? ((-(4780829169745262564LL))) : (((/* implicit */long long int) min((2015864210U), (((/* implicit */unsigned int) (short)-15283))))))))));
        }
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
        {
            /* LoopNest 3 */
            for (short i_14 = 0; i_14 < 12; i_14 += 2) 
            {
                for (unsigned int i_15 = 0; i_15 < 12; i_15 += 2) 
                {
                    for (signed char i_16 = 2; i_16 < 10; i_16 += 2) 
                    {
                        {
                            arr_59 [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)226))));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_1])) ? (arr_3 [i_16]) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1])))));
                            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) >= (var_7))))));
                            arr_60 [i_1] [i_14] [i_16 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)15282)) ? (((/* implicit */int) arr_36 [i_1] [i_13] [i_16 + 2] [i_16] [(signed char)2])) : (((/* implicit */int) arr_36 [i_15] [i_16] [i_16 - 2] [i_16] [i_16 - 2]))));
                        }
                    } 
                } 
            } 
            var_36 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1663829082U)) ? (arr_10 [i_1] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1])))));
        }
        arr_61 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned char)143)), (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))), (((unsigned int) 2017728086U))))));
    }
    for (short i_17 = 4; i_17 < 13; i_17 += 1) 
    {
        arr_64 [i_17] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_17 - 3])) ? (((/* implicit */int) arr_63 [i_17 - 1])) : (((/* implicit */int) arr_63 [i_17 - 4])))))));
        arr_65 [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)94)), ((unsigned short)11730)))) ? (min((3698586515U), (((/* implicit */unsigned int) arr_62 [i_17 - 2])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) & (var_10)))) ? ((~(((/* implicit */int) (signed char)-55)))) : (((/* implicit */int) ((_Bool) (signed char)-55))))))));
    }
}
