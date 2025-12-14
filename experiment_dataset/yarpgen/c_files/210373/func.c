/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210373
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
    var_13 = min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) 36028797018963904LL)) ? (-1936826677) : (((/* implicit */int) (unsigned char)248)))), (((/* implicit */int) ((unsigned char) var_7)))))), (var_12));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) var_9);
                                var_15 += ((/* implicit */_Bool) min(((unsigned char)146), ((unsigned char)110)));
                                arr_15 [i_0] [i_2] = ((/* implicit */short) (+(min((arr_7 [i_3]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3)))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((2046U), (((/* implicit */unsigned int) (short)32767)))))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)155))))), (max((min((var_1), (arr_16 [i_0] [i_0]))), (((/* implicit */unsigned long long int) -5747901320862751021LL))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 1; i_6 < 21; i_6 += 2) 
                        {
                            arr_23 [i_2] [i_5] [i_2] [i_2] [i_2] &= max((arr_13 [i_0] [i_1] [i_2] [(unsigned short)17] [(_Bool)1] [5U] [(unsigned short)17]), (max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3840))) : (arr_11 [i_0] [i_0] [i_0] [i_0]))))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_10))));
                            arr_24 [i_0] [i_0] = ((/* implicit */int) max((var_4), (((/* implicit */unsigned char) ((arr_2 [i_6 - 1]) >= (((/* implicit */long long int) arr_12 [i_0] [i_0])))))));
                            var_18 += ((/* implicit */short) var_9);
                        }
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) var_8)))))));
                        arr_27 [i_0] [(signed char)1] = ((/* implicit */short) arr_12 [18ULL] [i_0]);
                        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_8 = 1; i_8 < 20; i_8 += 3) 
        {
            for (long long int i_9 = 1; i_9 < 21; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            {
                                arr_37 [22LL] [i_0] [22LL] [22LL] = ((/* implicit */unsigned int) max((var_5), (((/* implicit */short) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))))), (var_4))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_8 + 1] [i_9] [i_9 - 1] [i_11]))) : ((+(var_1)))));
                                arr_38 [i_0] [(unsigned char)17] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((16146878093274687151ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)100)))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) max((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)146)) <= (67076096)))), (var_7)));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            {
                                arr_44 [i_13] [12ULL] [i_0] [i_8] [i_0] = ((/* implicit */short) max(((+((+(12379293567722597610ULL))))), (((/* implicit */unsigned long long int) 3570497647450461005LL))));
                                arr_45 [i_0] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) (unsigned char)100)) ? (67076096) : (((/* implicit */int) var_11)))), (((/* implicit */int) ((((/* implicit */int) arr_34 [i_0] [(unsigned short)8] [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) (unsigned char)56))))))) != (min((((/* implicit */int) (unsigned short)14569)), ((+(((/* implicit */int) var_8))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_14 = 1; i_14 < 15; i_14 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 17; i_15 += 1) 
        {
            for (long long int i_16 = 3; i_16 < 14; i_16 += 4) 
            {
                {
                    var_23 ^= ((/* implicit */int) max((((/* implicit */unsigned int) -666846248)), (649894115U)));
                    arr_53 [i_15] [13] [i_14] = ((/* implicit */int) arr_30 [(unsigned short)22]);
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (-(min((var_2), (((/* implicit */long long int) arr_12 [i_14 - 1] [i_14 + 2])))))))));
        var_25 *= (short)-15695;
    }
    for (unsigned char i_17 = 1; i_17 < 15; i_17 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) (unsigned short)23474)), (1820051521U))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)110)))));
        arr_56 [(short)8] [(short)8] |= ((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_5 [i_17 - 1] [i_17] [i_17 + 1])) ? (((/* implicit */int) (unsigned short)126)) : (var_6))), (((/* implicit */int) min((var_0), (var_11))))))) : (var_12));
        /* LoopNest 2 */
        for (short i_18 = 2; i_18 < 15; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 4) 
            {
                {
                    arr_63 [i_17] [i_19] = ((/* implicit */short) (-(((((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) ? (arr_2 [i_17 + 1]) : (arr_2 [i_19])))));
                    var_27 ^= max((var_2), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)42081)) < (((/* implicit */int) var_8))))), (950354703)))));
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_21 = 4; i_21 < 15; i_21 += 4) 
                        {
                            var_28 ^= ((/* implicit */int) var_5);
                            var_29 = (unsigned char)101;
                            var_30 = ((/* implicit */short) max((max(((unsigned char)95), ((unsigned char)225))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_68 [i_17] [i_19] [i_20] [i_20]), (arr_68 [i_17] [10] [i_20] [i_17])))))))));
                        }
                        var_31 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_49 [i_17 - 1] [i_17 + 2] [i_17 + 1])) ? (((/* implicit */int) arr_42 [i_17] [i_17] [i_17] [i_19] [i_18 + 1])) : (((/* implicit */int) arr_42 [0] [i_18] [i_19] [i_19] [i_18 + 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [i_17 + 1] [i_20] [i_19] [i_18 + 2])))))));
                        arr_69 [i_19] [i_18 + 1] [i_20] &= ((/* implicit */int) ((((unsigned long long int) arr_58 [i_17 - 1])) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42055)))));
                    }
                }
            } 
        } 
    }
}
