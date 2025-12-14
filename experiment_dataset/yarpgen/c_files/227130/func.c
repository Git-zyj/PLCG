/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227130
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_2 + 4] [i_3] = ((/* implicit */unsigned short) ((0ULL) + (((((/* implicit */_Bool) arr_2 [i_3] [i_1 + 1])) ? (var_16) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_3 [i_2 - 1] [i_2]))))))));
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                            {
                                var_20 = ((/* implicit */int) var_5);
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */_Bool) ((((((var_5) << (((((/* implicit */int) arr_13 [i_3] [i_1] [i_0])) - (24265))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))))) - (arr_4 [i_2 - 2] [i_2 + 1] [i_2 + 4])));
                            }
                            for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
                            {
                                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_1])) << (((arr_1 [i_3]) ? (((/* implicit */int) arr_8 [i_0] [i_2] [i_3])) : (((/* implicit */int) var_11))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_5 [i_0] [i_1 - 1]), (((/* implicit */short) arr_1 [i_1])))))) : (841044285132440749ULL)));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0] [i_0])) >= (((/* implicit */int) arr_7 [i_1] [i_3] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))) : (6ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_13)) - (((long long int) var_17))))) : (var_5)));
                            }
                            for (unsigned short i_6 = 1; i_6 < 17; i_6 += 4) 
                            {
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((var_1) / (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1 + 1] [i_2]))) : (((((/* implicit */_Bool) 2949343610475444229ULL)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_16 [i_0] [i_1] [i_6 + 1]), (((/* implicit */signed char) arr_17 [i_0] [i_0] [i_2 - 1] [i_3] [i_6 + 1])))))) : (((long long int) arr_15 [(_Bool)1] [i_1] [i_2 + 3] [i_3] [i_6]))))));
                                var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_4 [i_6 + 1] [i_1 + 1] [i_2 + 3]))))));
                                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_0 [11U])) - (((/* implicit */int) arr_17 [i_0] [i_1 + 1] [2ULL] [8U] [2ULL])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((var_1) + (9223372036854775807LL))) << (((10ULL) - (10ULL)))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_10))))), (((long long int) var_13))))));
                            }
                        }
                    } 
                } 
                var_26 |= ((/* implicit */signed char) ((int) ((arr_15 [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 1]) - (arr_15 [i_1 + 1] [(signed char)16] [(_Bool)1] [i_1 + 1] [i_1 + 1]))));
                var_27 += ((/* implicit */unsigned int) ((short) ((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1] [i_0]))) : ((~(arr_15 [i_0] [i_0] [i_1] [i_1 + 1] [i_1 - 1]))))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 1; i_7 < 18; i_7 += 4) 
                {
                    var_28 = ((/* implicit */unsigned int) min((var_28), (((unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? ((((_Bool)1) ? (arr_21 [i_0] [i_1 - 1] [i_1] [i_7 - 1] [i_0]) : (var_10))) : (((/* implicit */int) ((_Bool) var_10))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_29 = ((((((/* implicit */_Bool) var_19)) ? (var_12) : (((/* implicit */unsigned long long int) 1974288396U)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                        var_30 += ((_Bool) var_16);
                    }
                    for (short i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_7 + 2] [i_7 + 2])) & (((/* implicit */int) var_0))))), (((long long int) 8262979613200915313ULL)))))));
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_32 |= ((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned long long int) ((225127784U) >> (((-14LL) + (30LL))))))));
                            var_33 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_1] [6LL] [6LL])) && (((/* implicit */_Bool) 268435454))));
                        }
                        /* vectorizable */
                        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (~(arr_36 [3ULL] [3ULL] [i_7 + 1] [i_7 + 1] [i_1 + 1]))))));
                            arr_38 [i_9] [i_9] [i_7] [i_7 + 2] [i_1] [i_0] = ((unsigned long long int) ((var_1) / (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                        }
                    }
                    for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 4) 
                    {
                        arr_41 [i_0] [i_12] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) -22LL));
                        var_36 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_7 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_7 + 2])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_7 + 1]))))), (((var_1) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_1] [i_1 - 1] [i_7 + 2] [(_Bool)0])))))));
                        /* LoopSeq 2 */
                        for (signed char i_13 = 0; i_13 < 20; i_13 += 3) 
                        {
                            var_37 = ((unsigned long long int) ((arr_32 [i_12 + 2] [i_12 + 2] [i_12 + 1] [i_12 + 1]) % (arr_32 [i_12 + 1] [i_12 + 1] [i_12 + 2] [i_12])));
                            var_38 = ((/* implicit */unsigned long long int) ((unsigned short) 2147483647));
                            var_39 += ((/* implicit */_Bool) arr_30 [i_0] [i_1 + 1] [i_7 + 1]);
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                        {
                            var_40 -= ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_44 [i_12] [i_1] [i_12] [i_12]) : (((/* implicit */unsigned long long int) var_8))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_11)) << (((arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]) + (1838258544979221029LL)))))) == (var_19))))) : (((((/* implicit */_Bool) ((int) arr_36 [i_0] [i_12] [(short)17] [i_12] [i_12]))) ? (var_13) : (((3880616714U) << (((3621021497U) - (3621021493U)))))))));
                            var_41 |= ((/* implicit */unsigned int) ((((_Bool) arr_17 [i_0] [i_12 - 1] [i_7] [i_1 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_1 - 1]) - (3880616736U)))) >= (var_16))))) : (((min((arr_23 [i_0] [i_1 - 1] [i_0] [i_12]), (var_15))) + (((/* implicit */unsigned long long int) ((var_19) - (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_7 + 2] [i_1] [i_0]))))))))));
                        }
                        var_42 &= ((/* implicit */unsigned int) ((unsigned long long int) ((long long int) arr_36 [i_1 - 1] [i_12 + 3] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                        var_43 = ((/* implicit */signed char) var_19);
                    }
                }
                var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))) : (arr_36 [i_0] [i_0] [i_0] [(short)11] [i_0])))) ? (((var_16) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_0] [i_0] [i_0] [i_1 + 1] [i_1 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 12; i_15 += 2) 
    {
        for (int i_16 = 0; i_16 < 12; i_16 += 4) 
        {
            {
                var_45 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 25LL)) ? (((/* implicit */int) (unsigned short)6297)) : (540349738)))))) ^ (min(((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_15] [i_15] [i_15]))) : (var_16))), (((/* implicit */unsigned long long int) arr_19 [i_15] [i_15] [i_15] [i_15] [i_15]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 3) 
                    {
                        for (short i_19 = 1; i_19 < 10; i_19 += 3) 
                        {
                            {
                                var_46 = ((/* implicit */unsigned long long int) ((((arr_12 [i_19 + 1]) ? (((/* implicit */int) arr_12 [i_19 - 1])) : (((/* implicit */int) arr_12 [i_19 - 1])))) > ((+(var_3)))));
                                var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_9)))))) ? (((/* implicit */unsigned long long int) 2320678923U)) : (((((/* implicit */_Bool) arr_22 [i_15] [i_15] [i_19 - 1] [i_19 - 1] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_15]))) : (arr_43 [i_19 - 1] [i_19 + 2] [i_19 - 1] [i_19 + 2] [i_19 - 1] [i_19 + 2])))));
                                var_48 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_16] [i_16] [i_17] [i_15] [i_19 - 1])) ? (var_7) : (var_15)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_0 [i_19])))))));
                                var_49 = ((/* implicit */signed char) var_10);
                            }
                        } 
                    } 
                    var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-(arr_3 [i_15] [i_16]))), (((/* implicit */unsigned int) arr_16 [i_15] [i_16] [i_17]))))) ? (arr_11 [i_15] [i_15] [i_15] [i_15]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_25 [i_17]) : (((/* implicit */int) arr_1 [16ULL]))))) ? (((/* implicit */int) ((var_9) == (((/* implicit */unsigned long long int) arr_37 [i_16]))))) : (((/* implicit */int) arr_35 [i_17] [i_17] [i_17] [i_15] [i_16]))))))))));
                    var_51 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (8231724384747557417LL)));
                }
                var_52 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 1786582482)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (max((((/* implicit */unsigned long long int) var_4)), (arr_4 [i_15] [i_15] [i_15]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_15] [i_15] [i_15] [i_15] [i_16])))))));
            }
        } 
    } 
}
