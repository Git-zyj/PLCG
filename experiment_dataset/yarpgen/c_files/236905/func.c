/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236905
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
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((1099511627775ULL) | (18446742974197923840ULL))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 1) 
                    {
                        var_14 = ((/* implicit */long long int) min((var_14), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12035))) | (18446742974197923841ULL)))) ? (((var_2) | (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >> (((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_1]))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        for (short i_5 = 1; i_5 < 22; i_5 += 3) 
                        {
                            {
                                var_16 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)63))));
                                arr_16 [i_5 + 1] [0] [i_2] [18ULL] [i_2] [i_1] [i_0] = ((/* implicit */signed char) var_10);
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_1] [i_2] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((((/* implicit */int) arr_11 [i_2] [i_1 + 2] [i_1] [i_0] [i_0] [i_0])) >> (((((/* implicit */int) arr_13 [i_2] [i_1 + 1] [i_2] [i_0] [i_1])) - (6643))))));
                }
                for (short i_6 = 3; i_6 < 20; i_6 += 2) 
                {
                    var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((((/* implicit */_Bool) 3104348315281526957LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))));
                    arr_21 [i_1] [i_6] [i_1] [i_1 + 2] = ((/* implicit */unsigned short) -3104348315281526950LL);
                }
                for (int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_0] [(unsigned short)23] [i_0] [(unsigned short)23] [(unsigned short)23] = ((/* implicit */unsigned int) (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_9))))) % ((((!(var_4))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11465942113365318833ULL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_8] [i_1 + 1] [15])))))) : (((((/* implicit */_Bool) (short)-65)) ? (18446742974197923858ULL) : (var_0)))))));
                                var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31953)) | (((/* implicit */int) (signed char)6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_7 [i_1 + 2] [i_1 + 1])), (arr_6 [i_7] [10] [i_7]))))) : (min((((/* implicit */unsigned long long int) max((-3104348315281526947LL), (var_2)))), (var_12))));
                                var_19 = var_11;
                            }
                        } 
                    } 
                    var_20 = ((int) 794050587);
                    arr_29 [i_0] [9ULL] [9ULL] [i_0] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_1))))));
                    /* LoopSeq 3 */
                    for (long long int i_10 = 2; i_10 < 20; i_10 += 2) 
                    {
                        arr_32 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) (unsigned short)3072));
                        arr_33 [i_10] [i_7] [i_0] [i_0] = ((var_9) == (((((((/* implicit */unsigned long long int) var_2)) | (arr_22 [(_Bool)1] [i_1] [8] [i_1]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_7]))) < (arr_14 [i_0] [(unsigned short)10] [i_10]))))))));
                    }
                    for (int i_11 = 2; i_11 < 21; i_11 += 2) 
                    {
                        arr_37 [i_0] [i_0] [i_7] [i_11] = ((min((9223372036854775807LL), (((/* implicit */long long int) arr_35 [i_11] [i_11] [i_11 + 1] [2U] [(short)3] [i_11 - 2])))) == (((/* implicit */long long int) arr_35 [i_11] [i_11] [i_11 + 1] [i_11] [(_Bool)1] [i_11 - 1])));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_20 [i_0] [i_1] [i_7])))), (((/* implicit */int) ((unsigned short) (unsigned char)198)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)68)) && (((/* implicit */_Bool) ((((/* implicit */int) (short)-63)) | (((/* implicit */int) (unsigned char)56)))))))) : (min(((-(((/* implicit */int) arr_6 [i_1] [i_1 - 1] [i_1])))), ((+(((/* implicit */int) arr_13 [i_1] [i_0] [i_0] [i_1] [i_0]))))))));
                    }
                    for (short i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        arr_40 [i_12] [(short)8] [i_12] = ((/* implicit */unsigned short) (short)63);
                        var_22 ^= ((/* implicit */short) ((((_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (144115179485921280ULL) : (((/* implicit */unsigned long long int) var_10))))) ? (var_9) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) max(((-(-3104348315281526984LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [(_Bool)1] [8ULL] [i_7] [i_12] [i_12])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0] [19U]))))))))));
                        arr_41 [i_12] [5ULL] [i_7] [i_7] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_12 [i_1] [4] [i_1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) ((6980801960344232786ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_1])) << (((((/* implicit */int) var_8)) - (204)))))) >= (((((/* implicit */_Bool) -1959230728)) ? (arr_5 [i_0]) : (var_3))))))) : ((+(((var_12) + (0ULL)))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (~(arr_23 [i_1 + 2])))) : (((unsigned long long int) 4294967291U))))))));
                            arr_46 [i_1 + 1] [15ULL] [i_12] [i_12] [i_12] [i_1 + 1] [(unsigned short)11] = ((/* implicit */unsigned int) (+((-2147483647 - 1))));
                            var_25 = ((((/* implicit */_Bool) (~(((2147467264) | (((/* implicit */int) (_Bool)1))))))) ? (2147467253) : (((((/* implicit */_Bool) arr_26 [i_1] [i_7] [i_7] [10ULL] [i_1 - 1] [i_0] [i_7])) ? (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) arr_18 [i_12] [i_12] [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [16ULL] [i_1] [i_7] [i_0]))) < (var_0)))))));
                            var_26 = ((/* implicit */signed char) (~(-2147467279)));
                        }
                        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 2) /* same iter space */
                        {
                            var_27 ^= ((/* implicit */unsigned short) ((short) ((arr_30 [10U] [i_1 + 1]) + (((/* implicit */unsigned long long int) arr_38 [i_1])))));
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((min((6916159565051594146ULL), (((/* implicit */unsigned long long int) (unsigned short)62835)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_1] [i_7] [i_14]))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (2140866794) : (((/* implicit */int) (unsigned char)139))));
                            arr_53 [(_Bool)1] [i_12] [i_7] [i_12] [i_0] = ((/* implicit */signed char) (~(arr_12 [i_7] [i_1 + 2] [i_1 + 2] [i_7])));
                        }
                        for (unsigned short i_16 = 2; i_16 < 22; i_16 += 3) 
                        {
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_34 [i_0] [i_1] [i_7] [i_1] [i_16] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) | (((/* implicit */int) var_11))))) ? (arr_5 [i_12]) : (((/* implicit */unsigned long long int) 2147467291))));
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_12 [i_12] [i_1] [i_7] [i_16])))) ? (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_12)) ? (arr_52 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [2ULL] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_5)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1])))))) ? (((/* implicit */int) ((signed char) -2010366618))) : (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */int) var_4))))))))))));
                        }
                    }
                    arr_57 [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_14 [i_7] [i_1 + 2] [i_7])) ? (arr_49 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 + 2]) : (arr_49 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1 + 2] [i_1 + 2]))), (max((((/* implicit */unsigned long long int) var_7)), (arr_49 [i_1 + 1] [i_1 - 2] [i_1 - 1] [i_1] [i_1 + 2])))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 2; i_18 < 21; i_18 += 2) 
                    {
                        for (unsigned long long int i_19 = 2; i_19 < 22; i_19 += 3) 
                        {
                            {
                                arr_67 [i_19] [11] [i_19] [i_19] [i_0] [i_0] = ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-63))) : (494286844U));
                                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((signed char) var_0)))));
                                var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) 593433721019562663ULL)) ? (((max((((/* implicit */unsigned long long int) (unsigned short)1824)), (576460752303423487ULL))) ^ (((/* implicit */unsigned long long int) min((arr_35 [i_0] [i_1] [i_1] [i_18] [i_19 + 1] [i_19]), (((/* implicit */unsigned int) var_6))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)31)))))));
                            }
                        } 
                    } 
                    arr_68 [i_17] = ((/* implicit */signed char) ((((((((/* implicit */int) arr_18 [i_1] [i_1] [i_17])) >= (((/* implicit */int) (unsigned char)159)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [(signed char)8] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_61 [21LL] [17ULL] [i_1 - 2] [21LL] [21LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_3))))) >= (((/* implicit */unsigned long long int) ((((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1 + 1]))) : (arr_38 [i_1]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 6074568090248901832ULL)))))))));
                    var_34 = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_69 [i_17] [14ULL] = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (11757347932506215358ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [8U] [i_1] [11LL] [i_17]))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) min(((short)32764), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_59 [(_Bool)1] [i_1] [(_Bool)1])) ? (arr_60 [19ULL] [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (arr_30 [(unsigned short)15] [i_0])))))));
                }
                var_35 = ((/* implicit */unsigned int) ((unsigned long long int) 17853310352689988947ULL));
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 24; i_20 += 4) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 2) 
                    {
                        {
                            arr_74 [i_0] [i_0] &= ((/* implicit */short) min((arr_71 [i_1 - 1] [i_1 - 2] [i_1 + 2]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))));
                            var_36 ^= var_3;
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)7])))) ? (((((/* implicit */_Bool) arr_25 [9LL] [i_0] [9LL] [9LL] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_1 - 1] [i_1 - 2] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_54 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_1])))))))) ? (((/* implicit */int) arr_24 [i_0] [i_0])) : (((/* implicit */int) ((unsigned short) var_11)))));
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */unsigned long long int) (-(var_10)))) : ((((_Bool)1) ? (593433721019562648ULL) : (((/* implicit */unsigned long long int) 1622998562)))))) >= (((((9084422026376305299ULL) != (((/* implicit */unsigned long long int) 1023U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10)))) : (((((/* implicit */_Bool) 593433721019562659ULL)) ? (4294967168ULL) : (593433721019562659ULL)))))));
}
