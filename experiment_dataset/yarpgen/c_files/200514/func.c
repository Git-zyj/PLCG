/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200514
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
                    {
                        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-(((/* implicit */int) arr_8 [14LL] [i_1] [i_3] [(unsigned char)14] [(unsigned char)14])))))));
                        var_18 = ((/* implicit */unsigned short) arr_7 [i_0] [i_2 + 1] [i_1] [i_1] [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 15; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((_Bool) var_8)))));
                            var_20 |= var_11;
                            var_21 = ((/* implicit */_Bool) min((var_21), (var_6)));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [6LL] [i_2 + 1] [i_3] [i_4 + 2] [6LL]))) : (arr_6 [i_1] [i_3] [i_4] [i_4 - 1]))))));
                        }
                    }
                    for (int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) (unsigned char)136);
                        arr_14 [i_0] [i_2] = ((/* implicit */unsigned long long int) var_12);
                        arr_15 [i_0] [0U] [i_2 + 1] = ((/* implicit */int) var_11);
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                    {
                        arr_20 [i_0] [i_0] [i_6] [i_2] [i_6] &= ((/* implicit */unsigned char) (-(arr_6 [i_0] [i_6] [i_0 + 1] [(short)12])));
                        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0 + 2] [i_2 + 1] [i_2] [i_6] [i_2 + 1] [i_6] [i_6])) ? (((/* implicit */long long int) var_15)) : (arr_10 [i_0 + 1] [i_0] [i_2 + 1] [i_6] [i_2] [i_0 + 1] [i_2]))))));
                    }
                    for (int i_7 = 0; i_7 < 19; i_7 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (unsigned char)255))));
                        arr_23 [i_0] [(unsigned char)10] [i_2] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6144))) / (max((((/* implicit */unsigned long long int) arr_22 [i_0 - 1] [(_Bool)1] [i_2 + 1] [i_7])), (7188357560159894436ULL))))), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */int) var_2)))))));
                    }
                    var_26 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)17))));
                    arr_24 [i_0 + 1] [(unsigned char)8] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                }
            } 
        } 
    } 
    var_27 &= ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) ((unsigned short) (unsigned char)142))) <= (((/* implicit */int) var_2)))));
    var_28 ^= ((/* implicit */int) var_4);
    var_29 = ((/* implicit */_Bool) max(((unsigned short)25514), (((/* implicit */unsigned short) var_12))));
    /* LoopSeq 4 */
    for (signed char i_8 = 1; i_8 < 17; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            arr_32 [i_8] = ((/* implicit */_Bool) (-(max((arr_25 [i_8]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_8])) ? (((/* implicit */int) (unsigned short)20504)) : (((/* implicit */int) arr_29 [(_Bool)1] [i_8] [i_8])))))))));
            arr_33 [i_8] = ((/* implicit */unsigned long long int) var_3);
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 19; i_13 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */long long int) arr_40 [i_8] [i_8 + 2] [i_8 + 1] [i_8]);
                            var_31 ^= ((/* implicit */signed char) (~(var_9)));
                            var_32 = ((/* implicit */long long int) (short)7748);
                        }
                    } 
                } 
                arr_44 [i_8] [(_Bool)1] [i_10] [i_11] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_11] [i_10])) ? (var_16) : (((/* implicit */unsigned int) arr_1 [i_8]))))) ? (((/* implicit */long long int) var_8)) : ((~(var_13)))));
            }
            var_33 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8])) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11))))));
        }
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) min((var_9), (((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [18LL] [18LL])) : (var_8))))))))));
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_48 [i_14] [i_14] = ((/* implicit */signed char) var_11);
        arr_49 [i_14] [i_14] = ((/* implicit */unsigned char) (_Bool)1);
        var_35 = ((/* implicit */long long int) arr_45 [i_14]);
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((unsigned long long int) var_14)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_14])))));
        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (_Bool)1))));
    }
    /* vectorizable */
    for (short i_15 = 0; i_15 < 21; i_15 += 4) 
    {
        arr_53 [2] |= ((/* implicit */unsigned char) ((arr_46 [i_15]) <= (((/* implicit */int) ((unsigned short) (short)-13545)))));
        var_38 *= ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)114));
        /* LoopSeq 4 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_17 = 3; i_17 < 18; i_17 += 4) 
            {
                /* LoopNest 2 */
                for (int i_18 = 1; i_18 < 18; i_18 += 4) 
                {
                    for (unsigned int i_19 = 3; i_19 < 20; i_19 += 2) 
                    {
                        {
                            var_39 -= ((/* implicit */unsigned short) (unsigned char)123);
                            var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_19 + 1])) ? (1099511627776LL) : (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_19 - 2]))))))));
                            arr_62 [i_15] [i_16] [i_17] [i_18] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)119)) / (((/* implicit */int) var_14))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 21; i_20 += 1) 
                {
                    for (signed char i_21 = 3; i_21 < 18; i_21 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */int) min((var_41), ((~(((var_10) | (((/* implicit */int) var_2))))))));
                            arr_69 [i_15] [(unsigned char)11] [i_15] [i_16] = ((/* implicit */signed char) arr_56 [i_16] [i_16] [12]);
                            arr_70 [i_15] [i_16] [i_20] [i_20] = ((/* implicit */unsigned short) arr_60 [i_16] [i_17] [i_16] [i_16]);
                            var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) 0ULL))));
                            arr_71 [i_15] [i_16] [i_17] [i_20] [i_21] = ((/* implicit */signed char) var_13);
                        }
                    } 
                } 
            }
            var_43 = ((/* implicit */unsigned int) arr_56 [i_16] [4U] [i_16]);
        }
        for (short i_22 = 0; i_22 < 21; i_22 += 3) 
        {
            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_67 [i_15] [i_15] [i_15] [i_15] [i_15] [i_22])) % (((/* implicit */int) arr_74 [i_15] [i_22]))));
            var_45 = ((/* implicit */long long int) (-(((/* implicit */int) arr_55 [i_15] [i_22] [i_22]))));
        }
        for (unsigned char i_23 = 2; i_23 < 17; i_23 += 3) 
        {
            arr_78 [i_15] [i_15] [i_23] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) arr_65 [i_15] [i_15])))));
            var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) (short)28888))));
            var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_77 [i_23 - 1] [i_23 + 1] [i_23])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_77 [i_23 - 1] [i_23 - 2] [i_23 - 2])))))));
            var_48 = ((/* implicit */int) max((var_48), (((/* implicit */int) (unsigned char)62))));
            /* LoopSeq 1 */
            for (unsigned int i_24 = 0; i_24 < 21; i_24 += 1) 
            {
                var_49 -= ((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) (signed char)-68)))));
                var_50 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_67 [i_15] [i_23 - 2] [i_15] [i_23] [i_24] [i_23 - 1]))));
                var_51 = arr_50 [i_15];
            }
        }
        for (unsigned int i_25 = 4; i_25 < 19; i_25 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_26 = 2; i_26 < 18; i_26 += 3) 
            {
                var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_45 [i_25])) : (((/* implicit */int) arr_56 [i_26] [i_25] [i_26]))))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1466282359)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_15] [11U] [i_15] [i_15] [(_Bool)1] [(_Bool)1]))) : (var_16))))));
                var_53 = ((/* implicit */unsigned short) arr_74 [i_15] [i_25]);
            }
            for (long long int i_27 = 0; i_27 < 21; i_27 += 2) 
            {
                var_54 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_15] [i_25] [i_27]))) % (arr_83 [i_15])))) ? (((/* implicit */long long int) var_8)) : (((arr_79 [i_15] [i_15] [i_15] [i_15]) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (9223372036854775797LL))));
                arr_88 [i_15] = ((/* implicit */long long int) var_15);
                /* LoopNest 2 */
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                    {
                        {
                            var_55 = ((/* implicit */long long int) max((var_55), (((((/* implicit */_Bool) (unsigned short)57866)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-65)))))));
                            var_56 = ((((/* implicit */_Bool) arr_54 [i_15] [i_28] [i_25 - 4])) ? (6937841242858841574LL) : (((/* implicit */long long int) var_8)));
                            arr_97 [i_29] [i_28] [i_27] [i_25] [i_15] = ((/* implicit */signed char) arr_90 [i_25 + 1] [i_25 + 1] [i_25 + 2] [i_25 - 2] [i_25 - 4]);
                        }
                    } 
                } 
            }
            var_57 = ((/* implicit */unsigned int) (((_Bool)1) ? ((-(arr_46 [i_25]))) : (((((/* implicit */_Bool) var_12)) ? (arr_57 [i_15] [i_25] [i_25 + 2]) : (((/* implicit */int) (signed char)-57))))));
            var_58 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_74 [i_25 - 4] [i_25])) : ((~(((/* implicit */int) var_14))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_30 = 1; i_30 < 17; i_30 += 2) 
    {
        var_59 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [i_30 + 1] [i_30 + 1])) ? (var_8) : (((/* implicit */int) (_Bool)1))));
        var_60 = ((/* implicit */unsigned char) (signed char)45);
        var_61 = ((/* implicit */int) max((var_61), ((((+(((/* implicit */int) arr_17 [i_30] [i_30] [i_30 + 1] [11])))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_87 [i_30]))))))));
        var_62 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_30])) ? (arr_68 [(signed char)10]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-64)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((1267034725U) != (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) 6215542101145048520ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_89 [i_30] [5U] [5U] [5U] [i_30] [i_30 + 1]))) : (var_13)))));
    }
}
