/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214035
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
    var_20 = ((/* implicit */_Bool) var_5);
    var_21 = ((/* implicit */unsigned char) var_19);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1704670423306507236ULL)) ? (((((/* implicit */_Bool) 9224233577600868646ULL)) ? (((/* implicit */int) (short)-11252)) : (((/* implicit */int) (unsigned char)128)))) : (((/* implicit */int) var_5))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (short i_2 = 4; i_2 < 16; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) ^ (((((arr_4 [i_2 + 2]) + (2147483647))) >> (((/* implicit */int) (unsigned short)0))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) -1)) * (arr_6 [i_2 - 1] [i_3] [i_4 + 2])));
                            arr_11 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) ((unsigned char) 3106798219U));
                            arr_12 [i_0] [i_3] [0LL] [i_1] [i_0] = ((/* implicit */unsigned int) (+(var_6)));
                        }
                        arr_13 [i_0] [i_2 - 3] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                        arr_14 [16ULL] [i_0] [i_3] = ((/* implicit */short) (-(((/* implicit */int) var_14))));
                    }
                } 
            } 
            arr_15 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((arr_0 [i_0] [i_1]) / (arr_0 [i_0] [i_1])));
            arr_16 [i_0] [(short)15] = ((/* implicit */unsigned long long int) var_17);
            arr_17 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_8 [i_0] [i_0]) : (arr_8 [i_1] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (signed char)-24))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))));
        }
        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 2; i_6 < 16; i_6 += 1) 
            {
                for (short i_7 = 1; i_7 < 17; i_7 += 4) 
                {
                    {
                        arr_27 [0U] [i_5 + 3] [i_0] [i_6] [i_7 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_6 - 1] [i_0])) ? (((/* implicit */long long int) var_11)) : (arr_7 [i_5] [7] [i_6 - 1] [i_6])));
                        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((short) arr_7 [i_0] [i_5 + 2] [i_6 - 2] [i_7 - 1])))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_8 = 3; i_8 < 16; i_8 += 3) 
            {
                arr_31 [i_0] [i_5] [i_5] = ((/* implicit */unsigned char) arr_28 [17ULL] [17ULL] [i_5] [i_8]);
                arr_32 [i_0] [i_0] [i_8] = ((/* implicit */signed char) arr_25 [(_Bool)1]);
            }
            for (long long int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                var_25 = (i_0 % 2 == zero) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) >> (((((/* implicit */int) arr_22 [i_0] [i_0] [(signed char)5])) - (81)))))) && (((/* implicit */_Bool) arr_6 [i_5 - 1] [i_5] [i_5])))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) >> (((((((/* implicit */int) arr_22 [i_0] [i_0] [(signed char)5])) - (81))) - (95)))))) && (((/* implicit */_Bool) arr_6 [i_5 - 1] [i_5] [i_5]))));
                var_26 = ((/* implicit */unsigned short) ((arr_7 [i_5 - 2] [i_5 + 4] [i_5 - 2] [i_5 + 2]) <= (((/* implicit */long long int) arr_18 [i_5 + 4] [i_5 - 2] [i_5 + 4]))));
                var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_21 [i_0] [i_5])) : (((/* implicit */int) var_5))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_5 + 1] [i_0] [i_0] [i_5 + 1]))));
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    arr_37 [i_0] [i_5 + 1] [(signed char)2] [i_9] [i_9] [i_0] = ((/* implicit */int) ((arr_9 [i_0] [i_5] [i_10 + 1]) != (arr_9 [i_9] [i_9] [16ULL])));
                    var_28 = ((((/* implicit */unsigned long long int) arr_18 [i_0] [i_5 + 1] [i_10 + 1])) ^ (arr_34 [i_5 - 2] [i_10 + 1]));
                    arr_38 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_10 + 1] [(unsigned char)6] [i_10] [i_10])) ? (((/* implicit */int) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0])) == (((/* implicit */int) (short)-8239))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0])))))));
                }
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
                {
                    for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        {
                            arr_44 [i_9] [i_5 + 4] [i_5] [i_9] [i_11] [i_12] &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) == (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_9] [i_9] [i_12]))) : (var_18)))));
                            var_29 = ((/* implicit */signed char) var_0);
                            arr_45 [i_0] [i_0] [i_0] [i_11] [i_12] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)39))));
                        }
                    } 
                } 
            }
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_30 *= ((/* implicit */unsigned char) var_6);
        var_31 = ((/* implicit */signed char) var_15);
    }
    for (unsigned short i_14 = 2; i_14 < 21; i_14 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_15 = 1; i_15 < 21; i_15 += 1) 
        {
            for (unsigned char i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                {
                    var_32 = ((/* implicit */int) (signed char)115);
                    /* LoopSeq 2 */
                    for (signed char i_17 = 4; i_17 < 22; i_17 += 3) 
                    {
                        arr_58 [i_16] = ((/* implicit */_Bool) (((+(((((/* implicit */_Bool) (short)9263)) ? (931572646U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_14] [i_14] [i_15 - 1] [i_16] [i_16]))) : (var_4)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)23)))) : (((/* implicit */int) arr_54 [i_16] [(_Bool)1])))))));
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(8388607U)))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43)))));
                        arr_59 [i_14] [i_15] [i_16] [i_17] = ((/* implicit */int) ((signed char) ((short) ((((/* implicit */_Bool) (short)31073)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1))))));
                        arr_60 [i_14] [i_15] [i_14] [i_14] [i_16] [i_17 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_57 [i_16])))));
                        arr_61 [i_14] [i_16] [i_14] = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
                    }
                    for (int i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        arr_65 [i_14 + 3] [i_15 - 1] [i_16] [i_15] [i_16] [(unsigned short)16] = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_9)), (4756837316520564506LL)));
                        var_34 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -2LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (arr_50 [i_14 + 3])));
                        var_35 *= ((/* implicit */short) ((signed char) var_0));
                    }
                    /* LoopSeq 1 */
                    for (short i_19 = 2; i_19 < 22; i_19 += 1) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_15 + 2])) ? (arr_50 [i_15 + 2]) : (arr_50 [i_15 + 1])))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_57 [i_16])))))));
                        arr_68 [i_14] [i_14] [i_16] [i_14 + 1] [i_14] = ((/* implicit */int) ((((var_19) != (((/* implicit */long long int) arr_63 [i_19 - 2] [i_16] [i_15 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((arr_54 [i_16] [i_16]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_16]))) : (var_12)))))) : (((((/* implicit */_Bool) ((signed char) (unsigned short)17212))) ? (((((/* implicit */_Bool) 1788903433)) ? (((/* implicit */long long int) ((/* implicit */int) arr_52 [i_14 + 2] [i_15] [(short)22]))) : (-2283691776728572806LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((short)23741), ((short)127)))))))));
                    }
                    var_37 = ((/* implicit */signed char) var_8);
                }
            } 
        } 
        arr_69 [i_14] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-18166))) >= (4294967295U)));
        /* LoopNest 2 */
        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
        {
            for (signed char i_21 = 1; i_21 < 20; i_21 += 2) 
            {
                {
                    var_38 = var_9;
                    arr_76 [i_20] [i_20] [i_20] [i_14] = ((/* implicit */int) min((1952136756U), (((/* implicit */unsigned int) ((unsigned short) arr_74 [i_20 + 1] [i_14])))));
                }
            } 
        } 
    }
    for (long long int i_22 = 0; i_22 < 23; i_22 += 4) 
    {
        var_39 = ((/* implicit */unsigned char) arr_54 [i_22] [i_22]);
        arr_80 [i_22] [i_22] = ((/* implicit */unsigned short) arr_49 [i_22] [i_22]);
        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((min((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) << (((/* implicit */int) (unsigned short)0)))))));
        var_41 = ((/* implicit */int) (short)-1545);
    }
}
