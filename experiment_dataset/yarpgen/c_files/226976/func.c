/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226976
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
    var_13 = ((/* implicit */long long int) (~(9171189892297387598ULL)));
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_9))));
    var_15 = ((/* implicit */short) 956050885U);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((unsigned long long int) 3338916410U)))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0] [i_1]), (((/* implicit */unsigned short) (unsigned char)4)))))) - ((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (9275554181412164018ULL) : (((/* implicit */unsigned long long int) var_11))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)0))));
                        var_18 = ((/* implicit */unsigned short) (+(var_12)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_19 = ((/* implicit */signed char) arr_13 [i_0] [i_5] [i_2] [i_2] [i_0]);
                        arr_19 [i_0] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) (+(min((arr_18 [i_0] [i_2]), (((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) var_2)) : (9275554181412164017ULL)))))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? ((+(((/* implicit */int) arr_6 [i_0] [i_0] [i_5])))) : (((((/* implicit */int) arr_6 [i_6] [i_2] [i_0])) >> ((((-(((/* implicit */int) (_Bool)1)))) + (24)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    {
                        var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (short)8192))) ? (((((/* implicit */unsigned int) 506541564)) ^ (((((/* implicit */_Bool) (unsigned short)35157)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39944))) : (956050887U))))) : (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)2421)) : (((/* implicit */int) (_Bool)1)))))));
                        var_22 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_9 = 0; i_9 < 11; i_9 += 2) /* same iter space */
            {
                arr_29 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) var_6);
                /* LoopSeq 3 */
                for (int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(arr_28 [i_0] [i_0] [i_0])))), (min((((((/* implicit */_Bool) 956050900U)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (unsigned char)244))))));
                    var_24 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_2])) ? (arr_21 [(unsigned short)7] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) > (((((/* implicit */unsigned long long int) (~(9223372036854775807LL)))) % (((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)91))))))));
                    var_25 |= ((/* implicit */long long int) min((max((3338916388U), (((/* implicit */unsigned int) -1412898658)))), (((/* implicit */unsigned int) (((+(((/* implicit */int) (_Bool)0)))) / (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0])))))));
                    var_26 &= ((/* implicit */short) max(((+((-(var_12))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (max((var_12), (arr_18 [i_9] [i_10])))))));
                    var_27 |= ((/* implicit */_Bool) arr_1 [i_10] [i_0]);
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_28 -= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (144115188059078656LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68)))))));
                    arr_36 [i_0] [i_2] [i_9] [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0] [i_2] [i_9] [i_11]))));
                }
                /* vectorizable */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_29 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_9] [i_12]))));
                    arr_41 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -3827716806948163716LL)) % (4729759110094527257ULL)))) ? (((((/* implicit */_Bool) arr_39 [i_0] [i_2] [i_9] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187))) : (arr_15 [i_9]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                    arr_42 [i_0] [i_2] [i_9] [i_12] &= ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) == (((/* implicit */int) (unsigned short)32736))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        arr_49 [i_0] [i_2] [i_9] [i_13] [i_14] = ((/* implicit */unsigned char) var_2);
                        arr_50 [i_0] [i_2] [3ULL] [i_14] = ((/* implicit */int) (-(((((3878746784U) << (((((/* implicit */int) (unsigned char)156)) - (135))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (-1412898658) : (((/* implicit */int) (_Bool)1)))))))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), ((unsigned char)21)));
                        var_31 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_40 [i_0]))))) ? ((-(min((arr_39 [i_0] [i_2] [i_9] [i_0]), (13336705124892347967ULL))))) : (((/* implicit */unsigned long long int) var_7))));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) arr_43 [i_0] [i_9] [i_9]))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)24471))))) ? (((/* implicit */int) ((_Bool) arr_20 [i_13] [i_9] [i_2]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_20 [i_0] [i_9] [i_9])) : (((/* implicit */int) var_0))))))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (+((-(((((/* implicit */int) arr_22 [i_2] [i_9] [i_15])) + (2147483644))))))))));
                        var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_28 [i_15] [i_2] [i_13])) <= ((+(arr_12 [i_15] [i_9] [i_0]))))))) + ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (18446744073709551615ULL)))))));
                    }
                    for (unsigned long long int i_16 = 0; i_16 < 11; i_16 += 4) 
                    {
                        var_35 |= ((/* implicit */long long int) max((arr_44 [i_0] [i_0] [i_0] [i_0]), (((((/* implicit */_Bool) arr_54 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_37 [i_16] [i_13] [i_9] [i_2] [i_0])) : (((/* implicit */int) arr_37 [i_0] [i_2] [i_9] [i_13] [i_9]))))));
                        arr_55 [i_0] [i_2] [i_13] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)22868))));
                        var_36 = ((/* implicit */short) (~(((18446744073709551615ULL) & (((/* implicit */unsigned long long int) 536870911LL))))));
                        var_37 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)25715)) ? (((/* implicit */int) arr_7 [i_0] [i_2])) : (((/* implicit */int) (_Bool)1))))))) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_44 [i_16] [i_13] [i_2] [i_0])) : ((-(arr_4 [i_2] [i_16]))))) : (max(((~(9171189892297387597ULL))), (((/* implicit */unsigned long long int) (unsigned short)8717)))));
                    }
                    var_38 = ((/* implicit */_Bool) (+((+((+(var_10)))))));
                    var_39 -= ((/* implicit */unsigned char) (-(arr_10 [i_0] [i_2] [i_9] [i_13])));
                }
                for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 2) 
                {
                    var_40 *= ((/* implicit */unsigned char) (((+(12896121340981624717ULL))) * (((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_0] [i_2] [i_9] [i_17]))))))));
                    var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)107))));
                    var_42 -= ((/* implicit */_Bool) (~((-(-1)))));
                    var_43 = ((/* implicit */unsigned int) max(((-(1110092681227108021ULL))), (max(((-(arr_38 [i_0] [i_0] [i_0] [i_17]))), (min((var_6), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                }
                var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)25715))) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_9])) ? (arr_17 [i_9] [i_2] [i_0]) : (arr_17 [i_0] [i_2] [i_9]))) : (arr_17 [i_0] [i_2] [i_9])));
            }
            for (int i_18 = 0; i_18 < 11; i_18 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_58 [i_0] [i_2] [i_18] [i_2])) >= (((-1) * (((/* implicit */int) (unsigned short)22987))))));
                            var_46 |= ((/* implicit */short) var_0);
                        }
                    } 
                } 
                arr_69 [i_0] [i_0] [i_18] = ((/* implicit */unsigned long long int) (((~(7181703951613727163LL))) <= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                /* LoopNest 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (long long int i_22 = 0; i_22 < 11; i_22 += 2) 
                    {
                        {
                            arr_76 [i_22] [i_21] [i_18] [i_21] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % ((-(arr_70 [i_2] [i_18] [i_21] [i_22]))));
                            var_47 *= ((18446744073709551615ULL) & (13788449718804572041ULL));
                            var_48 = ((/* implicit */unsigned long long int) max((var_48), (5128814201795999107ULL)));
                            arr_77 [i_18] [i_22] [i_21] [i_18] [i_0] [i_0] [i_18] |= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                arr_78 [i_0] [i_2] [i_18] = 18429862432862818074ULL;
            }
        }
        /* LoopNest 2 */
        for (unsigned int i_23 = 0; i_23 < 11; i_23 += 4) 
        {
            for (unsigned char i_24 = 0; i_24 < 11; i_24 += 4) 
            {
                {
                    arr_84 [i_23] [i_23] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_0] [i_0] [i_23] [i_0]))) / (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_8 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((9223372036854775800LL) - (9223372036854775770LL)))))) ? ((((_Bool)1) ? (arr_72 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42555))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-31819)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) arr_52 [i_0] [i_23] [i_24] [i_0] [i_0]))))))))));
                    var_49 = ((/* implicit */_Bool) ((unsigned char) arr_4 [i_0] [i_23]));
                    var_50 = ((/* implicit */long long int) arr_66 [i_0] [i_0] [i_0] [i_0] [i_23] [i_24] [i_24]);
                    var_51 |= ((/* implicit */short) (~(var_7)));
                }
            } 
        } 
        arr_85 [i_0] = ((/* implicit */short) (~(2432845048U)));
        var_52 = ((/* implicit */long long int) (short)-32760);
    }
}
