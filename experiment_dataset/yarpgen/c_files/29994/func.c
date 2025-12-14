/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29994
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
    var_16 = ((/* implicit */_Bool) min((((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)88)))) + (((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) 2727956421U)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_17 = ((unsigned long long int) ((arr_1 [i_0]) & (arr_1 [i_0])));
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                for (signed char i_3 = 3; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_10 [i_1] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) (+(((long long int) (-(((/* implicit */int) (unsigned short)63488)))))));
                        var_18 = ((/* implicit */unsigned short) min(((-(arr_3 [i_2 + 1]))), (((/* implicit */unsigned int) min(((-(((/* implicit */int) (unsigned short)4428)))), (((/* implicit */int) ((signed char) (unsigned char)72))))))));
                        arr_11 [i_2] [i_1 - 3] [i_1] = ((((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned char)236)))), (((/* implicit */int) var_0))))) - (min((arr_9 [i_0] [i_1 - 1] [i_2 - 2] [(unsigned short)7]), (((/* implicit */long long int) var_13)))));
                        var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_1] [i_1 + 1] [i_1])) ? ((~(arr_4 [i_0] [i_1 - 3] [i_0]))) : (max((((/* implicit */unsigned int) arr_8 [i_0] [(unsigned short)3] [i_0] [(unsigned short)3])), (arr_3 [i_0]))))) | (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned short)61131)))))));
                        var_20 = ((/* implicit */unsigned long long int) ((signed char) ((9ULL) >= (((/* implicit */unsigned long long int) arr_9 [i_1 - 2] [i_1 - 4] [i_1 - 1] [i_1 - 3])))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 3; i_4 < 11; i_4 += 1) 
    {
        arr_14 [i_4 - 1] = ((/* implicit */signed char) arr_5 [i_4] [i_4] [2LL] [i_4 + 2]);
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_4] [i_4] [i_4] [i_4 + 3])))));
        var_22 = (((!(((3484612228U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_4] [i_4 - 2]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_3 [i_4])))) : (((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_1 [i_4 + 2])) : (arr_9 [i_4 - 1] [i_4] [i_4 + 2] [i_4 - 2])))));
        var_23 = (~(min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22929))) ^ (var_12))), (min((arr_9 [i_4] [i_4] [i_4] [i_4 - 3]), (arr_13 [i_4]))))));
    }
    for (signed char i_5 = 1; i_5 < 12; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5])) >= (((/* implicit */int) arr_18 [i_5 + 1])))))) >= (((unsigned long long int) arr_18 [i_5 + 1]))));
        /* LoopSeq 3 */
        for (unsigned char i_6 = 2; i_6 < 11; i_6 += 1) 
        {
            arr_22 [i_6] [i_6 + 2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((unsigned char) arr_17 [i_5] [i_6]))) ? (min((var_6), (5564407827521057426ULL))) : (((/* implicit */unsigned long long int) ((var_7) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775783LL))) + (27LL)))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
            {
                arr_26 [i_7] [(unsigned short)13] [i_7] = ((/* implicit */long long int) var_15);
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        {
                            arr_32 [i_6] [i_6] [i_6] [i_7] [i_6 + 3] [i_6 - 1] [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) arr_23 [i_6 - 1]));
                            var_24 = ((long long int) var_0);
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned long long int) ((arr_29 [i_6 + 3] [i_6] [i_6] [i_6 - 2] [i_6]) << (((2744427865U) - (2744427839U)))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_23 [i_5]))))))) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) (unsigned short)4382))) | (((/* implicit */int) min((arr_0 [i_5]), (var_8))))))) : (((long long int) ((((/* implicit */int) var_4)) << (((arr_13 [i_10]) + (1852157235441314713LL))))))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))), (arr_9 [i_5] [(unsigned char)15] [i_5] [i_5])));
                            arr_41 [i_5] [9U] [i_12] [i_11] = ((/* implicit */long long int) ((((((/* implicit */int) arr_35 [i_6 + 1] [i_6 + 3] [i_6 + 3] [i_6 - 2])) & (((/* implicit */int) arr_35 [i_6 + 1] [i_6 + 2] [i_6 - 2] [i_6 - 2])))) + ((~(((/* implicit */int) (unsigned char)0))))));
                            arr_42 [i_5] [i_6] [i_10] [i_11] [i_12] = ((/* implicit */unsigned long long int) (~(min((arr_37 [i_6 + 2] [i_12] [i_6 - 1] [i_11]), (arr_37 [i_6 + 2] [i_12] [i_12] [i_12])))));
                        }
                    } 
                } 
                arr_43 [(_Bool)1] [i_5 - 1] [(_Bool)1] = ((/* implicit */unsigned int) ((min((arr_13 [i_5 + 1]), (((/* implicit */long long int) arr_2 [(_Bool)1])))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [0LL])) ? (arr_2 [12U]) : (arr_2 [6LL]))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                for (long long int i_14 = 0; i_14 < 14; i_14 += 1) 
                {
                    {
                        var_28 = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : ((((!(((/* implicit */_Bool) 23ULL)))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)53639)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_15 [12LL])))))));
                        var_29 = ((long long int) min((arr_38 [i_5 + 1] [i_5 - 1] [i_6 - 2] [i_5 - 1] [i_5]), (((/* implicit */unsigned short) var_8))));
                        arr_48 [i_5] [i_14] [0U] [i_6] = (~(var_11));
                        var_30 += ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (~(var_11)))) ? (min((((/* implicit */long long int) arr_17 [i_13] [i_13])), (var_1))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_5]))))))));
                    }
                } 
            } 
            arr_49 [i_6 + 1] = ((/* implicit */signed char) (unsigned char)223);
        }
        for (long long int i_15 = 4; i_15 < 11; i_15 += 1) 
        {
            arr_52 [i_15] = ((/* implicit */unsigned int) 1664530274035635452ULL);
            /* LoopNest 2 */
            for (signed char i_16 = 0; i_16 < 14; i_16 += 2) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        var_31 = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_38 [i_5] [i_15] [i_15] [i_16] [11U])))))), (((((/* implicit */int) ((var_11) >= (((/* implicit */unsigned long long int) arr_24 [i_15] [i_15]))))) ^ (((/* implicit */int) arr_36 [i_5] [i_15 - 4] [i_16] [i_17]))))));
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned short)7870)))), ((~(((/* implicit */int) var_4))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_20 [i_5]))));
                        arr_59 [i_17] [i_15] [i_15] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_57 [i_5 + 1] [i_17])) ? ((+(((/* implicit */int) arr_45 [i_17] [i_16] [i_15 + 1] [i_5])))) : (((/* implicit */int) ((arr_2 [i_15]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5))))))))), (((((((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_5] [i_15 - 2] [i_15] [i_15 - 2]))) | (arr_4 [i_5 + 1] [i_15] [7U]))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_15] [i_15 + 2])) >> (((8804606221273228198LL) - (8804606221273228192LL))))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 2) 
                        {
                            arr_62 [i_5] [i_15] [i_16] [i_17] [i_18] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) -9223372036854775798LL))))), ((signed char)-92))))) - (arr_30 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_17] [i_17])));
                            var_33 = ((/* implicit */signed char) arr_28 [i_18] [i_18] [i_18] [i_15]);
                            arr_63 [i_5] [i_15] [i_16] [i_15] [i_18] = ((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)61108)) >> (((((/* implicit */int) arr_15 [i_15])) - (941)))))) + ((~(var_1)))))));
                        }
                    }
                } 
            } 
            arr_64 [i_15] [i_15 - 2] [i_15] = ((/* implicit */_Bool) ((((18446744073709551603ULL) > (min((((/* implicit */unsigned long long int) var_3)), (18446744073709551593ULL))))) ? (((unsigned long long int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(2523955198U))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_50 [i_5] [i_15] [i_5]))))))))));
        }
        for (long long int i_19 = 0; i_19 < 14; i_19 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_20 = 1; i_20 < 12; i_20 += 2) 
            {
                for (unsigned short i_21 = 0; i_21 < 14; i_21 += 4) 
                {
                    {
                        var_34 = ((/* implicit */unsigned short) ((long long int) (-(min((((/* implicit */unsigned int) var_8)), (arr_1 [i_20 + 2]))))));
                        var_35 = ((/* implicit */_Bool) ((unsigned short) (~(arr_57 [i_5 + 1] [i_5 - 1]))));
                    }
                } 
            } 
            arr_73 [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_45 [i_5 + 2] [i_5 - 1] [i_5] [i_19])) - (((/* implicit */int) min((arr_0 [i_5 + 1]), (arr_0 [i_5 + 2]))))));
            /* LoopNest 2 */
            for (unsigned int i_22 = 0; i_22 < 14; i_22 += 1) 
            {
                for (unsigned long long int i_23 = 2; i_23 < 13; i_23 += 1) 
                {
                    {
                        arr_79 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3881720626416617435ULL)) ? (((/* implicit */int) arr_28 [i_5 + 1] [i_5] [i_5 + 2] [i_19])) : (((/* implicit */int) arr_27 [i_5 + 1] [i_5] [i_5 - 1] [i_5 - 1] [i_23 - 2] [i_23 + 1]))))), (((((/* implicit */_Bool) arr_12 [i_5 + 1])) ? (arr_12 [i_5 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                        var_36 = arr_3 [i_23];
                        var_37 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_47 [i_5] [i_5 + 2] [i_5] [i_5 + 2] [i_5 + 2] [i_5 + 2])) && (((/* implicit */_Bool) arr_77 [i_5 + 1] [i_23 - 1] [i_22] [i_23 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_44 [i_19] [i_22] [i_23]))))))) : (min((((unsigned long long int) (unsigned char)0)), (((/* implicit */unsigned long long int) (~(-8773201446596440475LL))))))));
                        arr_80 [i_23] [i_19] [i_19] [i_5 + 1] = ((/* implicit */_Bool) min((((unsigned long long int) arr_72 [i_23 - 2] [i_5 + 1])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_37 [i_5] [i_19] [i_5 + 1] [i_23 - 2])))))));
                    }
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (signed char i_24 = 4; i_24 < 11; i_24 += 2) 
    {
        for (long long int i_25 = 0; i_25 < 14; i_25 += 1) 
        {
            {
                var_38 = ((((/* implicit */unsigned long long int) 522240U)) & (((unsigned long long int) (~(((/* implicit */int) (unsigned char)0))))));
                /* LoopNest 2 */
                for (unsigned short i_26 = 2; i_26 < 13; i_26 += 3) 
                {
                    for (unsigned int i_27 = 0; i_27 < 14; i_27 += 3) 
                    {
                        {
                            arr_96 [i_26] [i_25] [(signed char)12] [i_25] [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_36 [(unsigned short)11] [i_25] [i_25] [i_25]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63482))) : (min((((/* implicit */unsigned long long int) ((arr_47 [i_24] [i_25] [i_26 + 1] [i_26 + 1] [i_25] [i_27]) ^ (arr_54 [i_26] [i_25] [i_26])))), (7187189051220177878ULL)))));
                            arr_97 [i_24] [i_26] [9ULL] [2ULL] [i_27] = ((/* implicit */unsigned int) (unsigned short)2037);
                        }
                    } 
                } 
            }
        } 
    } 
}
