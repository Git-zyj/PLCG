/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222566
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = max(((signed char)95), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-11663)))) >= (((/* implicit */int) (_Bool)1))))));
                    arr_8 [i_0] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)95))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (5843090628911929681LL)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_0] [i_0]))) > (0LL)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1 - 1] [i_0] [i_0] [i_3] [i_4] [i_4] = ((/* implicit */long long int) ((short) (signed char)102));
                                var_15 = ((/* implicit */unsigned int) ((long long int) max((arr_0 [i_0] [i_1 - 1]), (arr_0 [i_2] [i_3]))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) var_3))));
                        var_17 &= ((/* implicit */unsigned int) ((20LL) != (((/* implicit */long long int) ((int) 1791044990U)))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_0] [i_0])) - (((/* implicit */int) arr_14 [i_0] [i_0]))));
                        var_19 = ((/* implicit */long long int) (unsigned char)127);
                    }
                    for (short i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                    {
                        var_20 *= ((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) 20LL))))))));
                        var_21 = ((/* implicit */short) (unsigned short)0);
                        var_22 -= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) max(((short)18734), (((/* implicit */short) arr_3 [i_0] [4U] [(_Bool)1]))))) ? (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0]))) : (((/* implicit */int) (short)11694)))));
                        var_23 &= ((/* implicit */_Bool) max(((-(((/* implicit */int) var_2)))), (((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1]))));
                        arr_18 [i_0] [i_0] [i_0] [16U] [i_0] = arr_14 [i_0] [i_0];
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        arr_23 [i_0] [i_0] [i_0] [(signed char)15] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1 + 1] [i_2] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_20 [i_2] [i_2] [i_1] [i_1 - 1])));
                        arr_24 [i_7] [i_7] [i_2] &= ((/* implicit */unsigned short) (-(arr_5 [i_1] [i_7] [i_1] [i_1 + 1])));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (short)11667))) ? (((/* implicit */int) ((unsigned short) 0ULL))) : (((/* implicit */int) var_8))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 2; i_9 < 24; i_9 += 2) 
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((signed char) max((((/* implicit */int) (short)11663)), (arr_1 [i_9]))))));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */long long int) 2965457074U)) + (((long long int) ((short) arr_15 [i_9]))))))));
                            var_27 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-29159)) : (((/* implicit */int) var_10))))) ? (max((var_1), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_9] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2147483647)))))));
                            arr_29 [i_9] &= ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) var_7)))));
                        }
                        for (long long int i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                        {
                            arr_33 [18ULL] [18ULL] [i_8] [i_10] &= ((/* implicit */signed char) (short)-11647);
                            var_28 = ((/* implicit */int) (short)11689);
                            var_29 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_10])) && (((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_1 - 1] [i_1 - 1] [i_10] [i_0])))));
                        }
                        for (long long int i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                        {
                            arr_36 [i_0] [i_2] [i_0] = ((/* implicit */long long int) ((signed char) ((unsigned char) (+(((/* implicit */int) var_3))))));
                            arr_37 [i_0] [i_1 - 1] [i_1 - 1] [2] [i_8] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_21 [i_0] [i_8] [i_8])) ? (arr_20 [i_1 - 1] [i_11] [i_11] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_0] [i_1])) || (((/* implicit */_Bool) arr_20 [i_1 - 1] [i_1] [(signed char)18] [i_11])))))));
                        }
                        var_30 = ((/* implicit */signed char) var_0);
                        var_31 &= ((/* implicit */int) max(((+(422212465065984ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_1 - 1] [i_1 - 1] [6LL] [6LL] [i_1 + 1] [i_1 - 1])) >> (((((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1])) - (79))))))));
                    }
                    arr_38 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_0] [16LL] [i_1 - 1] [i_1] [i_0]))))) & (((((/* implicit */_Bool) 2503922302U)) ? (1238791943209464230ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((((arr_16 [i_0] [i_1]) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))))) : (((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_0] [16LL] [i_1 - 1] [i_1] [i_0]))))) & (((((/* implicit */_Bool) 2503922302U)) ? (1238791943209464230ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((((((arr_16 [i_0] [i_1]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) < (1056012333419979225ULL))))) ? (((/* implicit */unsigned long long int) var_11)) : (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10689))) - (576460752303423488ULL))))));
    var_33 = ((/* implicit */_Bool) var_13);
    var_34 = 422212465065985ULL;
    /* LoopNest 3 */
    for (signed char i_12 = 1; i_12 < 19; i_12 += 1) 
    {
        for (unsigned short i_13 = 3; i_13 < 18; i_13 += 3) 
        {
            for (unsigned int i_14 = 2; i_14 < 19; i_14 += 2) 
            {
                {
                    arr_49 [i_13] = ((/* implicit */signed char) max((2147483647), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)90)))))))));
                    var_35 = ((/* implicit */long long int) max((var_35), (((long long int) (-(((/* implicit */int) (unsigned char)50)))))));
                    /* LoopSeq 1 */
                    for (int i_15 = 4; i_15 < 18; i_15 += 2) 
                    {
                        var_36 = ((/* implicit */long long int) ((unsigned short) (~((~(-7466222248805542802LL))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) 
                        {
                            var_37 = ((/* implicit */long long int) (signed char)-125);
                            arr_54 [i_13] [i_13] [i_13] [i_14 + 1] [i_15 - 4] [i_15] [i_16] = ((/* implicit */signed char) (+(var_6)));
                            var_38 += ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_6 [i_14] [i_14] [i_14 + 1] [2LL])));
                        }
                        for (short i_17 = 2; i_17 < 18; i_17 += 1) 
                        {
                            arr_57 [i_13] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)-20)))), (((/* implicit */int) (short)-10667))))) ? (max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (var_11)))), ((~(var_5))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)110)) ? (1216628218) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -9134722732605680439LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)121))))))))));
                            var_40 *= ((/* implicit */signed char) ((short) arr_48 [i_12 - 1]));
                            arr_58 [i_12 - 1] [i_15] [i_12 - 1] [i_15] [i_17 + 1] &= ((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) (+(20LL)))) * (arr_32 [i_12 + 1] [i_14] [i_12])))));
                        }
                        for (int i_18 = 2; i_18 < 19; i_18 += 1) 
                        {
                            arr_63 [i_12 + 1] [i_13] [i_14 - 1] [(short)16] [i_18] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_9 [i_12 + 1] [i_14 - 1] [i_12 + 1] [i_14 + 1])) ? (arr_9 [i_12 + 1] [i_14 - 1] [i_14] [i_14 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27340)))))));
                            var_41 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_1)))))) ? (((/* implicit */unsigned int) 1310566721)) : ((+(var_9)))));
                            var_42 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_14 - 2] [i_14 - 2] [i_14 + 1] [i_14 + 1] [i_14 + 1])))))) > (arr_34 [i_14 - 2] [i_14 - 2] [i_14 + 1] [i_14 + 1] [i_14 + 1])));
                        }
                        var_43 = ((/* implicit */signed char) 6037957953225050245LL);
                    }
                    var_44 = ((/* implicit */unsigned long long int) var_5);
                    arr_64 [i_13] [i_12] [i_13] = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [7LL] [i_13] [i_13] [i_12 - 1] [i_12 - 1])) / (((/* implicit */int) (signed char)29))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((signed char) 1329510222U)))))), (((var_13) + (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))));
                }
            } 
        } 
    } 
}
