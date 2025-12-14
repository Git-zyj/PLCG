/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221446
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
    var_20 -= ((/* implicit */unsigned long long int) (((+((+(1189611729U))))) << (((var_9) - (1787383675U)))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-29059)), ((~(14743347087308336918ULL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_11)) ? (12U) : (var_10))) : (var_15))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) (signed char)-118)) + (119)))))) : (72057594037927935LL)));
        var_23 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_1] [i_0] [i_1] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 214519612U)))))) | (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (var_9)))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_16))));
                        }
                        var_25 = ((/* implicit */long long int) arr_11 [4ULL] [i_1] [4ULL] [i_1] [i_0] [i_3] [i_3]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 1; i_5 < 18; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 1; i_8 < 19; i_8 += 4) 
                        {
                            {
                                var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29036)) ? (arr_12 [i_0] [i_0] [i_0] [i_0 + 3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */_Bool) arr_11 [i_0] [(unsigned short)11] [i_0] [i_6] [i_0] [i_7] [i_7])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)10)))) : (((/* implicit */int) ((short) var_2))));
                                var_27 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)232)) * (((/* implicit */int) (short)(-32767 - 1)))));
                                var_28 |= ((/* implicit */unsigned char) (-(1583009132U)));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_9 = 3; i_9 < 19; i_9 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            arr_31 [i_0] [i_0] [i_0] [i_0] [14U] [i_0] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_23 [5ULL] [i_5 + 2] [(signed char)17] [(signed char)17] [5U])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_12 [i_5] [i_5] [i_6] [i_5] [i_0]))));
                            var_29 = ((/* implicit */unsigned long long int) var_5);
                            arr_32 [18U] [i_10 + 1] [(_Bool)1] [18U] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) var_15);
                        }
                        arr_33 [i_0] [i_0 - 2] [i_0 - 2] [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [i_0]);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            var_30 = ((/* implicit */unsigned int) ((_Bool) var_0));
                            arr_38 [(signed char)17] [i_5] [(signed char)2] [i_11] [i_0] = ((/* implicit */signed char) arr_25 [i_0 + 3] [i_0 + 2] [i_0 + 2] [i_0 + 3]);
                            arr_39 [i_0] [i_0] = ((/* implicit */short) arr_17 [i_0] [i_0] [i_0]);
                            var_31 -= ((/* implicit */int) (!(var_19)));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2301937950584093372ULL)) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0])))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_33 = ((/* implicit */signed char) arr_6 [i_13] [10LL] [i_5 + 2] [i_5 + 2]);
                            var_34 = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)124)) << (((((15245125445882860361ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))))) - (15245125445882881477ULL)))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)124)) << (((((((15245125445882860361ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0]))))) - (15245125445882881477ULL))) - (18446744073709528831ULL))))));
                            var_35 = ((((/* implicit */_Bool) (unsigned short)1)) || (((/* implicit */_Bool) var_0)));
                            arr_44 [i_0] [i_0] [i_11] [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_37 [i_6] [i_5 + 2] [i_6] [i_6] [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned char)250)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) : (var_3)))));
                        }
                        var_36 &= (short)29059;
                        var_37 ^= (~(arr_11 [i_0] [i_0 + 3] [i_5] [i_5] [(signed char)8] [i_6] [i_5]));
                        /* LoopSeq 4 */
                        for (unsigned char i_14 = 3; i_14 < 19; i_14 += 3) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned char) var_5);
                            var_39 = ((/* implicit */long long int) arr_29 [i_0] [i_0] [i_6] [i_11] [i_0]);
                            arr_47 [i_0] [i_0] [i_6] [i_5] [i_0] = ((/* implicit */int) 5U);
                        }
                        for (unsigned char i_15 = 3; i_15 < 19; i_15 += 3) /* same iter space */
                        {
                            var_40 |= ((/* implicit */_Bool) ((short) ((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))))));
                            var_41 = arr_3 [i_0] [i_0];
                            var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)39575))));
                            var_43 = ((/* implicit */unsigned long long int) ((arr_48 [i_5 + 1] [i_0 + 3]) ^ (arr_48 [i_5 - 1] [i_0 + 1])));
                            arr_50 [i_0] = (!(((/* implicit */_Bool) arr_30 [i_0] [i_0 - 1] [i_0 + 4] [i_5 + 1] [i_15 - 2])));
                        }
                        for (unsigned char i_16 = 3; i_16 < 19; i_16 += 3) /* same iter space */
                        {
                            var_44 = ((/* implicit */int) arr_35 [i_0]);
                            var_45 = ((/* implicit */signed char) arr_21 [i_11] [i_5 - 1] [i_5 - 1] [i_5 - 1]);
                            arr_54 [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_0] [i_0 - 4] [i_0] [i_0] [i_5 - 1])) ? (arr_23 [i_0 + 3] [i_0 + 1] [i_0 + 3] [i_0 + 1] [i_5 + 2]) : (arr_23 [i_0] [i_0 + 2] [8U] [i_0 + 2] [i_5 + 1])));
                            arr_55 [i_0] [(unsigned short)0] [i_6] [(_Bool)1] [i_16] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [(short)16] [i_16 - 2] [i_16 - 2] [i_16 - 2] [0])) ? (((/* implicit */int) arr_19 [i_0] [i_11] [(_Bool)1])) : (((/* implicit */int) (unsigned char)255))));
                            arr_56 [i_5] [i_6] [i_0] [i_11] [i_16 - 3] [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (short)32759)) ? (6934228526540954326ULL) : (((/* implicit */unsigned long long int) 0U))));
                        }
                        for (unsigned char i_17 = 3; i_17 < 19; i_17 += 3) /* same iter space */
                        {
                            var_46 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [1U])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_26 [i_0] [i_0] [i_0] [i_0]) && (((/* implicit */_Bool) arr_28 [i_0] [(unsigned short)13] [i_0] [(unsigned short)13] [i_0] [i_17 - 2])))))) : (((((/* implicit */_Bool) -562148098)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) : (0U)))));
                            var_47 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)4)) ? (1052238239) : (((/* implicit */int) (short)32746))));
                            var_48 = ((/* implicit */unsigned short) (+(var_15)));
                        }
                    }
                    for (signed char i_18 = 0; i_18 < 20; i_18 += 3) 
                    {
                        arr_61 [(short)16] [(short)16] [(short)16] [(short)16] [(short)16] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)24))))) % (((/* implicit */int) ((var_2) && (((/* implicit */_Bool) (-2147483647 - 1))))))));
                        arr_62 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) var_16))));
                        var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 1])) ? (var_9) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (1169047371U))))))));
                    }
                }
            } 
        } 
    }
    for (short i_19 = 1; i_19 < 10; i_19 += 3) 
    {
        var_50 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [(signed char)6] [(signed char)6] [(signed char)6] [i_19] [i_19]))));
        var_51 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_23 [i_19] [i_19] [i_19 + 3] [i_19 - 1] [i_19 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_23 [i_19] [(unsigned short)9] [(unsigned short)9] [(unsigned short)9] [i_19]))), (arr_30 [11U] [(unsigned char)5] [(unsigned char)5] [i_19] [(unsigned char)5])));
    }
    var_52 |= ((unsigned int) 1023718622U);
}
