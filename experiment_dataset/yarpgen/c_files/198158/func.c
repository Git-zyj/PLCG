/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198158
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
    var_17 += ((/* implicit */_Bool) -2033945888510472615LL);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned int) ((((((/* implicit */_Bool) (unsigned short)26453)) ? (arr_1 [i_0] [i_0 - 1]) : (((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) ((((/* implicit */int) (signed char)-3)) == (((/* implicit */int) (signed char)127)))))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 20; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2014320632U))))), (arr_2 [(signed char)12]))))));
                    arr_6 [i_0] [(_Bool)1] [(short)16] &= var_11;
                }
            } 
        } 
        var_20 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) > (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_3 [i_0] [i_0 - 1]))))))))) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0 + 1])) : (var_8)))));
    }
    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) (!(((arr_5 [i_3 + 2] [i_3 + 1]) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3 + 1])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_4 = 2; i_4 < 22; i_4 += 1) 
        {
            arr_12 [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_10 [i_4] [i_3 + 1] [i_4]))));
            var_22 = ((/* implicit */_Bool) ((((-9223372036854775788LL) == (-9223372036854775788LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_3 + 1] [i_3])) != (arr_5 [i_3] [i_3]))))) : (((-4148539802718916018LL) & (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3])))))));
            /* LoopNest 3 */
            for (int i_5 = 4; i_5 < 23; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (short i_7 = 2; i_7 < 21; i_7 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (signed char)-121)))) + ((+(((/* implicit */int) (signed char)-10))))));
                            arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) ((((9223372036854775787LL) > (-7429339650836856186LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 0ULL)))) : (1045113109146143050LL)));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                for (unsigned int i_9 = 2; i_9 < 22; i_9 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3 + 1]))) + (((((/* implicit */_Bool) arr_26 [i_3] [i_3 + 2] [(unsigned short)9] [i_3] [i_3 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_10)))));
                        arr_28 [i_3] [i_4] [i_8] [i_9] [(short)8] [i_8] &= ((/* implicit */short) (((((_Bool)1) ? (-9223372036854775788LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            arr_33 [i_3] = ((((/* implicit */_Bool) ((arr_14 [i_3] [i_10] [i_10]) ^ (((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) -1197436106)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_30 [i_10] [i_3] [i_3])))) : (((/* implicit */int) ((var_6) < (var_12)))));
            /* LoopSeq 1 */
            for (long long int i_11 = 1; i_11 < 20; i_11 += 1) 
            {
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-29789))) >= (((2525088317U) % (((/* implicit */unsigned int) 636195987))))));
                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_19 [i_3] [i_10] [i_10] [i_10] [i_10] [(signed char)4] [(signed char)8])) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) var_13)))) > (((/* implicit */int) arr_8 [i_10 + 1])))))));
                var_27 = arr_26 [i_3] [i_3 + 1] [i_10] [i_10] [i_11 + 3];
            }
            var_28 -= ((/* implicit */short) (!(((/* implicit */_Bool) (short)14717))));
        }
        var_29 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_3)) ? (1769878984U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32958)) | (((/* implicit */int) (signed char)-18))))))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_13)))) : (((/* implicit */int) ((1769878979U) < (((/* implicit */unsigned int) var_2))))))))));
    }
    for (unsigned int i_12 = 1; i_12 < 22; i_12 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            var_30 -= ((/* implicit */unsigned short) (((-(((/* implicit */int) var_0)))) == (((/* implicit */int) (!(((/* implicit */_Bool) 3776503710886442225LL)))))));
            /* LoopNest 2 */
            for (unsigned short i_14 = 3; i_14 < 23; i_14 += 4) 
            {
                for (int i_15 = 4; i_15 < 23; i_15 += 1) 
                {
                    {
                        var_31 *= ((/* implicit */unsigned int) (~((+(arr_1 [i_15 - 3] [i_12 - 1])))));
                        var_32 = ((/* implicit */unsigned short) (signed char)-123);
                        arr_49 [i_15] [i_12] [i_15] [i_15 - 1] = ((/* implicit */_Bool) ((signed char) (~(((-9223372036854775788LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
            arr_50 [i_12] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-98)))))))));
        }
        /* vectorizable */
        for (signed char i_16 = 2; i_16 < 22; i_16 += 1) 
        {
            var_33 += ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) == (-1LL))) ? (((((/* implicit */_Bool) arr_40 [i_12 + 1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_12] [(_Bool)1] [i_12] [i_16]))))) : (((/* implicit */unsigned long long int) arr_31 [i_12 + 2]))));
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (unsigned int i_18 = 1; i_18 < 23; i_18 += 3) 
                {
                    for (unsigned short i_19 = 3; i_19 < 22; i_19 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_55 [i_19 - 2] [i_12] [i_12] [i_12 + 2])) ^ (((/* implicit */int) (_Bool)0))));
                            arr_59 [(unsigned short)13] [i_16] [i_16] [i_16] [i_16] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_1))))) == (((((/* implicit */_Bool) 17061621738725031921ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16384))))));
                            var_35 = ((/* implicit */unsigned short) arr_40 [i_12]);
                        }
                    } 
                } 
            } 
            arr_60 [i_12] [i_16 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) - (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_12] [i_12])))))) ? (arr_27 [i_12]) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_16)))))));
            arr_61 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)16384))))) - (((((/* implicit */_Bool) (unsigned short)11917)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_12 + 2] [i_16] [i_16]))) : (-9223372036854775767LL)))));
            arr_62 [i_12] [i_16] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(var_10)))) > (((((/* implicit */_Bool) 17061621738725031936ULL)) ? (((/* implicit */unsigned long long int) var_10)) : (1385122334984519694ULL)))));
        }
        for (signed char i_20 = 2; i_20 < 23; i_20 += 3) 
        {
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_12] [i_12] [i_12 + 2])) ? (((/* implicit */int) arr_24 [i_20 - 2] [i_12 - 1] [(unsigned short)7] [i_12 + 2])) : (((/* implicit */int) ((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))) ? (((/* implicit */int) (unsigned short)32959)) : (((int) min((arr_34 [3] [i_20 - 2] [(signed char)17]), (var_0))))));
            arr_65 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((int) arr_40 [7LL]))) ^ (min((((/* implicit */long long int) (_Bool)1)), (3776503710886442225LL)))))) ? (((/* implicit */int) arr_32 [i_12])) : (((/* implicit */int) var_0))));
            arr_66 [i_12] [(short)5] [i_12] = ((/* implicit */unsigned char) var_13);
            arr_67 [i_12] [i_20 - 2] [i_20 - 2] = ((/* implicit */long long int) (_Bool)1);
        }
        arr_68 [i_12 + 1] [i_12] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((var_2), (((/* implicit */int) arr_3 [i_12] [(short)21]))))) ? (((((/* implicit */int) (unsigned short)32577)) - (((/* implicit */int) arr_36 [i_12] [i_12 + 2])))) : (((((/* implicit */int) (signed char)-99)) * (((/* implicit */int) (signed char)-8)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) != (max((((/* implicit */unsigned long long int) arr_22 [i_12 - 1] [i_12 - 1] [i_12] [(unsigned char)20])), (12163434637003883669ULL))))))));
        arr_69 [i_12] = ((((arr_38 [i_12 + 1]) != (((/* implicit */int) (unsigned short)60884)))) ? (arr_53 [i_12] [i_12] [i_12]) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_12]))) != (arr_42 [(signed char)3] [(signed char)3] [i_12]))) ? (((((/* implicit */_Bool) -9223372036854775800LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35687))) : (830962103U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) != (arr_64 [i_12 + 1] [20U] [i_12]))))))));
    }
}
