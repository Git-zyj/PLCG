/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215257
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_11 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1] [i_0]))));
            var_12 = ((/* implicit */int) arr_3 [i_0] [i_1]);
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                var_13 |= ((/* implicit */unsigned char) arr_0 [i_1] [i_2]);
                arr_6 [i_1] = ((/* implicit */unsigned long long int) (-(arr_2 [i_0] [i_1] [(short)3])));
                var_14 &= ((/* implicit */int) arr_2 [(_Bool)1] [i_0] [i_0]);
                /* LoopSeq 3 */
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((signed char) arr_7 [i_1] [i_0]));
                    /* LoopSeq 4 */
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        var_15 = (short)-31284;
                        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483643)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [(signed char)16]))) : (274877906943ULL)))));
                        var_17 = ((/* implicit */short) ((var_7) ? (((((/* implicit */_Bool) 18446743798831644675ULL)) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_3] [i_3] [i_4] [i_1])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) var_7))));
                        var_18 += var_4;
                    }
                    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        arr_14 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(3672603513U))))));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((arr_0 [i_0] [i_1]) ? (var_6) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                        var_19 += ((/* implicit */unsigned long long int) (short)-31302);
                        var_20 = ((/* implicit */short) (-(var_3)));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_0)) - (18446744073709551605ULL)));
                    }
                    for (unsigned short i_6 = 1; i_6 < 15; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) var_2);
                        arr_20 [i_0] [i_0] [i_6] [i_0] [i_6 + 2] = ((/* implicit */int) arr_10 [(short)4] [10LL] [i_1] [i_0]);
                        arr_21 [i_6] = ((/* implicit */short) ((((((((/* implicit */int) (signed char)-88)) + (2147483647))) >> (((9223372036854775802LL) - (9223372036854775790LL))))) << ((((+(var_6))) - (12872901263069048951ULL)))));
                        var_22 = ((/* implicit */short) arr_2 [i_0] [i_3] [3]);
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6 + 2] [i_6 - 1] [i_6 + 2] [i_6 - 1] [i_6 + 2]))) : (arr_2 [i_6 + 3] [i_6 + 2] [i_6 + 3])));
                    }
                    for (signed char i_7 = 3; i_7 < 15; i_7 += 2) 
                    {
                        var_24 |= ((/* implicit */short) var_2);
                        var_25 = ((/* implicit */signed char) ((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 816169731)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (274877906940ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_17 [(signed char)1] [i_7] [i_2] [i_2] [i_2]) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_7 [i_0] [(short)2])) : (arr_23 [i_0] [i_1] [i_3] [i_3] [(unsigned char)4])))));
                    }
                    var_27 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_17 [i_0] [i_2] [i_2] [i_3] [i_3]))) | ((~(((/* implicit */int) arr_11 [i_0] [i_1] [i_3] [(_Bool)1] [i_3] [i_2]))))));
                    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 137438953471ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) : ((((_Bool)1) ? (-9223372036854775780LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5)))))));
                    arr_24 [i_1] [i_1] [i_2] [6ULL] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_0] [i_2])) : (arr_17 [i_3] [i_3] [i_2] [i_3] [(_Bool)1])));
                }
                for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    var_29 = ((/* implicit */unsigned int) min((var_29), (var_3)));
                    arr_27 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)31301)) ? (arr_17 [i_0] [i_2] [i_1] [12U] [i_8]) : (((/* implicit */int) var_7))));
                }
                for (unsigned int i_9 = 3; i_9 < 17; i_9 += 2) 
                {
                    var_30 = ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_0])) != (-9223372036854775768LL)))));
                    var_31 = ((/* implicit */int) arr_12 [i_0] [i_9 - 1] [i_2] [i_9] [i_0]);
                    arr_30 [i_0] [i_2] [i_0] |= ((((/* implicit */_Bool) 1738624724)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_9 - 1] [i_1] [i_1] [i_2] [(unsigned char)6]))) : (9223372036854775766LL));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))) ? ((-(((/* implicit */int) (short)-19391)))) : (((/* implicit */int) (unsigned char)140))));
                }
            }
            for (int i_10 = 3; i_10 < 15; i_10 += 1) 
            {
                arr_33 [i_0] [i_1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1] [8])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_10] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_10] [i_10] [i_0])))))) : (1651131918U)));
                arr_34 [i_10] [(unsigned char)11] [i_0] = ((/* implicit */_Bool) -2147483643);
                /* LoopSeq 1 */
                for (int i_11 = 3; i_11 < 15; i_11 += 3) 
                {
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((var_8) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((2147483624) < (((/* implicit */int) arr_31 [i_0])))))))))));
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned int) (+(((int) (unsigned char)141))));
                        arr_40 [i_0] [i_12] [i_10] [i_11 + 1] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_10])) ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0])));
                        var_35 -= ((/* implicit */int) 0LL);
                        arr_41 [i_12] [(_Bool)1] [i_12] [i_12] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_38 [i_0] [i_1] [i_12] [i_11] [11LL] [i_10 + 3] [i_0]))));
                    }
                    for (long long int i_13 = 2; i_13 < 17; i_13 += 2) 
                    {
                        arr_44 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_10 + 3] [i_13 + 1] [i_11 - 1])) ? (((((/* implicit */unsigned int) var_9)) * (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19243)))));
                        var_36 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_13] [i_13] [i_10] [i_13] [i_0]))) == ((-9223372036854775807LL - 1LL)))));
                        arr_45 [i_0] [i_1] [7ULL] [i_11] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_10])) ? (arr_23 [(signed char)16] [i_1] [(signed char)3] [i_13 + 1] [(signed char)3]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [(signed char)8] [(signed char)8] [(signed char)8] [4U] [i_13]))))));
                    }
                }
            }
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                var_37 = ((/* implicit */unsigned char) var_4);
                var_38 = ((/* implicit */signed char) ((4129336354U) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
            }
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            var_39 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) -1044460591)) > (622363778U)));
            arr_53 [i_0] = ((/* implicit */short) (+(max((min((((/* implicit */long long int) arr_50 [(_Bool)1] [i_0] [i_15])), (-9223372036854775767LL))), (((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0] [3] [i_0])))))))));
            arr_54 [5U] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) 15726753921631248790ULL))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_0] [i_15])) : (((/* implicit */int) arr_8 [i_0] [i_0]))))));
            var_40 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_23 [i_0] [i_15] [i_15] [i_0] [i_0])))) ? ((((+(3760417219U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [16U] [(signed char)16] [i_0]))) ^ (3760417219U)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0)))))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
        {
            arr_58 [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8907))) : (var_6))), (((/* implicit */unsigned long long int) arr_49 [i_0] [i_16]))))) ? (((unsigned int) ((((/* implicit */int) arr_18 [i_16] [(short)2] [i_0] [(short)2] [i_0])) > (((/* implicit */int) arr_0 [(short)13] [i_16]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_49 [i_16] [i_0])) + (((/* implicit */int) (unsigned char)19)))))));
            var_41 = ((/* implicit */long long int) max((-135957651), (((/* implicit */int) (_Bool)0))));
        }
        for (short i_17 = 1; i_17 < 15; i_17 += 2) 
        {
            var_42 = arr_38 [i_0] [i_0] [i_17] [i_0] [(short)2] [i_17] [i_17];
            var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (_Bool)0)), (-9223372036854775766LL))), (((/* implicit */long long int) (((+(arr_10 [i_0] [i_0] [i_0] [i_0]))) > (((/* implicit */unsigned long long int) var_3))))))))));
        }
        var_44 = ((/* implicit */signed char) ((min((((var_0) & (((/* implicit */int) arr_28 [6ULL] [i_0] [i_0] [i_0])))), (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((_Bool) var_10)))));
    }
    var_45 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) var_7)) : (var_0))), (((/* implicit */int) (short)19248))));
    var_46 = ((/* implicit */unsigned short) ((9223372036854775779LL) != (((/* implicit */long long int) var_9))));
    var_47 = ((/* implicit */unsigned int) (short)8663);
    var_48 = ((/* implicit */short) var_10);
}
