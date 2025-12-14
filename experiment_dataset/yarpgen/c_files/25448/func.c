/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25448
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
    var_19 = ((/* implicit */long long int) var_16);
    var_20 = ((/* implicit */signed char) (-((~(((((/* implicit */_Bool) 10743614365254982321ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */signed char) (((~(((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */short) var_13))))))) * (((/* implicit */int) max(((!(((/* implicit */_Bool) 944817646)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (15597272951461809801ULL))))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [(unsigned char)13] [i_1])) ^ (((/* implicit */int) arr_0 [10]))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    var_23 = ((/* implicit */short) max((((((/* implicit */_Bool) max((2849471122247741813ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? ((-(var_12))) : ((-(15597272951461809801ULL))))), (((/* implicit */unsigned long long int) -789866503))));
                    arr_7 [i_2 + 1] [i_2 + 1] [i_2] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) -2031056983528801455LL)) : (2849471122247741796ULL)))))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) (unsigned char)251);
                        arr_12 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_4])) ^ (((/* implicit */int) arr_1 [i_0] [i_1]))));
                        var_26 |= ((/* implicit */int) ((15597272951461809801ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_5 [i_1] [i_3] [i_4]))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            var_27 |= ((/* implicit */unsigned char) arr_14 [i_0] [i_1] [i_1] [i_5] [(_Bool)1] [i_6 + 1]);
                            arr_18 [i_0] [i_0 + 1] [i_0] [i_5] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2849471122247741814ULL)) ? (15597272951461809802ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_28 = ((/* implicit */int) var_0);
                        }
                        arr_19 [i_0] [(unsigned char)20] [i_3] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_15 [8LL] [i_0] [i_1] [i_3] [i_5]), (arr_15 [2ULL] [i_1] [i_1] [i_1] [i_1])))) ? (((arr_14 [(unsigned char)20] [i_0] [i_0] [i_1] [i_3] [i_5]) ? (arr_15 [(unsigned char)6] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [(unsigned char)2] [i_1] [i_3]))))) : (max((((/* implicit */long long int) arr_14 [i_5] [i_3] [i_0] [i_0] [i_0] [i_0])), (arr_15 [(unsigned char)20] [(unsigned char)20] [i_5] [i_5] [i_5])))));
                        var_29 = ((/* implicit */unsigned long long int) arr_15 [i_5] [i_1] [i_1] [i_1] [i_1]);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 4; i_8 < 19; i_8 += 2) 
                        {
                            var_30 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((short) (_Bool)1))) ? ((-(var_16))) : (((/* implicit */unsigned long long int) (~(var_18)))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)0)), (-1173193125)))) ? (((((/* implicit */int) arr_23 [i_0] [i_1] [i_3] [(_Bool)1])) ^ (((/* implicit */int) var_15)))) : (((/* implicit */int) arr_1 [i_0 + 2] [i_0 - 2])))))));
                            var_31 = arr_15 [i_8] [i_1] [i_1] [i_1] [8];
                            var_32 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (var_14)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_3]))))) : (((((-4359426976430845098LL) + (9223372036854775807LL))) << (((16216202968498681024ULL) - (16216202968498681024ULL))))))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 20; i_9 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) var_5);
                            arr_27 [i_0 + 1] = ((/* implicit */unsigned char) arr_4 [i_0 - 1] [i_9 - 1] [i_9 - 1] [(short)16]);
                            arr_28 [i_0 + 1] [i_7] [i_3] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((~(((/* implicit */int) arr_11 [i_0 - 2] [i_1] [i_7] [i_9])))) + (2147483647))) >> ((((~(var_18))) + (3062272370407028171LL)))))) ? (((/* implicit */int) ((17192036882189291552ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2])))))) : (((/* implicit */int) (_Bool)1))));
                        }
                        for (int i_10 = 1; i_10 < 20; i_10 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)150)) ? (max((min((((/* implicit */long long int) var_3)), (arr_15 [(_Bool)1] [i_1] [i_3] [i_7] [i_10 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)18))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-10707)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17)))))));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0] [i_0 - 1] = ((/* implicit */signed char) (((!(arr_8 [i_0] [i_1] [i_10 - 1]))) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0)))))));
                            var_35 = ((/* implicit */short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_10] [i_7] [i_1] [i_0 + 2])) + (((/* implicit */int) (signed char)-88))))) : (2508139233521490175ULL))), (var_16)));
                        }
                        var_36 ^= ((/* implicit */long long int) (((-((+(((/* implicit */int) arr_30 [i_7] [4] [i_1] [(unsigned char)14] [i_0 + 1])))))) + (((((/* implicit */int) arr_0 [i_0 + 1])) % (((/* implicit */int) ((unsigned char) (unsigned char)199)))))));
                        arr_33 [i_7] [i_3] [(_Bool)1] [i_0] = arr_29 [i_0] [i_0] [i_1] [i_3] [(_Bool)1] [i_7];
                    }
                    arr_34 [i_0 - 2] [i_1] [i_3] = arr_15 [(short)14] [i_3] [i_3] [i_3] [i_3];
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)39)) >> (((long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8))))));
                        arr_37 [i_0] [i_0 - 3] [(unsigned char)18] [5ULL] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 3])) / (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 3])))), (((((/* implicit */_Bool) arr_20 [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 3])) : (((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 3] [i_0 - 3] [i_0 - 1]))))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) /* same iter space */
                    {
                        arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) max((((/* implicit */int) arr_22 [i_0] [i_0] [i_1] [i_3] [i_3] [i_12])), (((var_0) ? (((/* implicit */int) arr_26 [i_0] [i_0] [(unsigned char)4] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_39 [i_0] [i_0] [i_3] [2ULL])))))));
                        var_38 = arr_39 [i_0] [(unsigned char)7] [i_3] [i_12];
                        var_39 ^= ((/* implicit */long long int) 2230541105210870591ULL);
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 0; i_13 < 21; i_13 += 2) /* same iter space */
                    {
                        var_40 = ((/* implicit */long long int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [(_Bool)0]);
                        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_0] [i_0 + 1] [i_0] [i_0 - 3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_17))));
                        var_42 = ((/* implicit */int) (_Bool)1);
                    }
                    var_43 ^= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)52))));
                    arr_43 [i_0] [i_1] [i_1] [(signed char)2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -822548182)) ? (((/* implicit */int) arr_26 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 2])) : (arr_20 [i_0] [i_0] [i_1] [i_3])))))) ? (((/* implicit */int) ((arr_9 [i_3] [i_1] [i_0 - 2]) != (((/* implicit */long long int) ((/* implicit */int) ((arr_14 [i_3] [i_1] [i_3] [i_3] [i_0] [i_0]) && ((_Bool)1)))))))) : (((/* implicit */int) ((arr_6 [i_0] [i_0] [i_1] [i_3]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_9)) == (var_18))))))))));
                }
                for (unsigned char i_14 = 3; i_14 < 20; i_14 += 1) 
                {
                    arr_47 [i_0] [(unsigned char)11] = ((/* implicit */long long int) 15958977576112927517ULL);
                    /* LoopSeq 4 */
                    for (int i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))));
                        var_45 = ((/* implicit */signed char) var_10);
                        arr_50 [i_0] [i_1] = ((/* implicit */unsigned char) arr_35 [i_15] [i_14 - 3] [i_1] [i_0 - 2]);
                    }
                    for (short i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        var_46 = ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-4)));
                        var_47 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (max((((/* implicit */unsigned long long int) ((signed char) arr_11 [i_0] [i_1] [i_14 - 2] [i_0]))), (max((((/* implicit */unsigned long long int) (unsigned char)83)), (arr_10 [i_0 - 1] [i_0 - 1] [i_14] [i_16]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)93)))));
                        arr_55 [i_0] [i_1] [i_14] [(_Bool)1] = (unsigned char)238;
                    }
                    /* vectorizable */
                    for (short i_17 = 1; i_17 < 20; i_17 += 2) /* same iter space */
                    {
                        arr_58 [i_0] [i_1] = ((/* implicit */_Bool) arr_52 [i_14 + 1]);
                        arr_59 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_36 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) - (arr_51 [i_0] [i_1] [i_1] [(_Bool)1] [(unsigned char)9] [i_1])));
                    }
                    for (short i_18 = 1; i_18 < 20; i_18 += 2) /* same iter space */
                    {
                        arr_62 [i_0] [i_1] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)229)))))) : (9223372036854775807LL)));
                        arr_63 [i_0] [i_0] [(unsigned char)0] [11] [i_18] = ((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)69)))), (((/* implicit */int) arr_23 [i_0 + 2] [i_0 - 2] [i_0] [i_0 + 2]))));
                    }
                }
                for (signed char i_19 = 3; i_19 < 20; i_19 += 4) 
                {
                    var_48 = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 + 2])))), (((var_18) < (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                    var_49 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned char)229)))) ^ (((/* implicit */int) arr_65 [i_19 - 2] [i_19 - 2] [i_19 - 2] [i_19 - 1]))));
                    var_50 ^= ((/* implicit */signed char) arr_41 [i_0] [i_1] [i_19 - 2] [i_19]);
                    var_51 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_25 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0])) != (((((/* implicit */_Bool) 17192036882189291547ULL)) ? (((/* implicit */int) arr_41 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)13019)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_20 = 0; i_20 < 21; i_20 += 3) 
                    {
                        var_52 = ((/* implicit */signed char) min((var_52), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (signed char)-103))) ? (((/* implicit */int) ((unsigned char) (short)27328))) : (((/* implicit */int) arr_8 [i_0 + 2] [i_0] [i_0 + 2])))))));
                        var_53 ^= ((/* implicit */short) ((arr_3 [i_0] [i_0] [i_0 + 2]) / (arr_3 [i_0 + 2] [i_0] [i_0 - 2])));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_54 = ((/* implicit */unsigned char) arr_26 [i_0] [i_0 - 3] [i_0] [i_0 - 1] [i_0]);
                        arr_73 [(unsigned char)8] [i_0] [(unsigned char)20] [i_0] = ((/* implicit */unsigned char) arr_20 [(unsigned char)8] [i_1] [i_19] [i_21]);
                        arr_74 [i_21] [i_0 - 3] [i_1] [i_0 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_69 [i_0] [i_0] [i_0] [i_0])))) ^ (((((/* implicit */unsigned long long int) arr_54 [i_0] [i_0 + 2])) + (var_8)))))) ? ((+(arr_66 [i_0] [i_0] [i_19 + 1] [3] [3] [(unsigned char)1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)75)))));
                    }
                }
                arr_75 [i_0] [i_1] [i_1] |= ((/* implicit */_Bool) (~(((/* implicit */int) ((arr_15 [(unsigned char)2] [i_0 - 2] [i_0 - 3] [i_0] [i_0 + 2]) != (arr_15 [(unsigned char)0] [i_0 - 3] [i_0 + 2] [i_0 + 2] [i_0 - 3]))))));
                var_55 += ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) < (arr_42 [i_1] [i_0 + 1] [i_0] [i_0] [i_0 - 3])));
            }
        } 
    } 
    var_56 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((max((var_3), (((/* implicit */short) var_4)))), (((/* implicit */short) var_2)))))));
    var_57 = ((/* implicit */unsigned char) var_4);
}
