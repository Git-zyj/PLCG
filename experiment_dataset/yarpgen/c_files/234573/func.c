/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234573
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
    var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [i_1] [i_2]))))) ? (var_4) : (min((((/* implicit */int) arr_7 [i_0] [i_1] [(_Bool)1])), (var_4)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4250673718320663544LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)0))))))) ? ((((-(((/* implicit */int) arr_9 [1ULL])))) ^ (var_7))) : (((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */int) var_5)), (arr_13 [i_4] [i_2] [i_0]))) : (((/* implicit */int) (_Bool)1))))));
                                arr_17 [i_3] [i_3] [i_2] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_6 [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
    {
        var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(unsigned char)12] [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) arr_18 [(unsigned short)5]))))) ? (arr_15 [i_5] [i_5] [i_5] [(unsigned short)14] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5])))));
        arr_20 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_5])))))) ? (var_2) : (arr_5 [(_Bool)1])));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 2; i_6 < 7; i_6 += 4) 
        {
            arr_23 [i_5] [i_6 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_18 [i_5])) ? (var_2) : (((/* implicit */int) (unsigned char)164)))) + (((/* implicit */int) arr_6 [i_5]))));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 7; i_7 += 2) 
            {
                for (long long int i_8 = 2; i_8 < 9; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        {
                            arr_31 [i_7] [i_6] [i_7] [i_8 - 2] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_8] [(signed char)5] [i_5])) ? (((arr_0 [i_6 + 1]) / (var_10))) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5] [i_6] [i_7] [i_8 - 1] [i_9])))));
                            var_14 -= ((/* implicit */long long int) (unsigned char)6);
                        }
                    } 
                } 
            } 
            arr_32 [i_5] = ((/* implicit */long long int) (unsigned char)164);
        }
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            for (int i_11 = 1; i_11 < 9; i_11 += 3) 
            {
                for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    {
                        arr_40 [i_5] [i_11] [i_11] [i_5] = var_3;
                        arr_41 [i_11] [i_10] [i_11] = ((/* implicit */signed char) (-(((((/* implicit */int) var_3)) << (((/* implicit */int) (unsigned char)0))))));
                        arr_42 [i_5] [i_11] = ((/* implicit */_Bool) arr_25 [i_11] [i_11] [i_11]);
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                var_15 += ((/* implicit */_Bool) (-(9223372036854775807LL)));
                var_16 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [18U]))))) : (((((/* implicit */_Bool) arr_45 [i_13] [i_13] [i_13])) ? (var_8) : (((/* implicit */unsigned int) var_7)))));
                arr_50 [i_13] [i_13] [i_15] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) var_0))))));
            }
            for (short i_16 = 0; i_16 < 10; i_16 += 1) 
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [(short)8])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_13] [i_13] [(unsigned char)8] [2LL])))))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_13] [(short)6] [i_13] [i_14] [(short)4])) ? (((/* implicit */int) (unsigned char)255)) : (var_7)))) || (((/* implicit */_Bool) max((((/* implicit */int) arr_25 [i_13] [(short)6] [(short)6])), (var_7)))))) ? (((/* implicit */long long int) max(((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)32767)))), (((/* implicit */int) (unsigned char)1))))) : (min((((/* implicit */long long int) var_4)), (min((var_10), (var_10))))))))));
                var_19 = var_6;
            }
            var_20 *= ((/* implicit */unsigned int) (+((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) (-(var_7)))) : (var_6)))));
            var_21 = ((/* implicit */short) min((arr_0 [i_14]), (((/* implicit */long long int) ((var_7) & (max((((/* implicit */int) (unsigned char)0)), (var_2))))))));
            arr_54 [i_13] [(_Bool)1] [i_14] = ((/* implicit */int) min((((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) arr_28 [7ULL]))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_39 [i_13] [i_13])))))))), (((/* implicit */unsigned int) (signed char)0))));
        }
        for (signed char i_17 = 0; i_17 < 10; i_17 += 1) 
        {
            var_22 = ((/* implicit */long long int) var_7);
            var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (683788039) : (((/* implicit */int) (unsigned char)7))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_18 = 0; i_18 < 10; i_18 += 4) 
            {
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_13] [i_17] [i_18] [i_13]))) : (var_9)));
                var_25 = ((/* implicit */_Bool) arr_5 [i_13]);
                /* LoopSeq 1 */
                for (short i_19 = 0; i_19 < 10; i_19 += 4) 
                {
                    var_26 ^= ((/* implicit */_Bool) arr_15 [i_13] [i_13] [i_13] [i_18] [i_18] [i_19]);
                    arr_63 [i_13] [i_13] [i_18] [4U] = ((/* implicit */signed char) (-(var_6)));
                }
            }
            for (long long int i_20 = 0; i_20 < 10; i_20 += 3) 
            {
                var_27 ^= min(((signed char)20), (min((arr_18 [i_13]), (arr_18 [i_13]))));
                /* LoopNest 2 */
                for (unsigned int i_21 = 3; i_21 < 7; i_21 += 3) 
                {
                    for (short i_22 = 3; i_22 < 7; i_22 += 3) 
                    {
                        {
                            arr_72 [i_13] [i_17] [i_20] [i_20] [4ULL] [i_22] [i_20] |= ((/* implicit */long long int) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5))))));
                            var_28 *= ((/* implicit */short) (signed char)15);
                            arr_73 [i_13] [i_17] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) arr_44 [i_13] [i_17])) ? (((/* implicit */int) arr_44 [i_13] [i_13])) : (((/* implicit */int) arr_44 [(short)0] [i_21]))))));
                        }
                    } 
                } 
            }
            arr_74 [i_13] [i_17] = ((/* implicit */short) (!((_Bool)1)));
        }
        /* LoopNest 2 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            for (signed char i_24 = 0; i_24 < 10; i_24 += 4) 
            {
                {
                    var_29 -= ((/* implicit */_Bool) max((max((arr_44 [i_13] [i_13]), (((/* implicit */unsigned short) (short)32767)))), (((/* implicit */unsigned short) (unsigned char)108))));
                    /* LoopNest 2 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        for (short i_26 = 0; i_26 < 10; i_26 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (unsigned char)147))));
                                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) arr_70 [i_13] [(short)5]))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (long long int i_27 = 0; i_27 < 10; i_27 += 3) /* same iter space */
                    {
                        var_32 -= ((/* implicit */short) (_Bool)1);
                        arr_89 [i_13] [i_23] [i_24] [i_23] = min((arr_26 [i_13]), (((/* implicit */unsigned long long int) max(((-(var_7))), (((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)0))))))));
                        var_33 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)126)), (arr_21 [i_13] [i_23] [i_27])))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_52 [i_13] [i_23] [9] [i_27])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_9)) : (var_6)))))));
                    }
                    for (long long int i_28 = 0; i_28 < 10; i_28 += 3) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_29 = 0; i_29 < 10; i_29 += 4) 
                        {
                            var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) == (((((/* implicit */_Bool) arr_0 [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)126))) : (-333087492523908514LL)))));
                            arr_94 [i_13] = ((/* implicit */_Bool) arr_28 [i_13]);
                        }
                        for (int i_30 = 3; i_30 < 9; i_30 += 3) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (max((var_9), (((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (1016955260)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)146))) : (((var_0) ? (var_8) : (arr_3 [6ULL] [i_23] [i_13])))))));
                            var_36 = ((/* implicit */signed char) max((3808260607U), (((/* implicit */unsigned int) (_Bool)1))));
                            arr_97 [0U] [i_23] [i_24] [i_24] [6] |= ((/* implicit */unsigned long long int) var_8);
                        }
                        arr_98 [i_13] [i_24] = ((/* implicit */unsigned short) ((((max((((/* implicit */long long int) var_2)), (-4017467933432349405LL))) >= (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_13] [i_23] [i_24] [i_28] [i_23] [i_24]))))) ? (((((/* implicit */long long int) (-(1016955260)))) & ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(arr_81 [i_13] [i_24] [(signed char)1] [i_13])))), (arr_30 [(unsigned short)5] [i_13] [i_23] [i_13] [(_Bool)1]))))));
                        arr_99 [i_13] [i_13] = ((/* implicit */signed char) (unsigned short)0);
                        arr_100 [i_13] [i_13] [i_24] [i_13] = ((/* implicit */unsigned int) ((long long int) ((((((/* implicit */int) (signed char)-8)) > (((/* implicit */int) arr_91 [7LL] [i_13] [i_13] [3ULL])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_10))));
                        var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) (-(((/* implicit */int) ((short) var_9))))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_31 = 4; i_31 < 7; i_31 += 1) 
                    {
                        arr_103 [i_13] [i_24] [i_23] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((arr_24 [i_23] [i_23] [i_13] [i_31 - 3]) ? (((/* implicit */int) arr_77 [i_31 - 4] [9LL] [i_31 + 2])) : (((/* implicit */int) (short)30761))))) >= (min(((~(4709595727724875510ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                        var_38 = ((/* implicit */unsigned short) (_Bool)1);
                    }
                }
            } 
        } 
        arr_104 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (unsigned char)255)), (var_6))), (((/* implicit */long long int) (-(var_9))))))) ? (((/* implicit */long long int) (+(var_9)))) : ((-(min((var_10), (((/* implicit */long long int) var_1))))))));
        var_39 = ((/* implicit */int) arr_1 [i_13]);
        arr_105 [i_13] = var_10;
    }
    for (signed char i_32 = 0; i_32 < 13; i_32 += 3) 
    {
        var_40 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_32] [i_32])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_9)))) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (var_4)))))) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-95)))));
        arr_109 [i_32] = ((/* implicit */signed char) arr_7 [i_32] [i_32] [i_32]);
    }
}
