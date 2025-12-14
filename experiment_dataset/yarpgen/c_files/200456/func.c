/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200456
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
    var_12 -= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((((/* implicit */unsigned int) -6690400)) <= (4180059723U))), (((var_3) == (((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) <= (((((/* implicit */_Bool) arr_0 [2ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [14U]))) : (369557716U))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_4 [i_0]) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_1 - 1])) : (((/* implicit */int) (short)7))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                arr_7 [i_0] [i_0] [i_1 + 2] [i_0] = ((/* implicit */int) ((long long int) ((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) arr_1 [i_0] [i_0])))));
                var_15 |= ((/* implicit */signed char) arr_3 [i_2]);
            }
            arr_8 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1]))));
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
            {
                var_16 &= (!(((/* implicit */_Bool) ((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_3])))))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_4))));
            }
            for (int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
            {
                var_18 = ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((int) var_1)) : (((int) arr_6 [i_0] [i_1 - 1])));
                var_19 = ((/* implicit */long long int) ((short) arr_1 [i_0] [i_4]));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_0])) ? (arr_11 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_0]) : (arr_11 [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_0])));
            }
        }
        for (short i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((short) ((short) arr_1 [i_5] [i_5])))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 16; i_6 += 2) 
            {
                for (short i_7 = 2; i_7 < 17; i_7 += 2) 
                {
                    {
                        var_22 |= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_5] [i_7]))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned int) ((int) 9223372036854775807LL))) : (max((((((/* implicit */_Bool) arr_19 [2LL] [2LL] [i_7] [i_7])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_7] [i_0]))))), (min((var_10), (((/* implicit */unsigned int) var_5))))))));
                        var_23 = ((max((3096779563U), (((/* implicit */unsigned int) (unsigned char)1)))) + (((unsigned int) (unsigned short)65533)));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                var_24 -= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(short)6] [i_5] [(short)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_10 [(short)16] [i_5])))) ? (min((((/* implicit */unsigned int) arr_20 [(signed char)17] [12] [i_0])), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30)))))))), (((/* implicit */unsigned int) var_0)));
                var_25 = ((/* implicit */int) ((((((int) var_3)) % (((((/* implicit */int) (short)-50)) - (((/* implicit */int) arr_1 [i_0] [i_5])))))) < (((int) (unsigned short)16384))));
                var_26 &= ((/* implicit */_Bool) var_7);
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    arr_25 [i_0] [i_0] [i_8] [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_8] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_5])) : (((/* implicit */int) (_Bool)0)))))));
                    var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) arr_17 [i_0] [i_5] [i_0] [i_0]))));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (arr_11 [i_0] [(_Bool)1] [i_8] [i_0]) : (arr_11 [i_0] [i_5] [4] [i_0])));
                }
                arr_26 [i_0] [i_8] [i_5] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (var_9) : (((/* implicit */unsigned long long int) var_11))))) ? (((((/* implicit */_Bool) arr_19 [i_0] [9U] [i_0] [2LL])) ? (var_3) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_8])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)120))))))), (((/* implicit */int) arr_2 [i_0] [(signed char)5]))));
            }
        }
        arr_27 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) % (max((((unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)255)))))))));
        var_29 = ((/* implicit */int) ((short) ((((/* implicit */int) arr_3 [i_0])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0]))))))));
    }
    var_30 |= ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        arr_31 [i_10] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
        /* LoopSeq 1 */
        for (long long int i_11 = 3; i_11 < 15; i_11 += 2) 
        {
            arr_36 [i_10] [i_10] = arr_29 [i_11 + 3];
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_11 - 2]))));
                arr_41 [i_12] [i_12] [i_12] &= ((/* implicit */_Bool) ((short) arr_34 [i_12] [i_11 + 3] [i_10]));
                var_32 = var_2;
                var_33 = ((/* implicit */long long int) ((unsigned char) var_4));
            }
            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_11 - 3]))) : (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) arr_30 [0ULL])))))))));
        }
        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (((~(-3181356282529011361LL))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_28 [18ULL] [18]))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_13 = 1; i_13 < 17; i_13 += 2) 
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 19; i_14 += 4) 
        {
            for (int i_15 = 0; i_15 < 19; i_15 += 4) 
            {
                {
                    var_36 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_33 [i_13] [11LL] [i_15])) : (8303329062637789360LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_13 - 1])))));
                    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_34 [i_15] [i_13 + 1] [i_13 + 1])))))));
                }
            } 
        } 
        var_38 = ((/* implicit */int) arr_28 [i_13 + 1] [i_13]);
        /* LoopSeq 1 */
        for (unsigned long long int i_16 = 3; i_16 < 18; i_16 += 2) 
        {
            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) ((((/* implicit */unsigned long long int) arr_44 [(signed char)16] [i_16 - 1])) * (var_1))))));
            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49152))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [(short)12] [i_16 - 2] [i_13 + 1]))))))));
            var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_13 - 1] [i_13])) ? (((((/* implicit */_Bool) arr_51 [i_16] [i_16] [(short)9] [(short)9])) ? (var_2) : (var_11))) : (var_10)));
            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_6) : (arr_32 [i_13 - 1])));
            arr_55 [i_13] [18U] = ((/* implicit */int) ((long long int) -788359972));
        }
        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_29 [i_13]) ? (var_4) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */unsigned long long int) arr_34 [i_13] [15U] [i_13 + 1])) : (((((/* implicit */_Bool) arr_32 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_4)))));
    }
    /* vectorizable */
    for (signed char i_17 = 0; i_17 < 20; i_17 += 2) 
    {
        var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) (!(((/* implicit */_Bool) arr_57 [i_17] [i_17])))))));
        /* LoopSeq 2 */
        for (int i_18 = 0; i_18 < 20; i_18 += 2) 
        {
            var_45 = ((/* implicit */int) max((var_45), (((((/* implicit */int) arr_58 [i_18])) * (((/* implicit */int) arr_58 [i_17]))))));
            var_46 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_61 [i_17])) + (arr_60 [i_17])));
            var_47 += ((/* implicit */unsigned char) 1298391371);
        }
        for (long long int i_19 = 2; i_19 < 18; i_19 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_20 = 0; i_20 < 20; i_20 += 2) /* same iter space */
            {
                arr_66 [i_17] = ((((/* implicit */_Bool) arr_57 [i_17] [i_19])) ? (arr_64 [i_17] [i_19] [i_19 + 2]) : (arr_64 [i_19] [i_19] [i_19 - 2]));
                arr_67 [i_20] [i_19] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_60 [i_17]))));
            }
            for (unsigned char i_21 = 0; i_21 < 20; i_21 += 2) /* same iter space */
            {
                var_48 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? ((~(arr_59 [i_17] [2] [i_21]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                var_49 = ((/* implicit */long long int) ((signed char) arr_69 [i_19 - 1] [i_19 + 1] [i_19] [i_19 - 2]));
            }
            for (unsigned char i_22 = 0; i_22 < 20; i_22 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_23 = 2; i_23 < 18; i_23 += 2) 
                {
                    for (unsigned long long int i_24 = 0; i_24 < 20; i_24 += 1) 
                    {
                        {
                            var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_78 [i_19 + 2] [i_23 + 2] [i_23] [i_23] [18ULL])) ? (arr_68 [i_19] [3] [i_19 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_3)) != (var_7))))))))));
                            var_51 = ((/* implicit */int) ((((/* implicit */_Bool) arr_64 [i_23 - 1] [i_23 - 1] [i_23])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_75 [i_17] [i_19] [(short)5] [(short)5] [i_23] [i_19])))))) : (((arr_60 [i_17]) | (((/* implicit */unsigned int) -8388608))))));
                            var_52 = ((/* implicit */int) ((short) var_6));
                        }
                    } 
                } 
                var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) arr_57 [i_17] [i_17])) : (((/* implicit */unsigned long long int) arr_74 [i_17] [i_19 + 2] [i_19 + 1] [i_22]))));
                var_54 |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
            }
            var_55 &= ((arr_62 [i_19 + 2]) % (arr_62 [i_19 - 2]));
        }
    }
}
