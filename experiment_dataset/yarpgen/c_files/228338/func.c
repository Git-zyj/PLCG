/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228338
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) arr_3 [i_0]);
                                var_17 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 + 4] [i_4 - 1] [i_4 + 1] [i_4 + 4])) ? (((/* implicit */int) arr_14 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 + 4] [i_4 - 1] [i_4 + 1] [i_4 + 4])) : (((/* implicit */int) arr_14 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 + 4] [i_4 - 1] [i_4 + 1] [i_4 + 4]))))), ((((-(arr_12 [i_1] [i_1] [i_3] [i_4]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
                                var_18 = ((/* implicit */short) min((((/* implicit */unsigned short) ((arr_12 [i_1] [i_1] [i_1] [i_1]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [(unsigned short)13] [(unsigned short)13] [i_3])) ? (var_0) : (var_9))))))), (arr_5 [i_4] [i_2])));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (~(((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_6 + 1] [i_5])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_6 - 1] [i_5])))))))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(var_9))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_2 [i_6 + 1] [i_6 - 1])) ? (((/* implicit */int) min((arr_5 [i_0] [i_2]), (((/* implicit */unsigned short) arr_13 [i_0] [i_1] [i_2] [i_5] [i_6]))))) : ((+(((/* implicit */int) (signed char)-42)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)128)))))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_11 [(unsigned char)7] [i_1] [(short)19] [(unsigned char)7])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [17U] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_7] [(signed char)4] [i_1] [5LL] [i_7])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_8]))) > (arr_8 [i_7] [(short)14]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_9])) != (((/* implicit */int) arr_17 [i_0] [i_1] [i_7] [i_7] [(unsigned char)6])))))) : (var_4)));
                                arr_25 [i_7] [i_7] = ((/* implicit */int) 1863810354786664142LL);
                                arr_26 [(signed char)7] [i_8] [i_7] [i_7] [i_7] [0U] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_7] [i_8] [11U])) ? (((/* implicit */int) arr_17 [i_0] [22LL] [0LL] [(short)5] [i_0])) : (((/* implicit */int) max((var_12), (((/* implicit */short) (signed char)48)))))))) ? (((/* implicit */unsigned int) ((var_0) << (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [(_Bool)1] [i_1]))) : (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_10 [(signed char)9] [i_7] [(signed char)9] [i_9]))));
                                arr_27 [i_8] [i_8] [3LL] [i_8] [i_1] [i_7] [i_1] = ((/* implicit */unsigned long long int) ((short) arr_7 [i_0] [i_9]));
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_7))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_7 [i_1] [i_0]))) | (((/* implicit */int) var_2))));
                }
                /* LoopSeq 4 */
                for (signed char i_10 = 2; i_10 < 23; i_10 += 1) 
                {
                    arr_32 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_0] [i_0])) ^ (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [(short)12] [(short)12] [i_10] [i_1]))))) && (((/* implicit */_Bool) ((signed char) (_Bool)1))))))));
                    var_27 = ((/* implicit */signed char) arr_24 [22ULL] [i_1] [i_10 - 2] [i_10] [i_0] [(unsigned char)2]);
                    var_28 = ((/* implicit */unsigned char) ((unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2097))) - (9697539466199263734ULL))) & (((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10 + 1])))));
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 21; i_11 += 2) 
                    {
                        for (unsigned long long int i_12 = 3; i_12 < 23; i_12 += 3) 
                        {
                            {
                                arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_34 [i_11 + 3] [i_11 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_10 - 1]))) : (arr_3 [i_0]))), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0]))));
                                arr_39 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_37 [i_12 - 2] [i_12 - 3] [i_12 - 1] [i_12 + 1] [i_12 - 3])) : (((/* implicit */int) arr_37 [i_12 - 3] [i_12 - 1] [i_12 - 1] [i_12 - 2] [i_12 - 2])))));
                            }
                        } 
                    } 
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_29 = ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) arr_41 [i_13])), (arr_15 [0ULL])))))) ? (min((((/* implicit */unsigned long long int) ((unsigned char) arr_31 [i_0] [i_1] [i_0]))), (((unsigned long long int) arr_15 [i_0])))) : (((((/* implicit */_Bool) arr_23 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) -17378087)) ? (8749204607510287891ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)151))))))));
                    arr_43 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_18 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)189))))), (min((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_0] [i_0])))));
                    var_30 = ((/* implicit */short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)93)))) ^ (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_0])) ? (10506885178965495946ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [5U] [10U] [(signed char)8]))))))), (((((((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_13] [(signed char)4])) ? (((/* implicit */unsigned long long int) arr_2 [i_1] [i_13])) : (arr_40 [23] [23] [23]))) | (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) var_1)))))))));
                }
                for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 2) 
                {
                    arr_46 [i_0] [20ULL] [i_14] [i_0] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_11 [(unsigned char)9] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_33 [i_0] [i_0] [i_14] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_14] [i_0])) ? (arr_10 [(unsigned char)22] [i_14] [i_14] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_14]))))))) - (((/* implicit */unsigned int) ((/* implicit */int) max((max((((/* implicit */unsigned char) arr_7 [i_1] [i_1])), (arr_33 [i_14] [i_14] [(short)15] [i_0] [i_0]))), (arr_35 [i_0] [i_0] [i_0] [(short)20])))))));
                    var_31 ^= ((/* implicit */unsigned char) (-(((((/* implicit */int) ((signed char) arr_21 [i_1] [i_1]))) | (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)170)), ((unsigned short)43615))))))));
                }
                for (signed char i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    /* LoopNest 2 */
                    for (long long int i_16 = 0; i_16 < 24; i_16 += 2) 
                    {
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_53 [i_1] [(signed char)18] [(signed char)18] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_13 [i_0] [(_Bool)1] [i_15] [i_17 - 1] [12ULL])), (arr_52 [i_0] [i_1] [i_0] [i_16] [(unsigned short)11] [i_17 - 1])));
                                arr_54 [i_1] [i_0] = ((short) ((((/* implicit */_Bool) arr_37 [i_17 - 1] [i_16] [i_15] [i_15] [i_15])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (max((arr_21 [i_16] [i_16]), (((/* implicit */long long int) arr_6 [i_0] [i_16] [(short)4]))))));
                            }
                        } 
                    } 
                    arr_55 [i_15] [i_1] [(unsigned short)11] [19LL] = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [(unsigned char)5] [(_Bool)1]);
                }
            }
        } 
    } 
    var_32 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-61)) ? ((-((-(13492508909909207944ULL))))) : (((/* implicit */unsigned long long int) var_9))));
    var_33 = ((/* implicit */unsigned int) var_3);
    var_34 = ((/* implicit */unsigned int) var_13);
}
