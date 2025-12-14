/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247002
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
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */long long int) (-(3803569876U)));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) (-(((/* implicit */int) max((arr_12 [(unsigned char)4] [(unsigned char)4] [11ULL] [i_3] [i_2 - 2] [i_2] [i_3]), (arr_12 [i_0 + 1] [i_0 + 1] [i_4] [0U] [i_2 - 2] [i_1] [13ULL]))))));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-8525977050922854809LL)))) ? (max((((((/* implicit */_Bool) 3803569864U)) ? (2047LL) : (var_1))), (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_3] [i_1]))))))) : (((/* implicit */long long int) ((((491397420U) & (3803569870U))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)76)) << (((arr_2 [i_0] [i_1]) - (150743245)))))))))));
                                var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0 - 2] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((unsigned char) var_14))) : (max((((/* implicit */int) (unsigned short)59419)), (arr_2 [i_1] [i_1])))))), (max(((+(491397421U))), (((/* implicit */unsigned int) var_5))))));
                                arr_15 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] [i_0] = ((((((/* implicit */_Bool) (unsigned short)41257)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (643687466646828336LL))) | (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1])) + (((/* implicit */int) max((arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [i_4]), (arr_12 [i_0] [i_1] [2] [(short)12] [i_2 - 2] [(unsigned char)8] [19ULL]))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = 491397432U;
    var_23 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 1 */
    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        /* LoopSeq 4 */
        for (short i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            var_24 = ((/* implicit */unsigned int) (((((_Bool)0) ? (-2455694955557333079LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_5] [i_6])))))));
            var_25 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_5] [(signed char)14] [i_6] [(unsigned short)8] [i_5] [(unsigned short)19] [i_6])) || (((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5] [i_6] [18LL] [i_6])) / (arr_18 [(unsigned char)14] [(unsigned char)14]))))))), ((+(var_3)))));
            var_26 += ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_10))))));
            var_27 = ((/* implicit */unsigned char) arr_19 [i_5]);
        }
        for (signed char i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            var_28 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (3803569870U)));
            var_29 = ((/* implicit */long long int) arr_12 [i_7] [i_5] [i_7] [(unsigned char)11] [i_7] [i_7] [i_7]);
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (signed char i_9 = 1; i_9 < 17; i_9 += 4) 
                {
                    {
                        arr_29 [i_8] [i_7] [i_8] [i_8] [i_9 + 1] [i_8] = ((/* implicit */signed char) (((-(var_9))) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_9 + 2] [i_9])))));
                        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((3803569870U) == (491397433U))))));
                        arr_30 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_5])) && (((/* implicit */_Bool) -2117286884))));
                        arr_31 [i_8] [i_8] [3U] = ((/* implicit */short) (~(((arr_17 [i_9 + 1] [i_9]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_9] [i_9 - 1])))))));
                    }
                } 
            } 
            arr_32 [i_5] [i_5] = (-(((((/* implicit */_Bool) ((unsigned int) arr_5 [i_5] [i_7]))) ? (max((arr_17 [i_5] [i_5]), (arr_8 [i_7]))) : (((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7]))))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
        {
            var_31 ^= ((/* implicit */short) min((arr_4 [i_5] [i_5]), (arr_16 [i_5] [i_5])));
            var_32 = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned char) arr_0 [i_5]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))) - (arr_17 [i_10] [i_5])))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 2; i_12 < 18; i_12 += 2) 
            {
                for (signed char i_13 = 4; i_13 < 17; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        {
                            arr_47 [i_5] [i_5] [i_5] [i_13] [i_14] [i_5] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), (((unsigned char) 1107747129564973355ULL))))) ^ (arr_11 [i_12 - 1])));
                            arr_48 [i_12 - 2] [i_13] [i_12 + 1] = ((((/* implicit */int) ((((/* implicit */int) arr_45 [i_5] [i_11] [(_Bool)1] [(_Bool)1] [i_14])) != (arr_39 [i_12 + 1])))) < (max((((/* implicit */int) arr_44 [i_11] [i_13] [i_11] [i_13])), (((((/* implicit */_Bool) arr_17 [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)194)) : (((/* implicit */int) (short)27154)))))));
                            var_33 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_2 [i_12 + 1] [i_13 - 2]) & (((/* implicit */int) arr_9 [i_5] [(unsigned short)2] [i_12] [i_13] [i_14])))) - (((/* implicit */int) arr_3 [i_12 - 1] [i_14 + 1]))))) ? (((/* implicit */int) max((arr_4 [i_5] [i_11]), (arr_4 [i_5] [i_5])))) : (((/* implicit */int) (!(((((/* implicit */_Bool) 4015802466480130773ULL)) || (((/* implicit */_Bool) 1457112106U)))))))));
                            var_34 = ((/* implicit */unsigned long long int) max((((/* implicit */int) max((arr_43 [i_14 + 1] [i_13 - 3] [i_12] [i_12]), (arr_43 [i_14 + 1] [i_13 - 3] [i_12 + 1] [i_13])))), (((((/* implicit */_Bool) var_6)) ? (((((var_15) + (2147483647))) << (((((/* implicit */int) (unsigned char)64)) - (64))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)3897)) : (((/* implicit */int) var_7))))))));
                        }
                    } 
                } 
            } 
            arr_49 [i_11] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 491397432U)) ? (((/* implicit */int) (unsigned char)36)) : (((/* implicit */int) arr_21 [i_11] [i_11]))))) < (491397431U)));
            /* LoopNest 2 */
            for (signed char i_15 = 0; i_15 < 19; i_15 += 4) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 3) 
                {
                    {
                        var_35 -= ((/* implicit */unsigned char) ((unsigned int) 9036786732494892067LL));
                        arr_54 [i_5] [4LL] [i_15] [5U] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [i_5] [i_15])) & (((/* implicit */int) arr_16 [i_11] [i_16])))) & (((/* implicit */int) min((arr_21 [i_15] [i_16]), (arr_21 [i_11] [i_16]))))));
                        arr_55 [i_11] = ((/* implicit */unsigned int) ((14334982766223035201ULL) < (((/* implicit */unsigned long long int) var_9))));
                    }
                } 
            } 
        }
        arr_56 [i_5] [i_5] = ((/* implicit */unsigned int) ((signed char) (unsigned char)240));
    }
}
