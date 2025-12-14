/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41997
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((signed char) 3830732058975870717LL)))));
        /* LoopSeq 3 */
        for (int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) (signed char)-18);
            arr_4 [3] [3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 3] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_0 - 1])) : (arr_1 [i_0 + 1])));
            var_17 &= -2361853978100360104LL;
        }
        for (signed char i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
        {
            var_18 ^= ((/* implicit */unsigned short) var_14);
            var_19 = ((/* implicit */int) max((var_19), (arr_1 [i_0 - 1])));
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_12))));
        }
        for (signed char i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_3] [i_0] = ((/* implicit */unsigned int) ((_Bool) (!((_Bool)1))));
            arr_12 [i_0] = ((/* implicit */_Bool) ((long long int) arr_7 [i_0]));
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    var_21 *= ((/* implicit */_Bool) arr_16 [i_5] [i_4] [i_0 - 1] [i_3] [i_0 - 1] [i_0 + 1]);
                    var_22 += ((/* implicit */signed char) ((int) arr_18 [(signed char)4]));
                    arr_19 [i_0] [i_3] [i_4] [i_0] = ((/* implicit */signed char) var_12);
                    arr_20 [i_0] [i_0] [i_4] = ((arr_2 [i_0] [i_0 + 1]) != (((/* implicit */int) arr_0 [i_0 - 1] [i_3])));
                }
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    arr_23 [i_0] [i_4] [i_4] [i_3] [i_0] = ((/* implicit */signed char) -3830732058975870719LL);
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2482)) ? (((/* implicit */long long int) arr_1 [i_3])) : (9223372036854775807LL)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_6])) && (((/* implicit */_Bool) 946891451U))))))))));
                }
                for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
                {
                    arr_28 [i_3] [i_3] [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 741145092))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
                    arr_29 [i_0] [i_4] [i_3] [i_0] = ((/* implicit */_Bool) ((arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1]) | (var_11)));
                }
            }
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned int) ((unsigned short) var_0));
                            arr_40 [i_9] &= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) - (var_11)));
                            arr_41 [i_10] [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-21776)))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (~(((unsigned int) var_5)))))));
                            var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_10] [i_10] [i_10] [i_10])) ? (arr_34 [i_0] [i_3] [i_8] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (short)32752)))));
                        }
                    } 
                } 
                arr_42 [i_0 + 1] [i_3] [i_0] [i_8] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (short)-21770)) : (((/* implicit */int) (signed char)7))));
            }
            var_28 += ((/* implicit */signed char) arr_32 [2] [i_0 - 1] [i_0] [(_Bool)1]);
        }
        var_29 = ((/* implicit */unsigned char) (unsigned short)2774);
        /* LoopNest 3 */
        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
        {
            for (short i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    {
                        var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-4096)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1U)));
                        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) arr_26 [i_0] [i_0] [i_11] [i_12] [i_13]))));
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((_Bool) arr_24 [2U] [i_13] [2U] [i_11] [i_0] [2U])))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 9; i_14 += 3) /* same iter space */
    {
        arr_55 [i_14] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (arr_3 [i_14]));
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8386560)) ? (((/* implicit */int) (short)5814)) : (((/* implicit */int) (short)2482))));
        arr_56 [i_14] = ((/* implicit */_Bool) ((short) (signed char)97));
        arr_57 [i_14] = ((/* implicit */unsigned short) (+(((int) (unsigned short)3615))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 3) 
    {
        var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) arr_58 [i_15] [i_15]))));
        var_35 = ((/* implicit */int) (-(min((((/* implicit */unsigned int) 741145062)), (3924299686U)))));
        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_59 [i_15])) ? ((((_Bool)1) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) (unsigned short)56193)) ? (arr_59 [i_15]) : (arr_59 [i_15]))))) : ((((-(arr_59 [i_15]))) + (((/* implicit */long long int) (+(741145052))))))));
    }
    for (int i_16 = 0; i_16 < 19; i_16 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (int i_18 = 0; i_18 < 19; i_18 += 1) 
            {
                {
                    var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (short)32755))));
                    arr_66 [i_18] [i_17] [i_16] = var_3;
                }
            } 
        } 
        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_6))))))));
        /* LoopSeq 1 */
        for (unsigned int i_19 = 0; i_19 < 19; i_19 += 3) 
        {
            var_39 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) min((3830732058975870719LL), (((/* implicit */long long int) arr_67 [i_19] [i_16] [i_16])))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)32765)))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0)))) : (6471335616806435048ULL)));
            /* LoopSeq 1 */
            for (unsigned int i_20 = 0; i_20 < 19; i_20 += 1) 
            {
                var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1349211908U))));
                var_41 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_59 [i_20])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (var_14)));
                arr_73 [i_16] [i_16] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_70 [i_16] [2U]))))));
            }
            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_65 [i_16] [10]))))) ? (((/* implicit */int) (signed char)-18)) : ((-((~(((/* implicit */int) var_4))))))));
            var_43 = ((/* implicit */unsigned int) max((var_43), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32755)) ? (var_11) : (var_9)))) ? (-3830732058975870737LL) : (((/* implicit */long long int) (+(var_6))))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((1125899906842623LL) <= (arr_59 [i_19])))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))))) : (3913859269U)))));
            var_44 = ((/* implicit */unsigned short) var_2);
        }
        var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) (~(4175043972U))))));
        var_46 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_60 [i_16] [i_16]))) | (((/* implicit */int) min((arr_63 [i_16]), (arr_63 [i_16]))))));
    }
    for (int i_21 = 0; i_21 < 19; i_21 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_22 = 0; i_22 < 19; i_22 += 2) 
        {
            for (signed char i_23 = 0; i_23 < 19; i_23 += 4) 
            {
                {
                    var_47 = ((/* implicit */int) min((var_47), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (short)14589))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) (signed char)-53)))), (var_3)))));
                    arr_81 [i_21] [18ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_80 [i_21] [16])) ? (507563693) : (arr_77 [i_23] [i_22] [i_21])));
                }
            } 
        } 
        var_48 += ((/* implicit */_Bool) 4026531840U);
        var_49 += ((/* implicit */long long int) ((((/* implicit */_Bool) -26LL)) && (((/* implicit */_Bool) 0U))));
        var_50 = ((/* implicit */unsigned int) min((var_50), (var_13)));
    }
}
