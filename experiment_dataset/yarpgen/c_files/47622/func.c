/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47622
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
    var_12 = ((/* implicit */int) (_Bool)1);
    var_13 += ((/* implicit */unsigned int) min((var_10), (var_10)));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) min(((-(((unsigned int) var_8)))), (((/* implicit */unsigned int) arr_0 [i_0]))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((unsigned long long int) ((unsigned short) 386364513U))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_5 [i_0 + 1] [i_0 - 1] [(_Bool)1]))));
                    var_17 = ((/* implicit */unsigned int) (_Bool)1);
                    var_18 = ((/* implicit */_Bool) min((((arr_2 [i_0]) & (arr_2 [i_0]))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_8 [i_0 + 1] [i_0 + 1] [i_2] [i_2])))) ? (((/* implicit */int) (_Bool)1)) : (arr_8 [i_0] [i_1] [i_2] [i_2])));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            /* LoopSeq 4 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_20 = ((/* implicit */int) 1845500403U);
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((max((arr_6 [i_0] [i_3] [i_4]), ((short)10902))), (((/* implicit */short) (!(((/* implicit */_Bool) 7314500589583538397LL))))))))));
                var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) 2132926770)), (6059834246326121878LL)));
                arr_14 [i_0] [3LL] = ((/* implicit */unsigned long long int) (unsigned char)62);
                var_23 = (((+((~(arr_11 [i_0] [i_3] [i_0]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [(short)6]))))) : (((((/* implicit */_Bool) -7697915872978338165LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6059834246326121878LL)))))));
            }
            for (int i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                var_24 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_5 - 1]))));
                var_25 += ((/* implicit */unsigned char) arr_4 [i_5 - 1]);
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    for (signed char i_7 = 3; i_7 < 11; i_7 += 4) 
                    {
                        {
                            arr_22 [i_0] [i_0 + 1] [i_3] [i_5 + 2] [i_6] [i_0 + 1] [i_7] = ((/* implicit */signed char) max((((/* implicit */int) (unsigned short)16738)), (-43129312)));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (~(1845500403U))))));
                            arr_23 [i_0 - 1] [i_3] [i_5] [i_6] [i_3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_3])) ? (arr_9 [i_7] [i_5] [i_3]) : (arr_8 [i_0 + 1] [3] [i_6] [i_7])))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0])))))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_6]))) / (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0 - 1]))) >= (arr_3 [i_5])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) >= (((/* implicit */int) arr_21 [i_7 - 3] [i_3] [i_5] [i_0] [i_7 - 3] [i_7 - 3] [i_0 - 1]))))))));
                            var_27 += ((/* implicit */long long int) ((unsigned int) max((arr_8 [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_5 + 2]), (arr_8 [i_5 + 1] [i_5 + 1] [i_5 + 2] [8U]))));
                        }
                    } 
                } 
                arr_24 [i_0] [i_0] [i_5 - 1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10728229225029080974ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12263))) : (1384937590U)))) || (((/* implicit */_Bool) 1483183706U)));
            }
            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                var_28 += ((/* implicit */_Bool) min((((/* implicit */int) (signed char)4)), (-1473396840)));
                arr_27 [i_8] [i_8] |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((arr_8 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */int) (unsigned char)81))))))) ? ((-(((((/* implicit */_Bool) arr_11 [i_3] [(unsigned char)4] [8U])) ? (var_9) : (((/* implicit */int) arr_6 [i_8] [i_3] [i_0])))))) : (((((/* implicit */_Bool) max((1204554306U), (((/* implicit */unsigned int) arr_25 [5LL] [i_3] [i_3]))))) ? (((/* implicit */int) arr_4 [i_0 - 1])) : ((+(((/* implicit */int) arr_20 [i_0] [i_8] [i_8] [i_8] [i_8] [i_3]))))))));
                arr_28 [(_Bool)1] [i_0] [i_0] [(short)0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_17 [i_0 + 1] [(short)2] [i_0] [i_0 + 1]))));
            }
            /* vectorizable */
            for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                arr_31 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10291))) : (3413036046U)));
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_35 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)24859)) ? (((/* implicit */int) arr_20 [(short)7] [i_0] [i_9] [(short)7] [(short)6] [i_0])) : (((/* implicit */int) arr_30 [i_9]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 12; i_11 += 3) 
                    {
                        arr_39 [i_0 - 1] [i_0] [i_9] [i_10] [i_11] = (-(((/* implicit */int) (signed char)84)));
                        arr_40 [8] [i_3] [i_10] [i_0] [i_11] = ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (arr_19 [i_0] [i_0] [i_0 + 1] [i_0 - 1]) : (arr_19 [i_0 + 1] [10U] [i_0 - 1] [i_0 + 1]));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)3765)))))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        arr_45 [i_0] [i_3] [i_9] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) 1351926172)) ? (-7746754) : (2059007081)));
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [(short)7] [(short)7] [1])) ? (arr_41 [i_0] [i_3] [i_3] [i_9] [i_9] [i_10] [i_12]) : (((/* implicit */long long int) arr_17 [i_0 - 1] [i_3] [i_9] [i_10])))))))));
                        var_31 -= (~((+(((/* implicit */int) (unsigned short)61537)))));
                        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_9])) & (((/* implicit */int) arr_0 [i_9])))))));
                    }
                    arr_46 [i_0] [i_3] [i_0] [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_29 [i_0] [4] [i_9] [i_10])) > (((/* implicit */int) var_10)))))));
                    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) arr_42 [i_9] [i_9] [i_3] [i_9] [i_9] [i_9] [(_Bool)1]))));
                }
                arr_47 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_29 [i_0] [i_0] [i_0 + 1] [2U])) : (((/* implicit */int) (_Bool)0))));
            }
            var_34 -= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_3])) ? (5144377994880601927LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8738)))))) != (((var_7) << (((((/* implicit */int) arr_4 [i_3])) - (37646))))))))));
            /* LoopSeq 3 */
            for (int i_13 = 1; i_13 < 11; i_13 += 4) 
            {
                arr_50 [i_13 - 1] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_3 [i_13]);
                var_35 += ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_13 + 1] [i_13 + 1]))) != (((((/* implicit */_Bool) var_11)) ? (3090412965U) : (((/* implicit */unsigned int) var_9))))))), (((((arr_41 [i_0 + 1] [i_3] [i_13 - 1] [i_3] [i_13] [i_13 + 1] [i_13 + 1]) + (9223372036854775807LL))) >> (((arr_41 [i_0 + 1] [(_Bool)0] [i_13 - 1] [i_3] [i_13 - 1] [i_13 + 1] [i_13]) + (9024107776021339176LL)))))));
                var_36 *= ((/* implicit */int) ((_Bool) max((min((((/* implicit */long long int) arr_17 [i_0] [i_3] [i_3] [i_0])), (arr_3 [i_13]))), (((/* implicit */long long int) min((((/* implicit */int) arr_21 [i_0 + 1] [i_3] [(signed char)8] [5U] [i_13] [i_3] [i_13])), (arr_48 [i_3])))))));
            }
            for (unsigned int i_14 = 3; i_14 < 10; i_14 += 2) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_9 [8U] [i_3] [i_3])))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned char i_15 = 1; i_15 < 11; i_15 += 4) 
                {
                    for (int i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        {
                            arr_58 [i_0] [i_14] [i_14 - 3] [i_15] [2ULL] [i_14 - 3] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_11 [i_0] [i_0] [i_14 - 1])))));
                            arr_59 [i_0 - 1] [(_Bool)1] [10U] [i_15] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) max((arr_54 [i_15 + 1]), (arr_54 [(signed char)5]))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_17 = 3; i_17 < 10; i_17 += 2) /* same iter space */
            {
                arr_63 [i_17] [0U] [i_17] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -58544100650686483LL)) ^ (1621009306749030099ULL)));
                var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0 - 1] [i_17] [i_17] [i_17] [i_17 - 1] [2]))))), (((((/* implicit */_Bool) arr_21 [i_0] [i_0 - 1] [i_0 - 1] [(unsigned short)9] [i_3] [i_17 + 2] [i_17 - 1])) ? (((/* implicit */int) arr_52 [i_0] [i_0 - 1] [i_3])) : (((/* implicit */int) arr_51 [i_3])))))))));
            }
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_39 += ((((/* implicit */_Bool) (unsigned short)21829)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_38 [5] [5] [i_18] [i_0 - 1] [i_0 - 1]) == (arr_38 [i_0] [i_0] [i_18] [i_0 - 1] [i_18]))))) : (arr_36 [0ULL]));
            /* LoopNest 3 */
            for (short i_19 = 0; i_19 < 12; i_19 += 2) 
            {
                for (int i_20 = 0; i_20 < 12; i_20 += 3) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_40 = ((long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_0] [i_20] [i_19] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_0] [i_20])))))));
                            arr_76 [i_0] [(signed char)3] [i_19] [i_19] [(signed char)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((2350647716U), (((/* implicit */unsigned int) var_10))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_68 [i_21] [i_21]))))) : (((-18976713404391042LL) * (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_0 - 1] [i_0 - 1] [6] [i_0 + 1] [i_0 + 1])))))));
                            var_41 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0 + 1] [i_0] [i_0 - 1]))))) && (((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0] [i_0 + 1])));
                            arr_77 [i_0 - 1] [i_0] [i_19] [2U] [9LL] [(_Bool)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -702495222)) ? (((/* implicit */unsigned int) 1737229848)) : (212176623U)))) ? (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25426))) >= (var_7)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_0] [i_18] [i_19] [i_0] [(unsigned short)3] [i_0] [(unsigned short)11]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_22 = 1; i_22 < 10; i_22 += 2) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_49 [i_0 - 1] [i_0 - 1] [i_0]))) ? (((((/* implicit */_Bool) arr_49 [i_0 - 1] [i_0 + 1] [i_0])) ? (arr_49 [i_0 + 1] [i_0 + 1] [i_0]) : (arr_49 [i_0 + 1] [i_0 + 1] [i_0]))) : (((arr_49 [i_0 + 1] [i_0 + 1] [i_0]) | (arr_49 [i_0 + 1] [i_0 + 1] [i_0])))));
            var_43 *= ((/* implicit */unsigned short) ((((/* implicit */int) max((((short) var_2)), (((/* implicit */short) arr_30 [i_22]))))) << (((8833642256244976277ULL) - (8833642256244976272ULL)))));
        }
        for (unsigned char i_23 = 1; i_23 < 10; i_23 += 2) /* same iter space */
        {
            var_44 = ((/* implicit */short) (+(((/* implicit */int) arr_61 [i_0] [i_0] [i_0 - 1] [i_0 + 1]))));
            var_45 = ((/* implicit */int) (~(((long long int) max((((/* implicit */unsigned long long int) 3095231909U)), (4065951569859059306ULL))))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 3) 
        {
            var_46 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-33)))) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-97)) : (arr_72 [(short)11])))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)117))))) ? ((~(var_7))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_0] [i_24])))))))));
            var_47 *= ((/* implicit */unsigned short) ((unsigned int) (!(((/* implicit */_Bool) (-(1054354058U)))))));
            var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [i_0] [9ULL] [i_0] [i_0] [(short)9] [i_0] [i_0 + 1])))))))) : (((((/* implicit */int) arr_34 [i_0 - 1] [i_0 - 1] [i_0] [i_0])) / (((/* implicit */int) arr_34 [i_0 - 1] [i_0 - 1] [i_24] [i_0 - 1])))))))));
            var_49 = ((/* implicit */int) max((var_49), ((+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_67 [i_0 + 1] [i_0] [i_0 - 1] [(unsigned short)10]))))) ? (((/* implicit */int) ((_Bool) arr_52 [i_0] [(unsigned short)6] [8LL]))) : (((/* implicit */int) arr_30 [i_0 - 1]))))))));
        }
    }
}
