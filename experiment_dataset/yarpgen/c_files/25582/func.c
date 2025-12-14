/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25582
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) (unsigned short)65535);
                    var_14 = ((/* implicit */unsigned long long int) (signed char)124);
                    var_15 |= ((/* implicit */unsigned long long int) (unsigned char)77);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
    {
        var_16 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((70368744177663LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-100)))))) < (((/* implicit */int) (_Bool)1))));
        var_17 = ((/* implicit */unsigned int) min((var_17), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) + ((((_Bool)1) ? (1200112961U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100)))))))));
        var_18 |= ((/* implicit */unsigned long long int) arr_10 [i_3] [i_3]);
        arr_11 [i_3] = ((/* implicit */_Bool) (signed char)124);
        /* LoopSeq 2 */
        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned long long int) arr_9 [i_3] [(unsigned short)11]);
            /* LoopNest 3 */
            for (short i_5 = 2; i_5 < 14; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (short i_7 = 2; i_7 < 13; i_7 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((/* implicit */int) (signed char)97)))))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202))) % (8234342522378626437ULL))))));
                            var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_23 [i_3] [i_7 - 1] [i_6] [i_6] [i_5 - 1]))));
                            var_23 = ((/* implicit */unsigned char) (signed char)-124);
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (+(arr_22 [i_4] [i_4] [i_4] [i_4] [i_3] [i_3] [i_3]))))));
            arr_24 [i_3] = ((((/* implicit */int) arr_10 [i_3] [i_4])) ^ (((/* implicit */int) (unsigned char)0)));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 4; i_8 < 14; i_8 += 1) 
            {
                arr_27 [i_3] [i_3] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-77)) ? (arr_20 [i_8 - 4] [i_8 - 1] [i_8 - 2] [i_8 - 2] [i_8 - 3] [i_8 + 1]) : (arr_20 [i_8 - 4] [i_8 - 2] [i_8 - 3] [i_8 - 1] [i_8 - 3] [i_8 - 4])));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_8] [i_8 - 2] [i_8]))) + (((3923681800U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28672)))))));
            }
        }
        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned char) (-(arr_15 [i_3])));
            var_27 = ((/* implicit */unsigned short) arr_16 [i_3] [i_9] [i_3]);
        }
    }
    for (signed char i_10 = 0; i_10 < 15; i_10 += 1) /* same iter space */
    {
        var_28 |= ((/* implicit */long long int) (((~(arr_16 [i_10] [i_10] [i_10]))) >> ((((~(((/* implicit */int) (unsigned char)195)))) + (229)))));
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            for (unsigned int i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                for (unsigned short i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    {
                        arr_41 [i_13] [i_12] [i_13] [i_13] = ((/* implicit */_Bool) max(((+(arr_30 [i_11] [i_10] [i_12]))), (((/* implicit */int) (short)30283))));
                        var_29 = ((/* implicit */short) max((var_29), ((short)-1)));
                    }
                } 
            } 
        } 
        arr_42 [i_10] = ((/* implicit */unsigned int) ((signed char) 1605689183U));
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 15; i_14 += 4) 
        {
            for (unsigned short i_15 = 2; i_15 < 14; i_15 += 3) 
            {
                {
                    var_30 *= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-72)) / (((/* implicit */int) (signed char)107))));
                    /* LoopNest 2 */
                    for (short i_16 = 1; i_16 < 14; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 1; i_17 < 14; i_17 += 3) 
                        {
                            {
                                var_31 = ((((/* implicit */int) arr_48 [i_10])) & (((/* implicit */int) ((((/* implicit */int) (signed char)-103)) >= (((/* implicit */int) (unsigned short)32585))))));
                                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((min((((((/* implicit */_Bool) -1543990771)) ? (((/* implicit */unsigned long long int) 1831904247)) : (2858567715871978466ULL))), (((15588176357837573150ULL) >> (((/* implicit */int) (unsigned char)5)))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) (short)-1))))))))))));
                                var_33 = ((/* implicit */unsigned int) (+(4526958431472417226ULL)));
                            }
                        } 
                    } 
                    arr_52 [i_10] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)87))))) ? (arr_20 [i_10] [i_10] [i_15] [i_15] [i_10] [i_14]) : (((/* implicit */long long int) 2147483647))));
                }
            } 
        } 
    }
    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 4) 
    {
        var_34 |= (!(((/* implicit */_Bool) (-(3707159779U)))));
        var_35 -= ((/* implicit */signed char) arr_55 [i_18]);
        /* LoopSeq 2 */
        for (short i_19 = 0; i_19 < 22; i_19 += 3) 
        {
            var_36 = ((/* implicit */long long int) arr_54 [i_18] [i_19]);
            var_37 = (~(((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1)))));
        }
        for (short i_20 = 2; i_20 < 21; i_20 += 3) 
        {
            var_38 = ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) ? (((unsigned long long int) arr_56 [i_18] [i_18])) : (((/* implicit */unsigned long long int) arr_59 [i_18]))));
            var_39 = ((/* implicit */short) arr_56 [i_18] [i_18]);
            var_40 *= ((/* implicit */short) (-(((/* implicit */int) (short)-30268))));
        }
        /* LoopSeq 4 */
        for (long long int i_21 = 0; i_21 < 22; i_21 += 4) 
        {
            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((((12609833196990467151ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30287))))) >> ((((~(((/* implicit */int) (_Bool)0)))) + (58))))))));
            arr_62 [i_18] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (2689278121U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) ? ((-2147483647 - 1)) : (((/* implicit */int) ((unsigned char) (_Bool)1))))));
        }
        for (unsigned int i_22 = 2; i_22 < 18; i_22 += 1) 
        {
            var_42 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967281U)) ? (-1732224380) : (((/* implicit */int) (short)32759))))), ((~(3617317813U))))))));
            arr_66 [i_18] = ((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_58 [i_18])))));
            arr_67 [i_18] [i_22] [i_22] = ((/* implicit */int) max((((/* implicit */unsigned long long int) 2147483647)), ((+(((arr_63 [i_18] [i_18] [3LL]) ? (arr_58 [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))))));
            /* LoopNest 2 */
            for (signed char i_23 = 0; i_23 < 22; i_23 += 4) 
            {
                for (unsigned char i_24 = 1; i_24 < 19; i_24 += 2) 
                {
                    {
                        arr_73 [i_18] [i_22] [i_22] [i_23] [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1359655553U)) ? (max((((((/* implicit */_Bool) arr_68 [i_22] [i_24])) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (signed char)-127)))), ((-(2097534520))))) : ((+(((/* implicit */int) arr_60 [i_22 - 2] [i_22 + 3]))))));
                        var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) 587807516U))))))));
                        var_44 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_53 [(unsigned char)4])))) ^ (((((arr_59 [i_24]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3707159764U)) ? (((/* implicit */int) arr_70 [i_18] [i_22 - 2] [i_22 - 2] [i_22 - 2] [i_24])) : (((/* implicit */int) (_Bool)1)))))))));
                        var_45 = ((/* implicit */long long int) 3828932105U);
                        arr_74 [i_18] [i_22] [i_23] [i_24] [i_18] = ((/* implicit */int) ((unsigned long long int) arr_57 [i_24] [i_23] [i_22]));
                    }
                } 
            } 
        }
        for (signed char i_25 = 2; i_25 < 21; i_25 += 1) /* same iter space */
        {
            arr_77 [i_18] = ((/* implicit */int) (((+(6574860097997295963LL))) << (((((-2712077512058103423LL) & (((/* implicit */long long int) arr_71 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])))) - (33593473LL)))));
            var_46 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)13)), (587807516U)))) && (((/* implicit */_Bool) (unsigned char)34))));
        }
        /* vectorizable */
        for (signed char i_26 = 2; i_26 < 21; i_26 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_27 = 0; i_27 < 22; i_27 += 4) 
            {
                for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                {
                    for (long long int i_29 = 0; i_29 < 22; i_29 += 3) 
                    {
                        {
                            arr_87 [i_18] [i_18] [i_29] [i_18] [i_18] [i_18] [i_18] = ((/* implicit */int) -9058031701987820634LL);
                            var_47 = ((/* implicit */int) 587807516U);
                            var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) arr_86 [i_18] [i_18] [i_18] [i_18] [i_18]))));
                            var_49 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_26])) ? ((-2147483647 - 1)) : ((~(-1778763843)))));
                        }
                    } 
                } 
            } 
            var_50 = ((/* implicit */unsigned char) (+(3707159787U)));
            var_51 = ((/* implicit */unsigned char) ((unsigned long long int) 836078993447753308LL));
        }
    }
    var_52 *= ((/* implicit */unsigned short) (unsigned char)64);
    var_53 = ((/* implicit */unsigned short) var_11);
}
