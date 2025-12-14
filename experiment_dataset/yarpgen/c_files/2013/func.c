/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2013
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_11 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (arr_0 [2])))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (unsigned char)213)) ? (arr_0 [0U]) : (arr_0 [0LL])))));
        var_12 = ((/* implicit */signed char) var_5);
        arr_3 [i_0] = ((/* implicit */long long int) var_8);
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (arr_0 [i_0])));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (min((((/* implicit */int) (unsigned short)39599)), (286096925))) : (min((arr_0 [(short)22]), (((/* implicit */int) var_1))))))) ? (arr_0 [10LL]) : (((/* implicit */int) var_5)));
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) var_8);
                        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (9223372036854775807LL) : (((/* implicit */long long int) 0U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                    }
                } 
            } 
            var_16 += arr_2 [0LL] [i_2];
        }
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
        {
            var_17 &= ((/* implicit */long long int) ((1899571382195739834ULL) % (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 1926464638029987518ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)69))) : (var_2))))))));
            var_18 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / ((~(((/* implicit */int) var_7))))))), (((((/* implicit */_Bool) (~(var_10)))) ? ((-(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) var_1)))))))));
            arr_19 [i_5] = (signed char)-84;
        }
        for (unsigned char i_6 = 3; i_6 < 10; i_6 += 2) 
        {
            arr_22 [i_1] = ((/* implicit */signed char) min((16520279435679564102ULL), (((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (var_10)))), (((((/* implicit */int) arr_2 [4ULL] [4ULL])) + (((/* implicit */int) var_7)))))))));
            var_19 -= ((/* implicit */short) 8568862074205494657LL);
        }
        var_20 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_9 [10U])) : (arr_18 [i_1] [i_1]))) & (((/* implicit */long long int) ((/* implicit */int) ((16547172691513811782ULL) >= (var_10)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_20 [i_1]))))))))) : (((((/* implicit */_Bool) 845127451)) ? (2767749211U) : (((/* implicit */unsigned int) -845127445)))));
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2] [(unsigned char)2]))))), (((long long int) arr_2 [6ULL] [6ULL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) var_7)) <= (((/* implicit */int) var_7)))))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((arr_7 [i_1] [4ULL] [4ULL]) * (1926464638029987513ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1)))))))));
        var_22 = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) arr_15 [i_1] [i_1] [(signed char)10] [i_1])))));
    }
    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            var_23 = ((/* implicit */signed char) (short)32766);
            var_24 &= ((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551610ULL))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (((-(var_9))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-12)) ? (((/* implicit */int) arr_24 [i_8])) : (((/* implicit */int) var_1))))))))));
                var_26 &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_9])) != (((/* implicit */int) var_1)))))));
                /* LoopSeq 3 */
                for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    var_27 = ((/* implicit */unsigned char) var_3);
                    /* LoopSeq 4 */
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        arr_34 [11U] [i_9] [i_9] [i_9] [i_9] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 16520279435679564099ULL)))))) : (288230238712758272LL)));
                        var_28 = ((/* implicit */short) (unsigned short)43896);
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)233))) : (-5396171814997878943LL)));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_24 [i_11])) : (var_3))) : (((/* implicit */int) var_5))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
                    {
                        arr_37 [i_7] [(short)18] [i_9] [i_8] [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_9])) ? (var_9) : (((/* implicit */unsigned long long int) -1LL)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29)))));
                        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) var_9))));
                        var_32 ^= ((/* implicit */long long int) var_1);
                        arr_38 [i_7] [i_8] [i_7] [i_10] [i_7] [i_7] = var_9;
                        arr_39 [(short)1] [i_8] [(unsigned char)12] [i_10] [i_12] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 23; i_13 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (1926464638029987518ULL)))));
                        arr_42 [i_7] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32766)) ? (((/* implicit */int) var_6)) : (-1216051054)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_40 [i_13]))))) : ((~(var_2)))));
                        var_34 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_25 [i_8]))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned short) ((unsigned long long int) var_5));
                        arr_47 [i_7] [i_8] [i_9] [i_7] [i_14] = ((/* implicit */unsigned int) var_1);
                    }
                }
                for (unsigned long long int i_15 = 2; i_15 < 19; i_15 += 2) 
                {
                    arr_51 [(unsigned char)4] = ((/* implicit */unsigned char) arr_35 [i_7] [i_9] [i_15]);
                    arr_52 [i_7] [i_7] [i_7] [i_9] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_50 [(short)18] [i_9] [i_8] [2LL]) - (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7] [i_7]))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43887))) : (var_10)))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 1; i_16 < 21; i_16 += 2) 
                    {
                        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) (((((~(((/* implicit */int) arr_2 [i_15] [i_15])))) + (2147483647))) << ((((~(-1083826010))) - (1083826009))))))));
                        arr_56 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((14834876295701439150ULL) == (4803729961305175530ULL))))) == (arr_29 [i_8] [i_16 + 1] [i_15 + 3] [i_15])));
                        var_37 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)182)) ? (14142656744939318501ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))));
                    }
                    for (long long int i_17 = 0; i_17 < 23; i_17 += 2) 
                    {
                        arr_59 [i_17] [i_8] [i_8] [i_8] [i_7] = var_7;
                        arr_60 [i_17] [i_15] [7LL] [i_8] [i_7] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                    }
                    var_38 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */int) var_6))))));
                }
                for (short i_18 = 3; i_18 < 19; i_18 += 1) 
                {
                    var_39 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_4)))) != (((((/* implicit */_Bool) arr_29 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_40 [i_7]))))));
                    arr_63 [i_18] [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) (+(3211109445U)))) ? ((-(arr_29 [18ULL] [i_9] [i_8] [i_7]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_1))))));
                }
                arr_64 [i_7] = ((/* implicit */long long int) arr_33 [i_9] [4U]);
            }
            /* LoopSeq 3 */
            for (unsigned char i_19 = 2; i_19 < 22; i_19 += 2) 
            {
                var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) (unsigned char)6))));
                arr_68 [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(max((1494044256U), (((/* implicit */unsigned int) (unsigned char)12))))))) | (max((((((/* implicit */_Bool) 1899571382195739844ULL)) ? (14142656744939318501ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21640))))), (arr_50 [(unsigned char)17] [(unsigned char)17] [i_19] [i_19])))));
            }
            for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 2) 
            {
                var_41 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_53 [i_7] [i_7] [i_7] [i_7])) ? (288230238712758272ULL) : (16520279435679564103ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((3211109438U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21363))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))))))));
                var_42 = ((/* implicit */unsigned long long int) ((max((arr_67 [i_7] [i_7] [i_8]), (((/* implicit */unsigned long long int) max(((unsigned char)0), (arr_46 [i_7] [2U] [i_8] [i_8] [i_20] [i_20])))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((arr_43 [i_7] [i_8] [i_8] [i_8]), (((/* implicit */unsigned long long int) var_5)))))))));
            }
            for (signed char i_21 = 0; i_21 < 23; i_21 += 2) 
            {
                arr_74 [i_7] [i_8] [i_8] [i_21] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)13)) - (((/* implicit */int) var_4))))))), (var_2)));
                var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) max((((((/* implicit */_Bool) 4032933107008695422ULL)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (signed char)-42)))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_7))))))))))));
            }
        }
        var_44 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */int) var_6)) * (((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55))) - (var_9)))))));
    }
    var_45 ^= ((/* implicit */long long int) var_5);
}
