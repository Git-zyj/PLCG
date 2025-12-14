/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51075
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    arr_8 [i_1] = ((/* implicit */signed char) (+((~(((((/* implicit */_Bool) (short)-1332)) ? (((/* implicit */int) (unsigned short)35849)) : (((/* implicit */int) var_6))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)73))));
                    var_18 = ((/* implicit */unsigned int) 589510627);
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_5 [i_0] [i_2]))));
                    var_20 += ((/* implicit */unsigned char) (+(((/* implicit */int) var_1))));
                }
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    var_21 = ((/* implicit */signed char) min((((unsigned int) arr_0 [i_1 + 2])), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) var_8)) % (arr_2 [i_0])))))))));
                    var_22 -= ((/* implicit */signed char) ((long long int) arr_0 [i_0]));
                    var_23 += ((/* implicit */signed char) (-((+(3895712472U)))));
                }
                for (short i_4 = 1; i_4 < 12; i_4 += 4) 
                {
                    arr_14 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1 - 2])) : (arr_11 [i_1] [i_4 + 1] [i_1]))))));
                    arr_15 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned char)132)))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) -589510623)) ? (arr_5 [i_1 - 1] [i_1]) : (((/* implicit */int) (signed char)-80)))) : (((((/* implicit */int) var_16)) + (((/* implicit */int) arr_6 [i_4 + 2]))))))));
                }
                for (signed char i_5 = 1; i_5 < 12; i_5 += 2) 
                {
                    arr_18 [i_1] = arr_3 [i_1] [i_5];
                    arr_19 [i_1] [i_5] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)29537))))), (min((((/* implicit */unsigned long long int) arr_11 [i_1 + 2] [i_5 - 1] [i_1])), (var_11)))));
                    var_24 = ((/* implicit */unsigned char) ((signed char) var_13));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_25 = ((/* implicit */_Bool) var_15);
                        arr_22 [i_1] [i_1 - 1] [i_1 - 3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_3 [2U] [i_1 - 1]);
                        arr_23 [i_1] [i_1] [i_5] [6LL] = ((/* implicit */signed char) (unsigned char)194);
                    }
                    arr_24 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)24915)) ? (((/* implicit */int) (unsigned short)35870)) : (-589510628))))));
                }
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (unsigned short)20)) + (((/* implicit */int) ((((/* implicit */int) (unsigned char)218)) <= (((/* implicit */int) (short)-24930)))))))))));
                arr_25 [(short)4] [(short)4] |= ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0])) : (arr_11 [i_0] [i_0] [12ULL]))))), (((/* implicit */int) (unsigned short)35849))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_7 = 3; i_7 < 21; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 1; i_8 < 19; i_8 += 3) 
        {
            for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                {
                    arr_33 [i_7] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_30 [(short)8] [i_7]);
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 3; i_10 < 20; i_10 += 3) 
                    {
                        for (long long int i_11 = 4; i_11 < 21; i_11 += 2) 
                        {
                            {
                                arr_39 [i_9] [i_8 - 1] [i_8 - 1] [(signed char)0] [8] [i_8 - 1] [i_8] &= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) min((-8366804293189652308LL), (((/* implicit */long long int) var_6))))) ? (((/* implicit */int) (short)20776)) : (((((/* implicit */int) arr_27 [20LL])) ^ (((/* implicit */int) var_0)))))));
                                arr_40 [(unsigned char)17] [i_7] [i_9] [i_10] = ((/* implicit */signed char) ((((unsigned int) 0ULL)) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_11 - 3])) + (((/* implicit */int) var_14)))))));
                                var_27 = (i_7 % 2 == 0) ? (((/* implicit */long long int) ((((arr_32 [i_7] [i_7]) + (2147483647))) << (((((((/* implicit */int) arr_38 [i_8 + 1] [i_7] [i_10 - 3] [i_11 - 1] [i_7 + 1])) % (((/* implicit */int) var_9)))) - (50)))))) : (((/* implicit */long long int) ((((((arr_32 [i_7] [i_7]) - (2147483647))) + (2147483647))) << (((((((/* implicit */int) arr_38 [i_8 + 1] [i_7] [i_10 - 3] [i_11 - 1] [i_7 + 1])) % (((/* implicit */int) var_9)))) - (50))))));
                                var_28 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((arr_32 [i_7] [i_7]), (((/* implicit */int) (short)20769))))) ? (arr_29 [i_8 + 2] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 1; i_12 < 19; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            {
                                var_29 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((((/* implicit */int) var_2)) << (((/* implicit */int) arr_28 [i_9])))) + (((/* implicit */int) arr_28 [i_9])))) : ((+(((/* implicit */int) arr_34 [i_8 - 1] [i_9] [i_7 - 1] [i_12 + 3]))))));
                                var_30 = ((/* implicit */unsigned short) (((+(min((var_3), (((/* implicit */int) var_16)))))) & (((((/* implicit */_Bool) ((signed char) (short)-29480))) ? (((int) arr_45 [i_7] [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7] [i_7 - 1])) : (min((arr_32 [i_7] [i_8 + 2]), (((/* implicit */int) var_13))))))));
                                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_32 [i_9] [i_9])) ? (((/* implicit */int) arr_38 [i_7] [i_7] [i_7] [i_7] [i_7])) : (((/* implicit */int) (signed char)-64)))))) ? (min((((/* implicit */long long int) arr_43 [i_7 - 2] [i_9] [i_7] [i_7] [i_7 - 2] [(unsigned char)0] [i_7])), (1520679502712949636LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (unsigned char)147))))), (arr_26 [i_8 + 3] [i_12 + 1])))))))));
                                arr_46 [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) (short)29481))) ? (((553595711U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-29506))))) : (max((((/* implicit */unsigned int) (unsigned short)0)), (min((((/* implicit */unsigned int) var_9)), (arr_26 [(signed char)18] [i_13])))))));
                            }
                        } 
                    } 
                    arr_47 [i_9] |= ((/* implicit */int) max((min(((((_Bool)0) ? (5164199448030056404LL) : (((/* implicit */long long int) ((/* implicit */int) (short)22691))))), (((((/* implicit */long long int) ((/* implicit */int) (short)32767))) % (arr_45 [i_7] [(signed char)8] [i_7] [(unsigned short)12] [i_9] [i_9] [12U]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)17)), ((short)11556)))) ? (((/* implicit */unsigned int) arr_32 [i_9] [i_9])) : ((+(arr_43 [i_7] [i_9] [i_8 + 3] [i_9] [(unsigned short)2] [(unsigned short)2] [i_9]))))))));
                }
            } 
        } 
        var_32 -= ((/* implicit */unsigned char) ((int) (-(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)48)))))));
        var_33 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_7 - 1] [4U] [i_7 - 1] [i_7 - 1] [i_7 - 3] [(unsigned char)16] [i_7 + 1])) ? (((/* implicit */int) (short)9951)) : (((/* implicit */int) (short)25049)))))));
        /* LoopSeq 3 */
        for (short i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            var_34 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_14] [i_14])) ? (3741371600U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))))) ? ((+(max((((/* implicit */long long int) var_6)), (arr_29 [i_7 - 3] [i_14]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)192)) ? (arr_32 [i_14] [(short)8]) : (((((/* implicit */_Bool) -583122515)) ? (-589510628) : (583122514))))))));
            var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))));
            arr_50 [i_7] [i_7] = ((/* implicit */int) ((short) (unsigned char)80));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)26286))) + (((((/* implicit */_Bool) 589510628)) ? (((/* implicit */long long int) 3741371597U)) : (4609448951012989533LL)))));
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 1) 
        {
            var_37 *= ((/* implicit */signed char) (((~(((/* implicit */int) var_2)))) % (var_3)));
            arr_53 [i_15] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)123)) ? (589510627) : (((/* implicit */int) (unsigned short)35849))))) & (2307884791794776330LL)));
        }
        for (signed char i_16 = 0; i_16 < 22; i_16 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 22; i_17 += 2) 
            {
                for (signed char i_18 = 2; i_18 < 19; i_18 += 4) 
                {
                    {
                        var_38 &= ((/* implicit */int) max(((+(((((/* implicit */_Bool) 990861360U)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_48 [i_17])) < (((/* implicit */int) ((short) var_6))))))));
                        var_39 = (signed char)-41;
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_19 = 0; i_19 < 22; i_19 += 2) 
            {
                for (long long int i_20 = 3; i_20 < 21; i_20 += 3) 
                {
                    for (unsigned char i_21 = 0; i_21 < 22; i_21 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */unsigned char) min((arr_43 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7 - 1] [i_20 - 3]), (((/* implicit */unsigned int) ((signed char) arr_32 [i_7] [20LL])))));
                            arr_70 [i_7 - 3] [(signed char)9] [i_16] [i_7] [i_20] [(short)9] = ((/* implicit */unsigned char) arr_27 [(_Bool)1]);
                            var_41 = ((/* implicit */int) max((var_41), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_16] [i_16] [i_20])) ? (((/* implicit */int) (short)3573)) : (((/* implicit */int) var_12))))), (((unsigned long long int) arr_60 [i_16] [i_16]))))) ? (((/* implicit */int) ((short) (signed char)127))) : (((/* implicit */int) arr_52 [i_7 - 2] [i_20 + 1] [i_20 + 1]))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) min((min((((/* implicit */int) var_6)), (((int) (signed char)-123)))), ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0)))))))))));
}
