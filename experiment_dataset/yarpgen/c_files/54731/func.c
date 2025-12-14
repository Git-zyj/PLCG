/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54731
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
    var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)48))));
    var_20 = ((/* implicit */unsigned long long int) ((int) (unsigned short)65535));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_21 = 15U;
        /* LoopSeq 2 */
        for (unsigned char i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                arr_7 [i_2] [i_2] [i_2] [i_0] = ((((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2)))))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) 4294967270U)) ? (24U) : (15U))), (((/* implicit */unsigned int) var_0))))) : (max((((/* implicit */long long int) ((short) 29U))), (((((/* implicit */_Bool) 22U)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_2] [i_2]))))))));
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_2 [i_2 - 1] [i_2 + 1] [i_2 - 1])))) ? (((unsigned int) 7297389449263196848ULL)) : (((((/* implicit */_Bool) var_13)) ? (2386309552U) : (((/* implicit */unsigned int) arr_2 [i_2 - 1] [i_2 + 1] [i_2 - 1]))))));
                var_23 |= ((/* implicit */long long int) (short)32766);
            }
            var_24 *= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) 3446451888U))))) >> ((((~((+(7297389449263196863ULL))))) - (11149354624446354741ULL)))));
            var_25 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 4294967281U)) ? (arr_3 [i_1 - 4] [i_1 - 4] [i_1 + 1]) : (arr_3 [i_1 - 2] [i_1 - 3] [i_1 - 2]))));
            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-5262))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)255)), (7297389449263196863ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)131))) + (6563055059419452624LL))))))));
        }
        for (long long int i_3 = 2; i_3 < 16; i_3 += 3) 
        {
            arr_10 [i_3] [i_0] [i_3] = (+(6563055059419452609LL));
            var_27 = ((/* implicit */unsigned char) ((unsigned short) ((_Bool) 16911433728LL)));
            var_28 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_13)))) ? (arr_1 [i_0]) : (max(((+(7297389449263196863ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-15513)))))))));
            var_29 = ((/* implicit */signed char) max(((-(5U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -2147164398)))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned int) var_14);
        /* LoopSeq 3 */
        for (unsigned char i_5 = 4; i_5 < 22; i_5 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_6 = 2; i_6 < 20; i_6 += 3) 
            {
                var_31 = ((/* implicit */long long int) var_11);
                arr_18 [i_5] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)65529)))));
                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_13 [(short)22] [(short)22]))) < (-6563055059419452622LL))) ? (((/* implicit */int) ((4334686706038670729ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_4] [(short)18])))))) : (((/* implicit */int) arr_16 [i_4])))))));
            }
            arr_19 [i_4] = ((/* implicit */unsigned char) var_3);
        }
        for (short i_7 = 2; i_7 < 21; i_7 += 1) 
        {
            var_33 &= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) 15208975688771990695ULL))) >= (var_0)));
            var_34 = ((/* implicit */unsigned int) (+(var_10)));
            arr_22 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_7] [i_4])) || (((/* implicit */_Bool) var_10))));
            arr_23 [i_7] [i_7] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) (short)3919)) : (((/* implicit */int) var_5))))));
        }
        for (signed char i_8 = 3; i_8 < 22; i_8 += 2) 
        {
            arr_26 [i_4] [i_8 - 3] = arr_15 [i_4];
            var_35 = ((/* implicit */unsigned int) ((short) (short)-22265));
            var_36 *= ((/* implicit */unsigned int) var_6);
        }
    }
    /* vectorizable */
    for (unsigned char i_9 = 1; i_9 < 21; i_9 += 2) /* same iter space */
    {
        var_37 = ((/* implicit */int) (-(((unsigned long long int) var_6))));
        var_38 = ((unsigned short) var_7);
        var_39 = ((/* implicit */unsigned short) (unsigned char)255);
    }
    for (unsigned char i_10 = 1; i_10 < 21; i_10 += 2) /* same iter space */
    {
        var_40 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_6)) ? (14112057367670880878ULL) : (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_10])) ? (386835155) : (((/* implicit */int) var_18))))))) != (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2091)) | (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 23; i_13 += 4) 
                    {
                        var_41 |= ((_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) arr_29 [i_13])) : (var_1)));
                        var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (short)21701)), ((((!(((/* implicit */_Bool) (unsigned short)3864)))) ? (max((((/* implicit */unsigned long long int) 2147164402)), (2672705234418310535ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))))))))))));
                        var_43 = ((/* implicit */unsigned char) 2756986281U);
                    }
                    for (long long int i_14 = 1; i_14 < 22; i_14 += 1) 
                    {
                        var_44 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((arr_36 [i_10] [i_12] [(unsigned short)10] [i_14] [i_14]) + (((/* implicit */long long int) ((/* implicit */int) (short)32766)))))), ((~(4334686706038670715ULL)))));
                        arr_40 [i_12] [i_10] = ((/* implicit */unsigned short) ((unsigned int) 15774038839291241080ULL));
                        arr_41 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)246)) % (((/* implicit */int) (short)-22267)))) << (((((/* implicit */int) arr_34 [i_14 + 1] [i_11] [i_10 - 1] [i_10])) - (6450)))))) : ((-9223372036854775807LL - 1LL))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_15 = 3; i_15 < 21; i_15 += 4) 
                        {
                            arr_46 [i_11] [i_10] = ((/* implicit */unsigned int) 18446744073709551612ULL);
                            var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) (unsigned char)4))));
                            arr_47 [i_14] [i_11] [i_14] [(_Bool)1] [i_10] = ((/* implicit */int) 14112057367670880886ULL);
                        }
                        for (signed char i_16 = 0; i_16 < 23; i_16 += 4) 
                        {
                            arr_50 [i_16] [i_14] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) arr_11 [i_16] [i_10]);
                            arr_51 [i_11] [i_10] = ((/* implicit */int) (unsigned char)255);
                            var_46 = ((/* implicit */int) arr_48 [i_10] [i_10] [i_12] [i_14] [i_16]);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            var_47 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_17 - 1] [i_17 - 1] [3] [i_17 - 1] [i_17] [i_17])) ? (((/* implicit */int) arr_38 [i_17 - 1] [i_17] [i_17] [i_17 - 1] [i_17 - 1] [i_17])) : (((/* implicit */int) var_9))))) ? ((-(((/* implicit */int) (short)32757)))) : (((/* implicit */int) arr_38 [i_17 - 1] [i_17 - 1] [i_17] [i_17 - 1] [i_17] [i_17 - 1]))));
                            var_48 ^= ((/* implicit */unsigned long long int) (unsigned short)48413);
                        }
                    }
                    arr_54 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (2633160459323896366ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((2147164401), (((/* implicit */int) (short)16383))))) ? (arr_33 [i_10]) : (((/* implicit */int) arr_44 [i_10] [i_10 + 2] [i_10 + 2] [i_10] [i_10])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 2; i_18 < 22; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 0; i_19 < 23; i_19 += 2) 
                        {
                            {
                                var_49 = (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)62081)), (arr_27 [i_12])))));
                                arr_60 [i_10] [i_10] [i_11] [i_10] [i_19] = ((/* implicit */_Bool) (+(((unsigned int) arr_48 [i_10] [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10]))));
                                var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) var_18))));
                            }
                        } 
                    } 
                    var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) 16U))));
                }
            } 
        } 
    }
}
