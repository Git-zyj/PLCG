/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238627
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
    var_18 *= max((((/* implicit */short) ((min((4294967295U), (8U))) == (var_4)))), (var_3));
    var_19 ^= min((((/* implicit */unsigned short) var_8)), ((unsigned short)46608));
    var_20 = ((/* implicit */unsigned short) 2181759206U);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_16))));
                    var_22 = ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))) & (arr_7 [i_2] [i_1] [i_0]));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16))));
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned int) ((arr_11 [i_2] [i_2 + 1] [i_2 + 2] [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 1) 
                        {
                            var_24 ^= 4294967279U;
                            var_25 = ((/* implicit */signed char) arr_2 [i_0] [i_1]);
                            var_26 ^= ((/* implicit */unsigned short) ((short) var_6));
                        }
                        /* LoopSeq 4 */
                        for (unsigned short i_5 = 2; i_5 < 15; i_5 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */unsigned long long int) (+(729742854U)))) : (arr_10 [i_3] [i_3] [i_3] [i_3] [i_2 + 1] [i_1])));
                            arr_20 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (10173277200939938399ULL) : (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_2] [i_1] [i_5 - 2] [i_2 + 2]))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            var_28 = ((/* implicit */short) ((var_6) & (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (short)32767))));
                        }
                        for (unsigned int i_7 = 3; i_7 < 16; i_7 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_7 - 3] [i_3] [i_7] [i_0] [i_3]))));
                            var_31 += ((/* implicit */unsigned long long int) (+(((long long int) var_14))));
                        }
                        for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            var_32 = (+(((((/* implicit */_Bool) var_11)) ? (2181759210U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                            arr_28 [i_3] [i_1] [i_2] [i_3] [i_8] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
                        }
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 17; i_9 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) 2113208086U);
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_8 [i_2 - 1] [i_1] [i_2];
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_3] [i_9] = ((/* implicit */unsigned short) var_6);
                            var_34 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))));
                        }
                    }
                    for (unsigned short i_10 = 2; i_10 < 15; i_10 += 1) 
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(var_6)));
                        arr_36 [i_0] [i_1] [i_1] [i_2] [i_10] = 8533575916320859277LL;
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23))) : (2452215028093544911ULL)))) ? (((/* implicit */long long int) 0U)) : (arr_16 [i_10] [i_10] [i_10] [i_10] [i_10 - 2] [i_1])));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 17; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 3; i_12 < 15; i_12 += 2) 
            {
                {
                    var_36 = ((/* implicit */short) (+(var_6)));
                    var_37 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_12 + 2] [i_12] [i_12])) ? (((/* implicit */int) (short)-21456)) : (((/* implicit */int) arr_30 [i_12 + 1] [i_11] [i_11]))));
                }
            } 
        } 
    }
    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            var_38 ^= var_17;
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_15 = 3; i_15 < 18; i_15 += 2) 
            {
                arr_49 [i_15] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)38))));
                var_39 += ((/* implicit */unsigned char) ((unsigned long long int) (short)11732));
                var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (-(var_4))))));
                var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 11195857904032747289ULL))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) 10173277200939938399ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (11195857904032747289ULL)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
                {
                    arr_52 [i_13] [i_14] [i_15] [i_15] [i_15] [i_16] = ((/* implicit */short) (unsigned short)21514);
                    arr_53 [i_15] = ((/* implicit */unsigned int) ((short) var_10));
                }
            }
            for (unsigned short i_17 = 0; i_17 < 22; i_17 += 2) 
            {
                var_42 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) & (min((((((/* implicit */_Bool) arr_43 [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46608))) : (var_2))), (((/* implicit */unsigned long long int) var_11)))));
                /* LoopSeq 3 */
                for (signed char i_18 = 0; i_18 < 22; i_18 += 2) 
                {
                    var_43 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) max((var_11), (var_16)))))));
                    var_44 = ((/* implicit */signed char) var_6);
                }
                /* vectorizable */
                for (unsigned int i_19 = 0; i_19 < 22; i_19 += 1) 
                {
                    arr_60 [i_19] [i_17] [i_14] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_57 [i_19] [i_13]))));
                    var_45 = ((/* implicit */short) var_11);
                    var_46 = ((/* implicit */unsigned short) (+((-(((/* implicit */int) var_5))))));
                }
                for (unsigned short i_20 = 0; i_20 < 22; i_20 += 2) 
                {
                    arr_64 [i_20] [i_17] [i_14] [i_14] [i_13] [i_13] = ((/* implicit */unsigned int) max((min((min((((/* implicit */long long int) var_12)), (var_6))), (min((70368744176640LL), (((/* implicit */long long int) (signed char)38)))))), (((/* implicit */long long int) (-((-(((/* implicit */int) var_5)))))))));
                    arr_65 [i_13] [i_14] = ((/* implicit */signed char) min((max((((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned short) var_12))))), (var_9))), (((/* implicit */unsigned int) (signed char)0))));
                }
            }
            for (unsigned char i_21 = 0; i_21 < 22; i_21 += 1) 
            {
                var_47 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_11)) ? (var_14) : (var_14))), (((/* implicit */unsigned long long int) (short)30653)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44022))))))));
                var_48 = ((/* implicit */unsigned short) ((long long int) max((arr_63 [i_21] [i_14] [i_14] [i_13]), (((/* implicit */unsigned int) var_5)))));
                /* LoopNest 2 */
                for (unsigned char i_22 = 0; i_22 < 22; i_22 += 1) 
                {
                    for (unsigned long long int i_23 = 0; i_23 < 22; i_23 += 2) 
                    {
                        {
                            var_49 = (~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_46 [i_13] [i_13] [i_13]))));
                            var_50 *= ((/* implicit */unsigned char) (~((~(((/* implicit */int) min(((unsigned short)28466), (var_11))))))));
                        }
                    } 
                } 
            }
        }
        var_51 ^= ((/* implicit */unsigned int) (unsigned short)37070);
    }
    /* vectorizable */
    for (long long int i_24 = 0; i_24 < 17; i_24 += 1) 
    {
        arr_78 [i_24] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)163))));
        var_52 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_24] [i_24] [i_24]))) | (7250886169676804326ULL)));
        var_53 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_9)) : (arr_15 [i_24] [i_24] [i_24])));
        arr_79 [i_24] [i_24] = ((/* implicit */unsigned short) ((short) var_4));
        /* LoopNest 2 */
        for (long long int i_25 = 1; i_25 < 14; i_25 += 1) 
        {
            for (unsigned int i_26 = 1; i_26 < 13; i_26 += 2) 
            {
                {
                    var_54 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? ((~(445870550U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))));
                    var_55 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                    var_56 += ((/* implicit */unsigned short) var_15);
                    var_57 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                }
            } 
        } 
    }
}
