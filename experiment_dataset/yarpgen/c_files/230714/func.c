/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230714
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
    var_18 = ((/* implicit */short) max((var_18), (min(((short)-16384), (((/* implicit */short) (_Bool)0))))));
    var_19 |= ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_16) : (var_16)))) ^ ((+(var_6))))) - (((/* implicit */unsigned int) ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) ((((/* implicit */unsigned int) 128)) > (var_14))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
        {
            arr_6 [(unsigned short)8] = ((/* implicit */short) ((unsigned char) (-(270215977642229760LL))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    {
                        arr_12 [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_12);
                        arr_13 [(unsigned short)4] [i_1] [i_2 - 2] [i_1] |= ((/* implicit */_Bool) ((var_6) ^ (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_10 [i_3] [i_2 - 2] [i_0] [i_0])) : (((/* implicit */int) var_10)))))))));
                        arr_14 [i_2] [i_2 - 3] [i_2 - 3] [i_3] = ((/* implicit */unsigned long long int) min(((~(((((/* implicit */_Bool) arr_2 [(unsigned short)15] [i_1])) ? (arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))), (((/* implicit */long long int) var_13))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_0] [i_2] [i_2] [i_0] [i_0])) ? (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((arr_4 [i_0] [i_0] [4U]) <= (((/* implicit */long long int) arr_8 [i_2] [i_1] [8LL])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0] [11LL]))))))))));
                        var_21 = ((/* implicit */long long int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [(unsigned char)4]) : (arr_0 [i_0])))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                for (short i_5 = 1; i_5 < 17; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_6))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)27240)))), (((/* implicit */int) (!(((/* implicit */_Bool) 14462818390262093994ULL)))))))) ? (arr_11 [(unsigned short)8] [i_6] [i_1] [i_1] [i_1] [i_0]) : (((((/* implicit */_Bool) max((arr_18 [i_6]), (((/* implicit */unsigned long long int) (signed char)28))))) ? (((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */long long int) arr_7 [(_Bool)1] [i_1] [(short)4])))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                            arr_23 [i_1] [(unsigned char)2] [(unsigned char)2] [(unsigned char)0] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((short)16382), (var_9))))))) ? (arr_11 [i_0] [i_0] [i_0] [i_4] [i_5] [4ULL]) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)29429)) == (((/* implicit */int) arr_1 [i_5 + 1] [i_5 - 1]))))))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_7 = 0; i_7 < 18; i_7 += 4) /* same iter space */
        {
            arr_28 [i_0] &= ((/* implicit */unsigned long long int) var_14);
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) (+(arr_19 [i_0] [(unsigned char)7] [i_7] [i_7] [i_7])))) : ((+((~(2305702271725338624ULL)))))))));
            arr_29 [i_7] [i_7] [3ULL] |= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16382))) : (3983925683447457622ULL)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_7])) || (((/* implicit */_Bool) var_6)))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)128)) > (((/* implicit */int) (short)-16382)))))));
            /* LoopSeq 2 */
            for (signed char i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                arr_33 [i_8] [i_8] [i_7] [i_0] &= ((/* implicit */unsigned char) arr_9 [i_8]);
                arr_34 [i_0] [i_7] [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                arr_35 [i_0] [i_8] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((max((var_2), (var_2))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -502109571)) || (((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_8] [i_0] [i_7] [i_8]))))))))) + (min((((/* implicit */unsigned int) arr_21 [i_0] [(short)2] [i_7] [i_7] [i_8] [(unsigned char)8])), (3670494336U)))));
            }
            for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
            {
                arr_40 [i_0] [i_9] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_27 [i_0] [i_7] [i_9])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : ((~(arr_18 [(_Bool)1])))))));
                var_26 |= ((/* implicit */long long int) var_5);
            }
        }
        /* LoopSeq 2 */
        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
        {
            arr_44 [(short)1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */unsigned long long int) arr_32 [i_0] [i_0] [i_10])) : (16256699254078183096ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            arr_45 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */int) (unsigned short)62645)) : (((/* implicit */int) ((signed char) (short)-1024)))));
        }
        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_0])))))));
            var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) var_16))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_46 [i_11]))))) : (((((/* implicit */_Bool) arr_19 [i_0] [i_11] [i_11] [i_0] [14U])) ? (arr_9 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32640))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)31217)) && (((/* implicit */_Bool) var_9)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_20 [13] [12U] [i_0] [(short)2] [9] [i_11])) : (arr_7 [i_0] [i_11] [i_0]))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_26 [7LL] [i_11]))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
        {
            arr_52 [(unsigned short)1] &= ((/* implicit */signed char) ((((long long int) arr_15 [i_0] [i_12])) | (var_15)));
            var_29 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_0])) ? ((+(16141041801984212992ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 24ULL))))))));
            var_30 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_0] [i_12] [i_0])) || (((/* implicit */_Bool) var_4)))))) == (((unsigned long long int) (short)-31239)));
        }
        for (short i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_14 = 2; i_14 < 17; i_14 += 3) 
            {
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-31217)) ? (((((/* implicit */_Bool) ((var_8) - (((/* implicit */long long int) -1326233714))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [(unsigned short)8] [i_0] [i_0] [i_13]))) : ((~(arr_27 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_13] [i_13] [i_14 - 1] [i_14 + 1] [i_0] [(unsigned char)7])))));
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned int i_16 = 0; i_16 < 18; i_16 += 2) 
                    {
                        {
                            arr_61 [i_15] [(short)12] [i_16] [i_15] &= ((/* implicit */long long int) ((((unsigned long long int) ((((/* implicit */_Bool) arr_55 [i_13] [i_14 - 2] [i_13] [i_16])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_58 [i_13] [(signed char)16] [i_13] [i_16] [i_14 - 1] [i_16]))))), ((((_Bool)1) ? (16141041801984212992ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63))))))))));
                            var_33 = ((/* implicit */int) min((max((((/* implicit */unsigned char) (signed char)8)), ((unsigned char)126))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 75306929)) && (((/* implicit */_Bool) ((4497054255131962295LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                            arr_62 [(signed char)12] [(unsigned char)8] [i_14] [i_15] [i_15] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_13] [(short)0] [i_15] [i_15] [i_16])), (arr_48 [i_14] [i_14 + 1] [i_14 - 2]))) | (min((((/* implicit */unsigned long long int) var_0)), (arr_48 [i_0] [2U] [i_14])))));
                            arr_63 [i_0] [i_15] [i_14 + 1] [i_15] [i_16] = ((/* implicit */short) arr_27 [i_0] [i_13] [i_13]);
                        }
                    } 
                } 
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_34 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 24ULL)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)30720))));
                arr_67 [12U] = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */int) (signed char)116)) >> (((((/* implicit */int) arr_50 [i_0] [(unsigned short)0] [5ULL])) - (24383)))))) % (-5098742005383982149LL)));
            }
            /* LoopNest 3 */
            for (signed char i_18 = 0; i_18 < 18; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 2) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) arr_72 [12]))));
                            arr_79 [i_20] [i_20] [i_18] [i_13] [i_13] [i_20] [i_0] = ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)-23985)));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) arr_77 [i_13]))));
            arr_80 [5ULL] [i_13] [i_13] = ((/* implicit */short) var_2);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 3) 
        {
            arr_84 [i_0] [i_21] &= ((/* implicit */short) ((5480674860725788557ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 2 */
            for (unsigned char i_22 = 0; i_22 < 18; i_22 += 1) 
            {
                var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((unsigned long long int) 295729091606764115LL)) : (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_31 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_17))))) * (((((/* implicit */int) var_2)) >> (((18446744073709551574ULL) - (18446744073709551551ULL))))))))));
                var_38 &= ((/* implicit */short) arr_74 [i_21] [i_21] [i_21] [(unsigned char)15]);
            }
            /* vectorizable */
            for (long long int i_23 = 4; i_23 < 17; i_23 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_24 = 1; i_24 < 17; i_24 += 2) 
                {
                    arr_95 [i_23] [i_21] [i_24] [i_24] |= ((/* implicit */long long int) (-(arr_42 [i_23 - 4] [i_24] [i_24])));
                    var_39 = ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_36 [i_0] [1ULL]))))) > (((((/* implicit */_Bool) arr_60 [13LL] [i_24] [5] [i_23] [i_0] [i_0])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2910)))))));
                    /* LoopSeq 1 */
                    for (long long int i_25 = 2; i_25 < 16; i_25 += 3) 
                    {
                        arr_99 [i_23] [i_21] [i_24] [i_25] &= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) > (var_8))))));
                        arr_100 [i_23] [i_24] [i_24] [i_23 + 1] [(signed char)14] [i_0] [i_23] &= ((/* implicit */long long int) arr_56 [(signed char)9] [i_23] [i_0] [i_0]);
                        arr_101 [i_0] [i_0] [i_0] [i_24] [i_0] [8LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)139)) >> (((((/* implicit */int) (unsigned char)128)) - (114)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (var_6))))));
                    }
                    arr_102 [i_0] [i_21] [i_21] [i_23] [i_24] [i_24] &= ((/* implicit */_Bool) var_16);
                }
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    arr_107 [9U] [i_23 - 2] [i_26] [i_26] = ((((/* implicit */_Bool) -4497054255131962281LL)) ? (var_12) : (((/* implicit */long long int) arr_27 [i_23] [i_23 + 1] [i_23 - 1])));
                    arr_108 [i_0] [i_21] [i_23] [i_26] = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((((/* implicit */int) (unsigned short)62647)) >> (((/* implicit */int) (signed char)28))))));
                }
                arr_109 [i_23] [(_Bool)1] [i_0] &= ((/* implicit */signed char) (+(((/* implicit */int) arr_38 [i_23] [i_23 - 1] [i_23 - 4]))));
                arr_110 [i_0] [i_23] |= ((/* implicit */unsigned char) (-(7061558040655468022ULL)));
            }
        }
    }
}
