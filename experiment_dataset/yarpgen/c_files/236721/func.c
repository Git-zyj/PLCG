/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236721
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) min((var_11), (((/* implicit */short) (_Bool)0))))) ? (((arr_1 [i_0]) * (((/* implicit */unsigned long long int) var_13)))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_0 [i_0])))))));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned long long int) ((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_8 [i_1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (8993311806904261831ULL))))));
            /* LoopSeq 4 */
            for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 8; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_3))));
                            arr_16 [i_1] [i_2] [i_2] [i_1] [i_4] [i_5] = ((/* implicit */long long int) ((arr_6 [i_3 + 1]) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-22)))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_20 [i_1] [i_2] [i_2] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)251)) | (arr_15 [i_1] [i_1] [i_2] [i_2] [i_2] [i_6] [i_6])));
                arr_21 [i_6] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) == (var_13)));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_3))));
                arr_22 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)3)))))) : (((unsigned int) var_6))));
            }
            for (unsigned char i_7 = 1; i_7 < 9; i_7 += 4) 
            {
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_3))));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 9; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        {
                            arr_30 [i_1] [i_1] [i_1] [i_1] [i_7] = ((/* implicit */unsigned char) ((int) ((-907324615) / (((/* implicit */int) (signed char)-40)))));
                            arr_31 [i_1] [i_7] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((-73088090) ^ (arr_28 [i_9] [i_7] [i_7] [i_7] [i_1])))) < (576390383559245824ULL)));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_4 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-27))) : (var_12)));
                            arr_32 [i_7] [i_8] [i_7] [i_7] [i_7] = ((((((/* implicit */int) (signed char)-22)) + (2147483647))) >> ((((+(arr_11 [i_1] [i_1] [i_7] [i_7 + 1]))) + (2050504197))));
                        }
                    } 
                } 
                arr_33 [i_7] [i_2] [i_1] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_7 - 1] [i_2] [i_7 - 1] [i_1])) || (((/* implicit */_Bool) -5348281083738575794LL))));
            }
            for (int i_10 = 2; i_10 < 7; i_10 += 4) 
            {
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (arr_35 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 2])));
                /* LoopSeq 2 */
                for (unsigned int i_11 = 1; i_11 < 8; i_11 += 1) /* same iter space */
                {
                    var_25 *= arr_1 [i_11 + 2];
                    var_26 = (-(((/* implicit */int) (signed char)63)));
                }
                for (unsigned int i_12 = 1; i_12 < 8; i_12 += 1) /* same iter space */
                {
                    arr_42 [i_1] [i_1] [i_1] [i_10] [i_12] [i_12 - 1] = ((((((/* implicit */_Bool) 1589311663810882283ULL)) ? (var_17) : (0))) == (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-25320)) : (1554543508))));
                    arr_43 [i_1] [i_12] [i_12] [i_12] = ((/* implicit */long long int) arr_27 [i_1] [i_12] [i_12 - 1] [i_12 + 2]);
                }
                var_27 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_2] [i_10] [i_10]))));
            }
            var_28 = ((/* implicit */long long int) -1028685432);
            arr_44 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (arr_34 [i_1] [i_1] [i_1]) : (-4055757218086254121LL)));
        }
        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            arr_47 [i_1] = ((/* implicit */long long int) (+(var_17)));
            arr_48 [i_1] = ((unsigned long long int) (!((_Bool)1)));
            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_13])) ? (((/* implicit */unsigned long long int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_13] [i_13] [i_13])) : (72040001851883520ULL))) : (((/* implicit */unsigned long long int) (~(5348281083738575805LL))))));
            /* LoopNest 3 */
            for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
            {
                for (long long int i_15 = 1; i_15 < 8; i_15 += 4) 
                {
                    for (int i_16 = 0; i_16 < 10; i_16 += 4) 
                    {
                        {
                            arr_58 [i_14] [i_13] [i_14] [i_15] [i_16] [i_13] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (var_12) : (6466138071826429679LL)))) ? (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_14] [i_15 + 2] [i_16] [i_16]))));
                            arr_59 [i_14] [i_13] [i_14] [i_15] [i_16] = ((/* implicit */unsigned char) ((long long int) var_3));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_17 = 3; i_17 < 7; i_17 += 4) 
        {
            var_30 &= ((/* implicit */long long int) arr_19 [i_1] [i_1] [i_17 + 1]);
            /* LoopSeq 1 */
            for (int i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_19 = 0; i_19 < 10; i_19 += 4) 
                {
                    for (unsigned char i_20 = 1; i_20 < 9; i_20 += 4) 
                    {
                        {
                            var_31 *= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_20 - 1] [i_20 - 1] [i_17 - 2]))) < (0LL)));
                            var_32 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 74607752)) && (((/* implicit */_Bool) arr_63 [i_17])))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_15))))) : (((((/* implicit */long long int) arr_11 [i_1] [i_18] [i_1] [9LL])) % (var_12)))));
                            arr_70 [i_17] [i_17] [i_18] [i_19] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [(unsigned short)1] [i_17] [i_17 + 2] [i_17] [i_17] [i_17] [i_17])) ? ((-(arr_28 [i_20] [i_17] [i_18] [i_17] [i_1]))) : (((/* implicit */int) (signed char)70))));
                            var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) & (((4295209368871263682ULL) - (((/* implicit */unsigned long long int) 1092667365732809219LL))))));
                        }
                    } 
                } 
                var_34 ^= ((((/* implicit */_Bool) arr_7 [i_17 + 2] [i_17 + 3] [i_17 + 2])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_17 - 3] [i_17 - 3]))));
                var_35 = ((/* implicit */unsigned long long int) arr_56 [i_1] [i_1] [i_17] [i_18]);
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_55 [i_17 + 2] [i_17] [i_17] [i_17])) ? (((((/* implicit */_Bool) 2032965327)) ? (arr_5 [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_17] [i_17] [i_18] [i_17])))));
            }
            /* LoopNest 2 */
            for (long long int i_21 = 0; i_21 < 10; i_21 += 1) 
            {
                for (signed char i_22 = 3; i_22 < 8; i_22 += 1) 
                {
                    {
                        arr_75 [i_1] [i_17] [i_21] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) arr_25 [i_17] [i_17] [i_17] [i_17])) : (arr_52 [i_1] [i_17] [i_21] [i_22 + 1])));
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_17 + 1] [i_17 - 2] [i_17] [i_22 - 3])) ? (arr_15 [i_1] [i_17 + 3] [i_17 - 3] [i_22 + 1] [i_22 + 2] [i_22 + 2] [i_22]) : (((/* implicit */int) (short)-13269))));
                        /* LoopSeq 1 */
                        for (int i_23 = 0; i_23 < 10; i_23 += 1) 
                        {
                            arr_79 [i_1] [i_1] [i_1] [i_17] [i_1] [i_1] = ((long long int) arr_61 [i_17]);
                            arr_80 [i_17] [(_Bool)0] [i_1] [i_1] [i_1] [i_1] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) (+(7666040387619883175ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_35 [i_1] [i_1] [i_21] [i_22])))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-39))) | (-1092667365732809199LL)))));
                        }
                    }
                } 
            } 
        }
        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) (-(((((/* implicit */long long int) -1699227568)) - (var_13))))))));
    }
    var_39 = ((/* implicit */long long int) (((+(((/* implicit */int) ((3LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128)))))))) & (((/* implicit */int) ((unsigned short) var_14)))));
}
