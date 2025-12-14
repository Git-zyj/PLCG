/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46926
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] [17ULL] = ((/* implicit */unsigned short) min(((+(arr_2 [i_0]))), (((/* implicit */unsigned long long int) (-(1931762891))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10))))) < (((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)-12651)))))))));
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_15 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_2))) && (((((/* implicit */int) var_4)) < (var_9))))));
        var_16 = ((/* implicit */unsigned long long int) (((+((-(2640883605617732036ULL))))) < (((/* implicit */unsigned long long int) var_8))));
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    {
                        var_17 = max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_3] [i_3] [i_2]))))) : (arr_9 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_2] [i_5] [i_4]))) == ((~(var_13)))))));
                        arr_21 [i_5] [i_3] [i_3] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-6577)) ? (16066699797428702279ULL) : (((/* implicit */unsigned long long int) -1123220714))));
                        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)9)))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */int) (_Bool)1);
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                {
                    var_20 += ((((((/* implicit */_Bool) var_2)) ? (((9346004612958839231ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68))))) : (((/* implicit */unsigned long long int) ((arr_18 [i_2] [i_6] [i_7]) / (((/* implicit */int) arr_7 [i_7]))))))) == (((((/* implicit */_Bool) (+(var_12)))) ? (((arr_22 [i_7] [i_7]) - (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_2] [i_2])) : (((/* implicit */int) arr_12 [i_2] [i_2] [10U]))))))));
                    arr_28 [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) arr_26 [i_6] [i_2])), (var_12))) << (((((((/* implicit */_Bool) arr_17 [i_2] [i_6] [i_6] [i_7])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (6749204621446221824LL)))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_7] [i_7]))) / (var_14))), (((/* implicit */long long int) max(((unsigned short)40049), (((/* implicit */unsigned short) var_6)))))))) : (((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1931762886)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned short)40052))))) : (((((/* implicit */_Bool) var_5)) ? (5306406705560886148ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    arr_29 [i_2] [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_13), (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))) : (max((var_14), (((/* implicit */long long int) arr_0 [i_2] [i_2])))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) ((((arr_1 [i_2]) / (var_9))) * (((/* implicit */int) ((unsigned short) max(((unsigned short)26950), (((/* implicit */unsigned short) arr_6 [i_2]))))))));
    }
    for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (min((((((/* implicit */_Bool) (short)25078)) ? (var_8) : (((/* implicit */int) (unsigned char)173)))), (((/* implicit */int) ((var_14) == (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_8] [i_9] [i_10] [(signed char)1] [i_12])))))))) : (var_8)));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((max(((!(((/* implicit */_Bool) var_14)))), (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_41 [i_8] [i_9] [i_11])))))) || (((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) (signed char)10)))))))))));
                        }
                    } 
                } 
            } 
            var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_8] [i_8] [i_8] [3ULL])) ? (((/* implicit */int) arr_36 [i_8] [i_9] [i_8] [i_8])) : (((/* implicit */int) arr_36 [i_8] [i_8] [i_9] [i_9]))))) ? (((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */long long int) (_Bool)1)), (var_13))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) (short)28165))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_9] [i_9]))));
        }
        for (signed char i_13 = 0; i_13 < 13; i_13 += 1) 
        {
            arr_45 [i_8] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4193)) - (((/* implicit */int) (signed char)50))));
            arr_46 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) (_Bool)1)), (var_14))) * (((/* implicit */long long int) ((/* implicit */int) (signed char)-82)))))) ? (((((((/* implicit */_Bool) 6892550600795832938ULL)) || (((/* implicit */_Bool) arr_32 [i_13])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)87)))))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        }
        for (int i_14 = 0; i_14 < 13; i_14 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_8]))) : (arr_43 [i_15] [i_15] [i_15])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_8] [i_14] [i_15]))) : (((((/* implicit */_Bool) (short)-6584)) ? (3497150290U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17844))))));
                var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_47 [i_8] [i_8]))));
                arr_52 [2LL] [(short)2] [i_15] [i_14] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_8] [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-87))) : (arr_33 [i_15] [i_8])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)6031)) + (((/* implicit */int) (unsigned char)0))))) : (((((/* implicit */_Bool) (unsigned short)61339)) ? (797817030U) : (arr_48 [i_8] [i_8])))));
            }
            var_27 = max((17705152800379060089ULL), (((/* implicit */unsigned long long int) 819115558)));
            arr_53 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(1346873271U))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)12551)))))) ? (((((/* implicit */_Bool) 9711996255139586561ULL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)32572))) % (3497150308U))) : (3789708774U))) : (((/* implicit */unsigned int) max(((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)238)))), (((/* implicit */int) (unsigned char)168)))))));
        }
        arr_54 [i_8] = ((/* implicit */signed char) ((short) arr_7 [i_8]));
        arr_55 [i_8] = ((/* implicit */long long int) ((unsigned long long int) (signed char)-74));
    }
    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_9))));
    var_29 = ((/* implicit */int) var_14);
}
