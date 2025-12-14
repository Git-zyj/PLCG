/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32185
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
    var_18 = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_15)) >> (((/* implicit */int) var_9))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [5U])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_12)))))))) ? (289501404863712886LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_14))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 289501404863712886LL)) ? (0ULL) : (268435455ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_16)), (-289501404863712875LL)))) == (((((/* implicit */_Bool) 14ULL)) ? (11832047167759696690ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))))));
                            var_19 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)0)), (18446744073709551615ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        var_20 = ((/* implicit */_Bool) ((min((var_5), (((/* implicit */unsigned long long int) 1697537230U)))) | (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (unsigned char i_6 = 2; i_6 < 20; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 1697537230U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551597ULL)) ? (((/* implicit */int) (unsigned short)65526)) : (((/* implicit */int) (unsigned short)0))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) arr_17 [i_4] [i_4] [(unsigned char)5] [i_5])))))))) : (6614696905949854926ULL)));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65526))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)8355)))))))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            var_23 = ((/* implicit */signed char) min(((-9223372036854775807LL - 1LL)), (9223372036854775807LL)));
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) arr_2 [9LL] [i_5]))));
                        }
                        for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            arr_28 [i_5] [i_5] = ((/* implicit */signed char) 1329485534);
                            var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned short)51362)), (6614696905949854910ULL)));
                            arr_29 [i_4] [i_5] [i_4] [i_4] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)50680)) ? (max((1585845312U), (3650881274U))) : (min((((/* implicit */unsigned int) arr_13 [i_6] [i_6 - 1])), (var_13)))));
                            var_26 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-32754))) + (9223372036854775788LL)));
                        }
                        /* vectorizable */
                        for (long long int i_10 = 4; i_10 < 18; i_10 += 4) 
                        {
                            var_27 = ((/* implicit */short) 8ULL);
                            arr_32 [i_6] [i_5] [i_6] [i_5] [12U] = ((/* implicit */int) ((arr_27 [(unsigned char)19] [i_5] [i_5] [i_5] [(unsigned short)10] [i_10 + 4] [i_7]) <= (((/* implicit */int) (unsigned short)10159))));
                            var_28 -= ((/* implicit */unsigned char) (((+(arr_30 [i_4] [i_4] [i_6 + 2] [i_7] [i_4] [i_4]))) > ((-(arr_30 [(short)2] [i_5] [i_5] [i_6] [i_5] [i_5])))));
                            var_29 &= ((/* implicit */short) arr_10 [i_4] [i_10 - 1]);
                        }
                        var_30 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) 9223372036854775807LL)))))) ? (1585845312U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_4] [i_5] [i_5] [i_5] [i_4])))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned short) max((((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) arr_18 [i_4] [i_4] [i_4])) <= (-8176099198244343208LL)))) != (((/* implicit */int) var_10))))), ((short)-6601)));
        /* LoopNest 2 */
        for (unsigned char i_11 = 1; i_11 < 18; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                {
                    var_32 = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 1612969147U)) ? (arr_26 [i_12] [i_11] [i_12] [i_12] [i_12] [i_11]) : (arr_26 [i_4] [i_4] [i_12] [i_12] [i_12] [i_11]))) : (((/* implicit */int) var_15)));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        for (short i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            {
                                var_33 += (+(((/* implicit */int) ((arr_31 [i_14] [i_12] [i_11 + 1] [i_11] [i_11] [i_4]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
                                arr_45 [i_4] [i_4] [i_4] [i_4] [i_11] [i_4] = ((/* implicit */_Bool) ((min((arr_31 [i_13] [7LL] [i_12] [i_13] [i_11 + 2] [7LL]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_17))))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (268435455ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65511))))) >= (((/* implicit */unsigned long long int) ((-948031875) - (((/* implicit */int) (unsigned short)55376)))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_15 = 4; i_15 < 21; i_15 += 4) 
                    {
                        arr_49 [i_4] [(_Bool)1] [i_15] [(short)14] [i_12] [i_15] &= ((/* implicit */long long int) (~((((+(var_3))) * (arr_43 [i_4] [i_4] [i_15] [i_15 - 1])))));
                        arr_50 [i_4] [i_4] [i_4] [i_4] [i_11] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (2867282285U)))) ? (((((/* implicit */_Bool) (unsigned short)36656)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)55367))))) : (max((4294967295U), (((/* implicit */unsigned int) var_15)))))) : (min(((~(4294967295U))), (((/* implicit */unsigned int) arr_13 [i_4] [i_4]))))));
                    }
                    for (unsigned long long int i_16 = 2; i_16 < 19; i_16 += 3) 
                    {
                        arr_53 [i_4] [i_11] [(unsigned char)20] [i_11] [(unsigned char)14] [i_16 + 3] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                        /* LoopSeq 4 */
                        for (int i_17 = 3; i_17 < 19; i_17 += 4) 
                        {
                            arr_57 [i_4] [i_11] = 0ULL;
                            var_34 = ((/* implicit */short) min((((max((0ULL), (((/* implicit */unsigned long long int) 1329485505)))) != (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) arr_17 [i_4] [12U] [i_16] [i_11]))))))), ((!(((_Bool) 1329485534))))));
                            arr_58 [i_11] [i_16 - 2] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_15 [i_16] [i_16] [i_16 - 1])))) ? (((/* implicit */int) arr_46 [20] [i_11] [i_11 + 4] [i_16] [i_17])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (1293959799U))))));
                        }
                        /* vectorizable */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            arr_62 [i_4] [i_11] [i_12] [i_16] [i_16] [i_4] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_4) + (2147483647))) >> (((arr_43 [i_4] [i_4] [i_16] [i_4]) - (9833627555339171905ULL)))))) ? (1329485534) : (((/* implicit */int) (unsigned short)8160))));
                            var_35 = ((/* implicit */unsigned char) ((((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) (signed char)127)))) : (arr_18 [i_16] [i_11] [i_12])));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 2) 
                        {
                            var_36 -= ((/* implicit */short) ((var_17) || (var_17)));
                            var_37 = ((/* implicit */unsigned int) ((int) (unsigned char)0));
                            arr_66 [i_4] [i_11] [i_11] [i_16] [12U] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
                            var_38 = ((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))));
                        }
                        for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 3) 
                        {
                            var_39 = ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) 8176099198244343208LL)))) ? (((((/* implicit */_Bool) arr_56 [i_4] [i_12] [i_4] [(unsigned short)12] [i_4])) ? (((/* implicit */unsigned long long int) 1023U)) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_15)))))), (((((/* implicit */_Bool) ((0ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))) ? (max((var_14), (((/* implicit */unsigned long long int) arr_51 [17] [i_11] [i_11] [i_12] [i_16] [17])))) : (((/* implicit */unsigned long long int) (+(arr_3 [i_11]))))))));
                            arr_71 [i_4] [i_4] [i_12] [i_12] [i_16] [i_20] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))));
                        }
                    }
                }
            } 
        } 
    }
    for (unsigned char i_21 = 0; i_21 < 23; i_21 += 4) 
    {
        var_40 ^= var_11;
        var_41 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) / (var_6)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_16)), (arr_5 [i_21] [i_21] [i_21])))) : (((/* implicit */int) ((1U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_21])))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) var_1))))))))));
    }
}
