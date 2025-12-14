/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228691
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] = var_17;
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255))));
        arr_5 [i_0] [i_0] = (+(arr_2 [i_0 - 1]));
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) (signed char)127)))) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) arr_7 [i_0]))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                arr_10 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-11093))))));
                arr_11 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0 - 1]))) : (var_1)));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_14))));
            }
            arr_12 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)165))));
        }
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
        {
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_3])) ? (0U) : (var_13))))));
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    {
                        arr_23 [i_3] [i_3] [i_0] [(unsigned char)3] = ((/* implicit */unsigned long long int) arr_21 [i_3] [i_5]);
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_7 [i_4]))));
                    }
                } 
            } 
            var_22 = ((/* implicit */short) var_17);
        }
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
        {
            arr_26 [i_0] [(_Bool)0] [i_6] &= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)14))))));
            /* LoopSeq 3 */
            for (long long int i_7 = 1; i_7 < 9; i_7 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    arr_32 [i_0 + 1] [i_6] [i_7 - 1] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_13 [i_6] [i_6]))));
                    arr_33 [i_0] [i_8] [i_7] [i_8] [i_8] [i_8] |= ((/* implicit */_Bool) arr_21 [i_0] [i_7 + 1]);
                    var_23 = ((/* implicit */long long int) arr_7 [i_0]);
                    var_24 = ((/* implicit */unsigned long long int) (signed char)67);
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2358051480U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                }
                for (short i_9 = 3; i_9 < 7; i_9 += 4) /* same iter space */
                {
                    arr_36 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) arr_29 [i_7 - 1] [i_9 + 3] [i_0 - 1]);
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32742))) ^ (7U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_2 [i_0 + 1])));
                }
                for (short i_10 = 3; i_10 < 7; i_10 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)117));
                    /* LoopSeq 3 */
                    for (short i_11 = 3; i_11 < 9; i_11 += 1) /* same iter space */
                    {
                        var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_11 - 3])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)123)) >= (((/* implicit */int) (unsigned char)255))))) : ((~(((/* implicit */int) var_7))))));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((unsigned char) (signed char)-1)))));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32187)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)71))))) ? (((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (arr_2 [i_11]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))));
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_0] [i_6] [i_7 + 1] [i_10] [i_11 - 3] [i_11 - 2])) ? (((/* implicit */int) arr_39 [i_0 - 1] [i_6] [(unsigned char)7] [i_10 + 1] [i_11] [i_10])) : (((/* implicit */int) arr_39 [i_0 - 1] [i_6] [i_6] [i_10 + 2] [i_10 + 2] [2U])))))));
                    }
                    for (short i_12 = 3; i_12 < 9; i_12 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (+(((/* implicit */int) (unsigned short)17)))))));
                        arr_43 [i_0] [i_0] [(signed char)2] [i_10 - 3] [i_12] = ((/* implicit */unsigned char) arr_21 [i_0 - 1] [i_0 - 1]);
                        var_33 = ((/* implicit */unsigned char) (short)21149);
                        var_34 = ((/* implicit */unsigned int) (signed char)-21);
                    }
                    for (short i_13 = 3; i_13 < 9; i_13 += 1) /* same iter space */
                    {
                        arr_47 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1023LL)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-66)))) : (((/* implicit */int) (unsigned short)0))));
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (+(arr_40 [i_10 - 2] [i_6] [i_7] [i_13 - 3] [0LL]))))));
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_1 [i_0 - 1]))) + (((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)35405)))))))));
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [6ULL])) ? (((/* implicit */int) arr_44 [(unsigned char)8] [(unsigned short)8] [(unsigned char)4])) : (((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 1]))))) ? (((/* implicit */unsigned long long int) (+(var_6)))) : (var_2)));
                    }
                }
                for (short i_14 = 3; i_14 < 7; i_14 += 4) /* same iter space */
                {
                    arr_50 [i_6] [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0 - 1])) ? (arr_17 [i_0] [i_0 - 1]) : (arr_17 [i_0] [i_0 + 1])));
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) 21U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-64))));
                    arr_51 [i_0 + 1] [i_0] [i_0] [i_0] [3ULL] [3ULL] = ((/* implicit */short) ((signed char) arr_16 [i_0 + 1] [i_0] [i_0 - 1] [i_6]));
                }
                arr_52 [(unsigned char)8] [(unsigned char)8] |= ((/* implicit */unsigned char) ((unsigned int) arr_22 [i_0 - 1] [i_6] [(short)2] [i_6] [(unsigned short)6] [i_7 + 1]));
                var_39 -= ((((/* implicit */_Bool) -39334199)) ? (((var_8) % (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [6U]))));
            }
            for (unsigned char i_15 = 2; i_15 < 8; i_15 += 3) 
            {
                var_40 = ((/* implicit */unsigned short) 329967840U);
                var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_15] [i_6])) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13488)))));
            }
            for (short i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                var_42 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_39 [i_16] [i_6] [9U] [i_0 + 1] [i_0 + 1] [9U])) ? (((/* implicit */int) (unsigned short)32896)) : (arr_17 [i_0] [i_0]))) < (((/* implicit */int) arr_0 [i_0 - 1]))));
                var_43 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_27 [3U] [i_6] [(signed char)6]) - (arr_22 [i_0] [i_0] [(unsigned short)7] [(unsigned short)7] [i_0] [i_0 + 1])))) ? (((/* implicit */long long int) arr_27 [i_0 + 1] [i_0 + 1] [i_0 + 1])) : (arr_16 [i_0] [i_0] [i_16] [i_0 - 1])));
            }
        }
    }
    var_44 = ((/* implicit */unsigned char) (unsigned short)32618);
    /* LoopNest 2 */
    for (short i_17 = 0; i_17 < 12; i_17 += 1) 
    {
        for (unsigned int i_18 = 0; i_18 < 12; i_18 += 2) 
        {
            {
                arr_65 [10] [i_17] [i_18] = ((((/* implicit */_Bool) 1936915828U)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (arr_63 [i_17]) : (((/* implicit */long long int) arr_64 [i_18] [i_17] [i_17]))))), (max((((/* implicit */unsigned long long int) var_13)), (arr_59 [i_17]))))) : (min((max((arr_59 [i_17]), (((/* implicit */unsigned long long int) arr_62 [i_17] [i_17] [(short)8])))), (((/* implicit */unsigned long long int) (signed char)-60)))));
                var_45 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48869))) : (max((arr_64 [i_17] [i_18] [i_18]), (((/* implicit */unsigned int) (unsigned short)65535))))));
                var_46 = ((/* implicit */unsigned short) arr_58 [5U]);
            }
        } 
    } 
}
