/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207215
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
    var_12 = ((/* implicit */short) (+(((int) 34359738367LL))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (signed char)-37)))));
        arr_4 [12] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (34359738367LL))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_11)) > (max((-34359738360LL), (((/* implicit */long long int) arr_7 [i_0] [i_0 + 2] [i_0 + 2]))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_15 = ((/* implicit */int) (((((!(((/* implicit */_Bool) var_0)))) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [(_Bool)1]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 35184372088824LL)) || (((/* implicit */_Bool) -34359738372LL))))))));
                var_16 = ((((/* implicit */unsigned int) min((var_4), (((/* implicit */int) arr_1 [i_0 + 1]))))) == (((((/* implicit */_Bool) ((arr_8 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (arr_10 [i_0 - 2] [i_1] [i_0] [i_0]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))))));
            }
        }
        for (long long int i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    {
                        arr_19 [i_3] [i_0] [i_3] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_3])) ? ((((_Bool)0) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (arr_9 [i_3]))))));
                        var_17 &= ((/* implicit */int) var_10);
                        arr_20 [i_0 - 2] [i_3] [i_4] [i_5] [i_0] = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-225)) % (((/* implicit */int) (unsigned char)54))))) & (arr_11 [(short)5] [i_3] [i_4] [i_5])))));
                        var_18 = ((/* implicit */signed char) arr_9 [i_5]);
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned int) max((arr_11 [i_0] [i_0] [i_0 - 3] [i_0]), (((/* implicit */unsigned long long int) arr_17 [i_0] [i_0])))))), (-2516130852995831390LL)));
            /* LoopSeq 2 */
            for (long long int i_6 = 3; i_6 < 21; i_6 += 1) 
            {
                /* LoopSeq 3 */
                for (short i_7 = 4; i_7 < 23; i_7 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((((unsigned int) (signed char)-119)), (((/* implicit */unsigned int) (-((+(var_4))))))));
                        var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (short)-21642)), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (arr_11 [21U] [i_3] [i_3] [i_3]))), (((/* implicit */unsigned long long int) arr_18 [i_6] [i_6] [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_6]))))));
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1380949974U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1094923629)) ? (621370147U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55)))))) : (((unsigned long long int) arr_26 [i_7 - 3] [i_7 - 3] [i_6] [i_7] [i_7 - 3]))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_7] [i_3] [i_6 - 1] [i_7 - 3])) >> ((((+(((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */int) var_8)))))) + (287371545)))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        arr_29 [i_0] [i_3] [i_6] [i_7 + 1] [i_9] [i_0] [i_7 + 1] = ((/* implicit */short) ((unsigned char) var_6));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1094923639)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)8644))))) ? (((unsigned long long int) (signed char)-1)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-19))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))))));
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_3))));
                        var_26 &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_0] [i_6 + 1] [i_7 - 2]))))), (min((7566120729340844513LL), (((/* implicit */long long int) (_Bool)0))))));
                        var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_26 [i_6 + 2] [i_0 + 1] [(signed char)14] [i_0 + 1] [i_7 - 4])), (((((/* implicit */_Bool) 68718428160ULL)) ? (((/* implicit */unsigned int) -1095907762)) : (arr_9 [i_0])))))) ? (((unsigned int) ((((/* implicit */_Bool) 68718428160ULL)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    }
                    for (unsigned int i_10 = 3; i_10 < 23; i_10 += 2) 
                    {
                        arr_32 [(unsigned short)1] [i_0] [i_6 - 2] [i_7 + 1] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_0 - 3] [i_0 + 2] [i_6 - 1])))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */int) var_10)) << (((/* implicit */int) var_5))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        var_29 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_6] [i_11])) != (((((/* implicit */int) (!(var_5)))) >> (((((/* implicit */int) (short)-12879)) + (12879)))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) max((((unsigned short) (unsigned char)54)), (((/* implicit */unsigned short) (short)12878))))) ? (((unsigned long long int) (+(-8941931230641542591LL)))) : (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) min(((unsigned char)183), (((/* implicit */unsigned char) var_1))))))))));
                    }
                    for (short i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
                    {
                        var_31 ^= ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_16 [i_7 - 3] [i_3] [i_0 + 2] [i_6 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_16 [i_7 + 1] [i_3] [i_0 - 3] [i_6 + 2])) < (((/* implicit */int) arr_16 [i_7 - 3] [i_3] [i_0 - 1] [i_6 + 3])))))));
                        arr_37 [(unsigned char)17] [i_0] = ((/* implicit */_Bool) (+(max((((/* implicit */int) (short)12879)), (-1094923623)))));
                    }
                    /* vectorizable */
                    for (short i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned char) ((9223372036854775807LL) > (((/* implicit */long long int) arr_31 [i_0] [i_0 + 2] [i_0] [i_0 - 2]))));
                        var_33 = ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned char)202))))));
                    }
                    arr_40 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -34359738372LL)) ? (((/* implicit */int) (short)-3040)) : (((/* implicit */int) (_Bool)1))));
                }
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_45 [i_0] [i_3] = ((/* implicit */long long int) (_Bool)0);
                    /* LoopSeq 1 */
                    for (int i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        var_34 = ((/* implicit */_Bool) max((var_34), ((_Bool)1)));
                        arr_48 [i_0] [i_0 + 1] [i_0 + 1] [i_6] [i_6] [i_14] [i_6] = ((/* implicit */long long int) (+(((/* implicit */int) (short)14728))));
                    }
                    var_35 = ((/* implicit */unsigned char) arr_24 [i_14]);
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        var_36 = ((/* implicit */short) ((_Bool) var_8));
                        var_37 |= ((/* implicit */long long int) var_0);
                    }
                    var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_35 [i_0] [i_3] [i_3] [i_3] [i_3]))) ? (((/* implicit */int) (signed char)81)) : ((((_Bool)1) ? (((/* implicit */int) ((arr_42 [i_0] [i_3] [i_6] [i_3] [i_6 + 2] [5]) && (((/* implicit */_Bool) (unsigned char)128))))) : (((/* implicit */int) arr_24 [i_0 - 2])))))))));
                    var_39 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_53 [i_0] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_6]) > (((/* implicit */unsigned long long int) arr_31 [i_6 - 2] [i_0 + 2] [15] [i_0])))))) % (((long long int) ((((/* implicit */_Bool) -3501330469718395473LL)) ? (((/* implicit */int) (short)-12561)) : (((/* implicit */int) var_3)))))));
                    var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_8)), (1233729370U)))), (arr_53 [(signed char)8] [i_16] [i_16] [i_16] [i_16] [(_Bool)1]))), (((unsigned long long int) arr_52 [i_3] [i_3] [i_6 + 3] [i_16] [i_0 - 1] [i_0])))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_18 = 0; i_18 < 24; i_18 += 4) 
                {
                    var_41 = ((/* implicit */int) (short)-14728);
                    var_42 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_3))));
                }
            }
            /* vectorizable */
            for (int i_19 = 3; i_19 < 23; i_19 += 1) 
            {
                var_43 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (short)-16029))) % (2516130852995831399LL))) ^ (((/* implicit */long long int) arr_6 [i_0 - 1] [i_3] [i_19 - 2]))));
                var_44 = ((/* implicit */int) ((((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))))) % (((/* implicit */unsigned long long int) ((((-1094923641) + (2147483647))) << (((((/* implicit */int) arr_59 [i_0] [i_3] [i_0])) - (11958))))))));
                var_45 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-1126616762) : (((/* implicit */int) (signed char)1)))));
            }
            /* LoopNest 2 */
            for (unsigned int i_20 = 0; i_20 < 24; i_20 += 4) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_22 = 2; i_22 < 23; i_22 += 3) 
                        {
                            var_46 = ((/* implicit */_Bool) var_0);
                            var_47 += ((/* implicit */int) ((unsigned short) arr_39 [i_0] [i_0 - 1] [i_0] [i_22] [i_22 + 1] [i_22 + 1] [i_22 + 1]));
                        }
                        /* vectorizable */
                        for (short i_23 = 0; i_23 < 24; i_23 += 3) 
                        {
                            var_48 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_60 [i_0 - 2] [i_0 - 1] [i_0 - 2]))));
                            arr_68 [i_0] [i_0] [i_3] [i_20] [i_21] [(unsigned char)9] [7] = ((/* implicit */unsigned char) arr_42 [i_0 + 1] [i_3] [(_Bool)1] [(_Bool)1] [i_23] [(signed char)15]);
                            var_49 = ((/* implicit */int) ((unsigned short) (_Bool)1));
                        }
                        /* LoopSeq 2 */
                        for (unsigned long long int i_24 = 0; i_24 < 24; i_24 += 3) 
                        {
                            var_50 += ((/* implicit */unsigned int) max((max(((~(var_6))), (((/* implicit */unsigned long long int) arr_70 [(unsigned char)10] [i_3] [i_3] [i_3] [20LL])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_0 - 3] [i_0 - 2] [i_0 - 3] [14U] [i_0 - 1] [(signed char)19] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))))));
                            var_51 = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_0])) && (((/* implicit */_Bool) ((var_9) ? (7943728513192117563LL) : (((/* implicit */long long int) arr_46 [i_0])))))));
                        }
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            var_52 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 131056)) ? (((/* implicit */int) arr_35 [i_21] [i_0 - 1] [i_20] [i_21] [i_25])) : (-1)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 + 1] [i_3]))) ^ (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1919939045) == (((/* implicit */int) (short)-5896))))))));
                            var_53 = max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0 + 1] [i_3] [i_0] [19U] [i_0 - 1] [17U]))) > (var_6)))), (((((/* implicit */_Bool) arr_28 [(unsigned char)14] [i_3] [i_0] [i_21] [i_0 - 1] [6])) ? (((/* implicit */int) arr_28 [i_20] [i_3] [i_0] [i_25] [i_0 - 1] [(_Bool)1])) : (((/* implicit */int) arr_28 [i_0] [i_3] [i_0] [i_21] [i_0 - 1] [(unsigned char)17])))));
                        }
                    }
                } 
            } 
        }
    }
    var_54 = ((/* implicit */signed char) var_8);
}
