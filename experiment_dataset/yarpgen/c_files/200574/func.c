/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200574
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
    var_13 ^= ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) (~(((((/* implicit */int) ((unsigned short) -16))) >> (((((/* implicit */int) (short)29704)) - (29687)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_2 [i_1])), (var_10)))) ? ((~(((/* implicit */int) arr_2 [i_0])))) : ((~(((/* implicit */int) var_7))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) var_8)) - (32662))))))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_5)))) : (((/* implicit */int) (unsigned short)0))));
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) (short)32740);
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            arr_14 [i_3] [i_3] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152))) == (((((/* implicit */_Bool) -6710199280117152832LL)) ? (((/* implicit */unsigned long long int) arr_0 [i_2] [i_3])) : (18446744073709551593ULL))))))));
            var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (arr_5 [i_2] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_7)))))));
        }
        /* LoopSeq 2 */
        for (short i_4 = 3; i_4 < 11; i_4 += 3) /* same iter space */
        {
            var_17 -= ((/* implicit */short) max((((((/* implicit */int) (_Bool)1)) >> (((arr_0 [i_2] [i_2]) + (62042763748234385LL))))), (((/* implicit */int) ((_Bool) ((arr_0 [i_2] [i_4]) == (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4])))))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((((/* implicit */int) arr_20 [i_2] [i_4 - 2] [i_5] [i_6])), (((((/* implicit */int) ((var_9) <= (4294967295U)))) + (((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)1546)) : (((/* implicit */int) arr_3 [i_5] [i_6])))))))))));
                        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_6) - (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
                        var_20 = ((/* implicit */unsigned short) arr_2 [i_5]);
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [1ULL] [7] [i_6])) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (arr_7 [i_6]))))))) >> (((/* implicit */int) ((((((/* implicit */_Bool) 5889520258132688576ULL)) ? (arr_19 [i_2] [i_2] [i_2] [3U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_4]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_22 = ((unsigned int) max((((((/* implicit */int) arr_4 [i_7 - 1])) / (((/* implicit */int) var_2)))), (((/* implicit */int) ((unsigned short) 1756380094U)))));
                arr_24 [i_2] [i_2] [i_4] [(short)2] &= ((/* implicit */signed char) ((((unsigned int) (-(((/* implicit */int) (_Bool)1))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_7))))));
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2211703304U)) ? (((/* implicit */int) arr_22 [i_4 - 2] [i_4 - 3] [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) (unsigned char)251)))) - (((/* implicit */int) (unsigned char)131)))))));
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_3 [i_4] [i_4 - 1])))) + (((((/* implicit */_Bool) (short)12930)) ? (((/* implicit */long long int) arr_19 [i_7 - 1] [i_4] [i_4 - 1] [i_4 - 2])) : (-1LL))))))));
            }
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
            {
                var_25 = ((max(((~(arr_1 [i_2]))), (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)157))) : (var_6))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_4 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))))) && ((!(((/* implicit */_Bool) arr_26 [i_2] [i_8] [i_8] [i_2])))))))));
                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)102))) / (((long long int) var_7)))), (((/* implicit */long long int) ((max((((/* implicit */long long int) (unsigned char)205)), (-1LL))) >= (((/* implicit */long long int) ((unsigned int) (unsigned short)19680)))))))))));
                arr_28 [i_8] [i_8] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_16 [i_2] [i_4 - 2] [i_8])) ? (((long long int) 1572864)) : (-13LL))), (((/* implicit */long long int) (unsigned char)112))));
            }
        }
        for (short i_9 = 3; i_9 < 11; i_9 += 3) /* same iter space */
        {
            arr_33 [i_2] [i_9] = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)19691)) + (((/* implicit */int) var_10))))), (arr_27 [i_2] [i_2] [i_9 - 1] [i_9])))));
            arr_34 [6LL] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)169)), (var_7))))) != (16032814615117013413ULL)));
        }
    }
    for (short i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_11 = 1; i_11 < 10; i_11 += 3) 
        {
            for (unsigned int i_12 = 2; i_12 < 11; i_12 += 4) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_8 [i_11] [i_12]))));
                    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)64512)) * (((/* implicit */int) arr_18 [i_10] [i_12 - 2]))))), (arr_23 [i_10]))))));
                    var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_11]))))) ? (arr_10 [i_10] [i_10] [i_10]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                }
            } 
        } 
        var_30 = ((/* implicit */short) arr_30 [i_10] [(unsigned char)5]);
    }
    for (short i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_8 [i_13] [i_13])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))) / (((/* implicit */int) max((arr_3 [i_13] [i_13]), (arr_3 [i_13] [i_13])))))) * (((/* implicit */int) var_12))));
        var_32 ^= ((/* implicit */unsigned int) max(((unsigned short)7680), ((unsigned short)7690)));
        /* LoopSeq 3 */
        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
        {
            var_33 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) || (((/* implicit */_Bool) (unsigned short)57855))));
            arr_50 [i_13] [i_13] [i_13] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (347425341) : (((/* implicit */int) (unsigned char)178))))) ? (max((((/* implicit */long long int) arr_3 [i_14] [(short)5])), (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (-1164550370) : (((/* implicit */int) arr_4 [i_14])))))))));
        }
        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
        {
            var_34 ^= ((/* implicit */short) (unsigned short)65535);
            arr_53 [i_15] [i_15] = ((((/* implicit */_Bool) ((((unsigned long long int) (unsigned short)51650)) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25091)) ? (((/* implicit */int) arr_43 [i_13] [i_13])) : (((/* implicit */int) (short)1661)))))))) || (((/* implicit */_Bool) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45846)))))));
            /* LoopSeq 1 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_35 -= ((/* implicit */signed char) ((4489027968703335043ULL) | (((8709224006848537125ULL) << (0LL)))));
                var_36 = ((/* implicit */unsigned char) (unsigned short)27542);
            }
        }
        for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_18 = 2; i_18 < 11; i_18 += 4) 
            {
                for (unsigned char i_19 = 1; i_19 < 10; i_19 += 1) 
                {
                    {
                        arr_62 [i_13] [i_13] = ((/* implicit */unsigned long long int) max(((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_36 [i_19 + 1] [i_13]))))), ((-(arr_36 [i_18] [i_19 - 1])))));
                        var_37 = ((/* implicit */long long int) (((~(((/* implicit */int) ((unsigned short) (unsigned short)14821))))) | (((/* implicit */int) (unsigned short)7))));
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((((/* implicit */int) (signed char)-108)) - (((/* implicit */int) (unsigned char)214)))) / ((+(((/* implicit */int) var_4))))))), ((((_Bool)1) ? (((var_6) / (39LL))) : (max((-2LL), (var_0))))))))));
                        var_39 += ((/* implicit */signed char) ((int) ((int) 9223372036854775807LL)));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned char i_20 = 0; i_20 < 12; i_20 += 2) /* same iter space */
            {
                arr_65 [i_13] [i_17] &= ((/* implicit */short) max((((/* implicit */int) arr_30 [i_17] [i_20])), (((((/* implicit */_Bool) 1842458387U)) ? (((/* implicit */int) arr_52 [i_17])) : (((/* implicit */int) arr_52 [i_13]))))));
                var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) arr_17 [i_17] [i_17] [i_20] [i_13])))))));
            }
            /* vectorizable */
            for (unsigned char i_21 = 0; i_21 < 12; i_21 += 2) /* same iter space */
            {
                var_41 ^= ((/* implicit */unsigned short) 8241552583890421408LL);
                /* LoopNest 2 */
                for (long long int i_22 = 0; i_22 < 12; i_22 += 4) 
                {
                    for (unsigned short i_23 = 1; i_23 < 11; i_23 += 4) 
                    {
                        {
                            var_42 -= ((/* implicit */unsigned short) ((arr_52 [i_21]) ? (arr_23 [i_17]) : (((/* implicit */long long int) 4294967295U))));
                            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) ((signed char) arr_40 [i_23 - 1])))));
                            var_44 = ((/* implicit */signed char) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_13] [i_21] [i_21])))));
                        }
                    } 
                } 
            }
            for (unsigned char i_24 = 0; i_24 < 12; i_24 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_25 = 0; i_25 < 12; i_25 += 2) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned int) (unsigned char)112);
                            var_46 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_40 [i_26])) || (((/* implicit */_Bool) arr_40 [i_13])))) ? (((((/* implicit */int) arr_40 [i_13])) * (((/* implicit */int) arr_40 [i_24])))) : (((((/* implicit */_Bool) arr_40 [i_13])) ? (((/* implicit */int) arr_40 [i_13])) : (((/* implicit */int) arr_40 [i_26]))))));
                            var_47 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10))));
                        }
                    } 
                } 
                arr_83 [i_17] [i_17] = ((var_6) ^ (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 3989258643U)))));
            }
            for (unsigned char i_27 = 0; i_27 < 12; i_27 += 2) /* same iter space */
            {
                var_48 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65533))));
                var_49 += ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_27])) >= (((/* implicit */int) arr_56 [i_13] [i_17] [i_27])))))));
                var_50 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)1)) >> (((((/* implicit */int) var_8)) - (32659))))) - (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_78 [i_13])))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_73 [i_13] [i_13])) || (((/* implicit */_Bool) arr_46 [i_17]))))))))));
            }
        }
        var_51 = ((/* implicit */long long int) ((12079302544918698519ULL) >> (((/* implicit */int) ((((/* implicit */_Bool) 18LL)) || (((/* implicit */_Bool) 11LL)))))));
    }
}
