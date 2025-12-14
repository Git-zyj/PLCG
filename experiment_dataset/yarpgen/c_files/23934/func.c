/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23934
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                for (short i_3 = 2; i_3 < 19; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) -9223372036854775783LL);
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2] [i_3 - 1] [i_4 + 2])) | (((((/* implicit */_Bool) (signed char)-57)) ? (2112098942) : (((/* implicit */int) arr_6 [i_0] [i_2 - 1] [i_3 + 2] [i_4 + 2])))))))));
                        }
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (((long long int) ((unsigned int) var_8)))));
                            arr_16 [i_5] [(_Bool)1] [i_2] [i_1] [i_5] = ((int) ((((/* implicit */int) (signed char)24)) / (((/* implicit */int) (_Bool)1))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            arr_20 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((unsigned long long int) arr_2 [i_1] [1U] [i_3])) | (((/* implicit */unsigned long long int) ((925400942) | (-2112098943))))));
                            arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_8 [i_2] [i_1 - 1] [i_2] [i_3] [i_2]);
                            var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_6] [i_1] [i_2] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) arr_18 [i_6] [i_3] [i_2] [i_0] [i_0]))))) ? ((~(9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 - 1])))))));
                        }
                        arr_22 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) (!(var_1))))) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_2] [i_2 + 1] [i_3]))));
                        var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2280875845U)) ? (min((664579315418707319ULL), (((/* implicit */unsigned long long int) arr_6 [i_3 + 1] [i_2] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((1339545782) << (((762109071) - (762109071))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_9 = 2; i_9 < 18; i_9 += 3) 
                {
                    for (unsigned int i_10 = 4; i_10 < 19; i_10 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) arr_3 [i_7] [i_10]);
                            var_21 = ((/* implicit */int) var_2);
                            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((-1629526229) / (2080768))), (((/* implicit */int) var_15)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) ((((-6605727089081983592LL) + (9223372036854775807LL))) << (((max((((-238510351) / (((/* implicit */int) arr_9 [11LL] [i_7] [i_7] [i_0] [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned char) var_15)), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(short)7])))))) - (251)))));
                arr_33 [i_0] [i_7] [i_7] = ((/* implicit */short) (~((~(((/* implicit */int) var_12))))));
            }
            for (int i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                arr_38 [i_7] [i_11] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_8 [i_0] [i_7] [12ULL] [i_7] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_7] [(unsigned char)3] [i_11]))) : (arr_8 [i_0] [20LL] [i_11] [i_7] [i_0]))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)155))) + (0LL)))));
                var_24 = ((/* implicit */unsigned int) arr_31 [i_0] [i_7] [i_11] [i_7] [i_7]);
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        {
                            var_25 = ((var_13) * (((/* implicit */int) (!(((arr_25 [i_0] [i_0] [17LL]) <= (arr_32 [i_0])))))));
                            arr_44 [i_0] [i_7] [i_11] [i_12] [i_13] = ((/* implicit */unsigned long long int) var_9);
                            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */long long int) -2112098942)) <= (((((/* implicit */long long int) ((((/* implicit */int) arr_37 [i_0] [i_11] [16LL] [20ULL])) / (((/* implicit */int) arr_7 [i_0] [i_7] [i_0] [i_12] [i_13]))))) / (-514556396096979577LL))))))));
                            var_27 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((3907279295139531730LL), (((/* implicit */long long int) -1462154415))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_0] [11U] [i_11] [i_12] [11LL])))))))), ((((!(((/* implicit */_Bool) 2112098945)))) ? (2097088LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) (_Bool)0)) : (-141416519))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    for (long long int i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        {
                            arr_50 [i_0] [i_7] [i_11] [i_14] [i_0] [i_11] [i_7] = ((/* implicit */unsigned long long int) arr_35 [i_0]);
                            var_28 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_27 [i_15] [i_0] [i_0]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_16 = 1; i_16 < 19; i_16 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 1; i_17 < 20; i_17 += 3) 
                    {
                        arr_55 [i_7] [i_16 - 1] [i_11] [i_7] [i_7] = ((arr_32 [i_0]) << ((((+(((((/* implicit */_Bool) -7621645557833452556LL)) ? (var_7) : (((/* implicit */unsigned long long int) -2112098942)))))) - (7510787827791013581ULL))));
                        arr_56 [i_17] [(unsigned char)2] [i_7] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_7] [i_7] [i_17])) || (((/* implicit */_Bool) var_12))))) <= (((2112098941) % (((/* implicit */int) (short)11020))))));
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 1330113938))) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) || ((_Bool)1))))));
                    }
                    var_30 = ((/* implicit */int) max((arr_7 [i_11] [i_11] [i_11] [i_11] [i_11]), (((/* implicit */short) (!(((/* implicit */_Bool) -2080786)))))));
                }
            }
            /* LoopNest 2 */
            for (signed char i_18 = 0; i_18 < 21; i_18 += 3) 
            {
                for (long long int i_19 = 2; i_19 < 20; i_19 += 3) 
                {
                    {
                        arr_62 [i_19] [i_7] [i_7] [i_0] = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) -2080769)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15112))) : (arr_4 [i_0] [i_0] [i_18]))) % (((/* implicit */long long int) ((((/* implicit */int) (signed char)58)) - (((/* implicit */int) var_3))))))), (((/* implicit */long long int) (-(arr_25 [i_0] [i_7] [i_18]))))));
                        arr_63 [i_0] [i_7] [i_18] [i_7] = ((/* implicit */short) var_12);
                        arr_64 [(unsigned short)0] &= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                } 
            } 
        }
        var_31 -= ((/* implicit */_Bool) ((((((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [(_Bool)1])) / (max((((/* implicit */int) var_0)), (-1938241986))))) - (max((((((/* implicit */int) (signed char)42)) << (((8721383896110677895ULL) - (8721383896110677883ULL))))), (((/* implicit */int) arr_5 [i_0]))))));
        /* LoopSeq 1 */
        for (long long int i_20 = 0; i_20 < 21; i_20 += 3) 
        {
            var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_0] [i_20] [i_20] [i_0] [i_20] [12ULL])))))));
            arr_68 [i_0] [16] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_0] [i_20])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_0] [i_20] [i_20] [i_20] [i_20])) || (((/* implicit */_Bool) -8940771784326555691LL))))) : (((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0])) << (0ULL)))));
            arr_69 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min(((+(((/* implicit */int) (short)-32765)))), (((/* implicit */int) min((((/* implicit */signed char) var_3)), ((signed char)58)))))))));
            var_33 *= ((/* implicit */short) 12392804357862941092ULL);
            arr_70 [i_0] [i_0] = ((/* implicit */short) ((long long int) (~(arr_1 [i_0]))));
        }
    }
    for (unsigned char i_21 = 0; i_21 < 10; i_21 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_22 = 0; i_22 < 10; i_22 += 3) 
        {
            for (unsigned char i_23 = 0; i_23 < 10; i_23 += 3) 
            {
                {
                    arr_78 [i_21] [8LL] [i_23] [i_23] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((268435200) / (((/* implicit */int) var_8))))) % (((unsigned long long int) 3740768335746792245ULL))))) ? (((/* implicit */long long int) var_10)) : (var_11)));
                    arr_79 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_41 [i_21] [i_22] [i_23]))))) ^ ((~(-175408058518514023LL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_24 = 0; i_24 < 10; i_24 += 3) /* same iter space */
                    {
                        arr_82 [i_22] [(_Bool)1] [i_23] = ((/* implicit */_Bool) ((arr_18 [i_21] [i_22] [i_23] [i_24] [i_22]) ? (((/* implicit */int) arr_48 [i_21] [i_22] [i_22] [i_23] [i_23] [i_24] [(unsigned short)17])) : (((/* implicit */int) arr_75 [i_21] [i_21] [i_21] [i_22]))));
                        arr_83 [i_21] [i_21] [i_22] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_8 [i_24] [19ULL] [i_23] [i_22] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7)))));
                    }
                    for (long long int i_25 = 0; i_25 < 10; i_25 += 3) /* same iter space */
                    {
                        var_34 |= ((/* implicit */short) (!(((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_21] [i_22] [i_22] [i_25]))) : (-2638773302121745900LL))) <= (((/* implicit */long long int) (-(((/* implicit */int) (signed char)68)))))))));
                        var_35 = ((/* implicit */_Bool) (+(max((((((var_11) + (9223372036854775807LL))) << (((/* implicit */int) var_3)))), (((/* implicit */long long int) arr_29 [i_21] [i_22] [i_23] [i_22]))))));
                    }
                    var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (+(((arr_86 [i_21] [i_21] [i_22] [i_22] [4ULL]) + (((/* implicit */long long int) ((/* implicit */int) var_12))))))))));
                }
            } 
        } 
        var_37 += ((/* implicit */unsigned char) (~(max((((/* implicit */int) arr_75 [6] [i_21] [i_21] [6])), (((((/* implicit */_Bool) arr_7 [i_21] [i_21] [i_21] [i_21] [i_21])) ? (((/* implicit */int) arr_29 [i_21] [i_21] [(signed char)16] [(signed char)18])) : (((/* implicit */int) var_3))))))));
        var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] [i_21])) ? (((268435200) - (((((/* implicit */_Bool) arr_28 [i_21] [1LL] [i_21] [i_21] [i_21] [i_21])) ? (762109071) : (((/* implicit */int) arr_0 [i_21])))))) : (((/* implicit */int) var_9))));
    }
    /* vectorizable */
    for (signed char i_26 = 1; i_26 < 15; i_26 += 3) /* same iter space */
    {
        var_39 ^= ((/* implicit */long long int) ((unsigned char) arr_45 [i_26]));
        var_40 = ((((/* implicit */int) arr_15 [i_26] [i_26] [i_26] [i_26] [i_26 + 1] [i_26] [i_26])) <= (((/* implicit */int) (_Bool)1)));
    }
    for (signed char i_27 = 1; i_27 < 15; i_27 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_28 = 1; i_28 < 15; i_28 += 3) 
        {
            for (short i_29 = 1; i_29 < 15; i_29 += 3) 
            {
                {
                    arr_99 [i_27 - 1] [i_28] [i_28] [i_29 - 1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-4)) || (((/* implicit */_Bool) -6979832037575942992LL)))))));
                    var_41 &= max((((/* implicit */long long int) arr_46 [i_27] [i_28 - 1] [i_29] [i_29] [i_29])), (2199023255552LL));
                    /* LoopNest 2 */
                    for (unsigned char i_30 = 3; i_30 < 15; i_30 += 3) 
                    {
                        for (long long int i_31 = 2; i_31 < 14; i_31 += 3) 
                        {
                            {
                                var_42 = ((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */int) ((var_4) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8053)))))), (((((/* implicit */_Bool) -8056014155239121693LL)) ? (((/* implicit */int) arr_94 [i_27] [i_27] [i_27])) : (((/* implicit */int) arr_15 [i_31] [i_30 - 3] [i_28] [i_28] [i_28] [i_27] [i_27]))))))), (arr_88 [i_27])));
                                var_43 = ((/* implicit */short) max((3575974870U), (((/* implicit */unsigned int) (_Bool)1))));
                                arr_106 [i_27] [i_28] [i_29] [i_30 - 1] [(short)3] = ((/* implicit */short) (((+(arr_12 [i_27] [i_27 + 1] [20ULL] [i_28] [i_29 - 1]))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_27] [i_27 + 1] [i_30] [i_30] [i_30])) || (((/* implicit */_Bool) var_14))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_44 -= ((/* implicit */_Bool) ((arr_49 [i_27] [20ULL] [i_27] [i_27] [i_27] [20ULL]) ? (max((max((2080778), (((/* implicit */int) (short)10702)))), (((/* implicit */int) ((signed char) (unsigned char)252))))) : (max((((((/* implicit */_Bool) -2097089LL)) ? (((/* implicit */int) arr_48 [i_27] [7U] [i_27] [i_27] [i_27 - 1] [(_Bool)1] [(unsigned char)13])) : (2147483647))), (arr_17 [i_27] [i_27] [i_27] [i_27] [i_27 - 1] [i_27 - 1] [i_27])))));
    }
    var_45 = ((/* implicit */short) var_4);
}
