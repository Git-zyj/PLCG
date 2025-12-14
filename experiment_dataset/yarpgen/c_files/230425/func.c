/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230425
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [7LL] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) ((min((((/* implicit */long long int) var_8)), (-2546065889375868616LL))) >= (((/* implicit */long long int) var_4))))), (432843562)));
                                arr_14 [i_0] [i_0] [i_0] [i_4] = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (arr_2 [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) & (((((/* implicit */int) var_5)) | (var_12)))))) : (var_14));
                                arr_15 [i_2] [i_1] [i_2] [i_4] = ((/* implicit */long long int) min(((+(var_4))), (((/* implicit */unsigned int) (~(1588570617))))));
                            }
                        } 
                    } 
                    arr_16 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_6 [i_0] [i_0] [i_1] [i_0] [i_2])))) ? (min((1594227950), (((/* implicit */int) (short)-22052)))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2] [10]))));
                    arr_17 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) & (var_11)));
                    arr_18 [i_0] [i_0] [i_2] = ((/* implicit */short) var_15);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
    {
        arr_21 [i_5] = ((((/* implicit */_Bool) ((short) arr_19 [i_5] [i_5]))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_20 [12LL])) : (((/* implicit */int) arr_20 [i_5])))) : ((~(var_1))));
        arr_22 [(unsigned short)1] = ((/* implicit */long long int) ((var_14) > (min((((/* implicit */long long int) (!(((/* implicit */_Bool) -1523363896))))), (arr_19 [i_5] [i_5])))));
        arr_23 [i_5] = ((/* implicit */unsigned long long int) arr_20 [6ULL]);
        arr_24 [i_5] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 3863047490U)))) ? (((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) arr_20 [i_5])))) : (((/* implicit */int) max(((unsigned short)37807), (((/* implicit */unsigned short) arr_20 [i_5])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
    {
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (short)31))) ? (arr_19 [i_6] [i_6]) : (((/* implicit */long long int) var_4))));
        arr_29 [12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_6])) ? ((-(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (var_11)))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) /* same iter space */
    {
        arr_34 [i_7] [i_7] = ((/* implicit */long long int) arr_27 [i_7]);
        arr_35 [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)152))));
    }
    /* LoopSeq 4 */
    for (short i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        arr_38 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || ((!((!(var_6)))))));
        arr_39 [i_8] [i_8] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)33372)), (-1594227950)))) ? (var_14) : (((/* implicit */long long int) var_4))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_8])) && (((/* implicit */_Bool) 11136722837824209732ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23143))) : (var_4)))) : (((((/* implicit */_Bool) (short)8639)) ? (((/* implicit */long long int) -1651957698)) : (2546065889375868629LL))))))));
        arr_40 [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)27701)) >> (((1594227945) - (1594227936)))));
        arr_41 [i_8] = ((/* implicit */unsigned int) var_1);
        arr_42 [i_8] [i_8] = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */int) arr_37 [i_8] [i_8])) : (((/* implicit */int) var_6)))) | (((/* implicit */int) var_2))));
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 13; i_9 += 3) /* same iter space */
    {
        arr_45 [(signed char)12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27701))) : (-2546065889375868616LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_9]))) ^ (-7038185627570871246LL)))) : (((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [8] [8])))))));
        arr_46 [i_9] [6U] = arr_30 [i_9];
    }
    for (short i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
    {
        arr_50 [i_10] [10U] = ((/* implicit */_Bool) min(((~(var_17))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */int) arr_44 [i_10])))))));
        arr_51 [i_10] [i_10] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) arr_27 [i_10])) : (((/* implicit */int) arr_44 [i_10]))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_12) : (((/* implicit */int) var_9))))), (((var_16) ? (((/* implicit */long long int) var_12)) : (arr_19 [i_10] [i_10])))))));
        arr_52 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_25 [i_10])), (((unsigned int) -1594227946))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_9)))) : (((/* implicit */int) arr_32 [i_10])))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
    {
        arr_55 [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_32 [i_11])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_11]))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_5)))))))));
        arr_56 [i_11] = ((/* implicit */unsigned int) ((-3414679954567992653LL) & (((/* implicit */long long int) 1441783524U))));
        arr_57 [i_11] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (unsigned char)33)), (-1LL))) + (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    }
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-30693)), (-1)));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)230)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) min((var_0), (((/* implicit */short) (unsigned char)253)))))))));
}
