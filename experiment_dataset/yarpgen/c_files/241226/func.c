/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241226
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [17LL] [i_1] [5U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_8)) : (arr_1 [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_8)) <= (arr_1 [i_1]))))) : (((arr_0 [i_0]) ? (arr_2 [i_0] [i_1]) : (0U)))));
                var_11 = ((/* implicit */unsigned int) min((var_11), (var_4)));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */short) max(((-(((/* implicit */int) arr_6 [i_3] [i_2] [i_1])))), ((+(((/* implicit */int) arr_7 [i_2] [i_2] [6LL]))))));
                            /* LoopSeq 2 */
                            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
                            {
                                var_13 -= ((/* implicit */short) (+(max((227210015U), (((/* implicit */unsigned int) (unsigned short)56485))))));
                                arr_14 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((+(arr_10 [i_4] [i_3] [i_2] [18U] [(short)20])))))) ? ((-(((/* implicit */int) ((unsigned char) (unsigned char)251))))) : (((/* implicit */int) ((((/* implicit */int) arr_9 [2U] [2U] [11U])) >= ((+(((/* implicit */int) var_6)))))))));
                                arr_15 [i_4] [i_3] [3U] [i_1] [i_0] [i_0] = ((/* implicit */short) arr_0 [i_4]);
                            }
                            /* vectorizable */
                            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
                            {
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)56485)))) : (((/* implicit */int) var_6))));
                                arr_19 [i_2] [i_1] = ((/* implicit */unsigned char) var_0);
                            }
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) min((((/* implicit */short) ((((/* implicit */int) (unsigned char)251)) >= (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_7))))))), ((short)-6596))))));
                            arr_20 [i_3] [i_3] [(_Bool)1] [i_1] [i_0] = ((/* implicit */short) min((min((((/* implicit */long long int) arr_3 [i_0] [i_0])), (((long long int) arr_12 [i_2] [i_2] [(short)21] [(short)17] [i_0] [i_0])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_6)))))));
                            var_16 = ((/* implicit */unsigned char) (!(arr_6 [i_1] [i_1] [i_1])));
                        }
                    } 
                } 
                var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6596))) : (arr_2 [i_1] [i_1])))) : ((~(2752971038641208239LL)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (short i_6 = 2; i_6 < 10; i_6 += 2) 
    {
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 4; i_8 < 9; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        {
                            arr_30 [i_6] [(_Bool)1] [(short)0] [i_6] [(short)0] &= ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_5 [(short)12] [i_6] [i_6])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_6]) ? (((/* implicit */int) arr_23 [(short)10] [i_7])) : (((/* implicit */int) (short)6578))))) ? ((~(arr_16 [i_9] [i_8] [i_8] [i_8] [i_7] [i_7] [i_6]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)194))) : (4294967286U)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)4625))))) ? (((((/* implicit */long long int) 0U)) * (arr_10 [i_9] [i_9] [i_9] [(_Bool)1] [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_18 [i_8] [i_8] [2U] [i_8] [i_8])) >= (((/* implicit */int) arr_24 [i_9] [i_8])))))))));
                            var_19 = ((/* implicit */unsigned int) arr_10 [i_9] [i_8] [(unsigned char)7] [(unsigned char)7] [(unsigned char)7]);
                            arr_31 [i_9] [i_9] = ((/* implicit */unsigned int) (unsigned short)56485);
                            arr_32 [i_9] [(short)6] [(short)4] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((6U), (var_0)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_10 = 3; i_10 < 10; i_10 += 2) 
                {
                    for (unsigned int i_11 = 2; i_11 < 10; i_11 += 4) 
                    {
                        {
                            arr_39 [i_6] [i_11] [(unsigned char)8] [(_Bool)1] [i_7] [i_6] = ((/* implicit */long long int) 0U);
                            arr_40 [i_11] [i_10] [i_7] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)7))));
                        }
                    } 
                } 
                arr_41 [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_6 - 2] [i_6 + 1] [i_6 + 1])) ? (((/* implicit */int) arr_7 [i_6 - 1] [i_6 - 1] [i_6 + 1])) : (((/* implicit */int) arr_7 [i_6 + 1] [i_6 - 2] [i_6 + 1])))) % (((/* implicit */int) arr_7 [i_6 + 1] [i_6 - 1] [i_6 - 1]))));
                /* LoopSeq 3 */
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    arr_44 [i_12] [i_7] [i_6] = ((/* implicit */_Bool) var_10);
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        for (unsigned short i_14 = 1; i_14 < 7; i_14 += 2) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)9023)) || (((/* implicit */_Bool) (short)20957))))), (4294967286U))), ((~(4294967286U)))));
                                arr_51 [i_14] [i_13] [i_12] [i_7] [i_6] = ((/* implicit */unsigned char) ((unsigned short) (+(3678298843U))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */long long int) 0U)) == (2752971038641208239LL))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) (short)-1681);
                    var_23 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)56512)) >= (((/* implicit */int) ((unsigned short) arr_49 [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 1])))));
                    var_24 = ((/* implicit */unsigned char) arr_42 [(short)1] [(short)4] [i_6]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_16 = 1; i_16 < 7; i_16 += 2) 
                    {
                        arr_56 [i_6] [i_15] [(unsigned char)1] [(unsigned char)5] [i_6 - 1] = ((/* implicit */short) var_2);
                        arr_57 [i_7] [i_15] [(short)5] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6U)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) ((arr_34 [i_16] [10U]) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))))));
                        var_25 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)151))))));
                        var_26 = ((unsigned int) (unsigned short)56506);
                        /* LoopSeq 3 */
                        for (unsigned char i_17 = 0; i_17 < 11; i_17 += 2) 
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (unsigned char)151))) ? (((/* implicit */int) ((short) 3296947503U))) : ((+(((/* implicit */int) var_6))))));
                            arr_60 [i_6] [i_15] [i_15] [i_15] [(short)2] [(short)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5330978600523993011LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)154))) : (5464688658817138491LL)));
                        }
                        for (unsigned int i_18 = 0; i_18 < 11; i_18 += 2) 
                        {
                            var_28 = ((/* implicit */long long int) ((2265279521U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                            var_29 *= (!(((/* implicit */_Bool) arr_49 [i_18] [i_7] [i_15] [i_6 - 1] [i_18] [(unsigned char)9])));
                        }
                        for (unsigned short i_19 = 0; i_19 < 11; i_19 += 1) 
                        {
                            arr_66 [i_15] [(short)2] [i_6] = ((/* implicit */short) ((unsigned int) arr_37 [i_16 + 3] [i_16 + 1] [i_16 + 4] [i_16 - 1] [i_16 - 1] [i_16 + 2]));
                            var_30 = ((/* implicit */long long int) var_2);
                            arr_67 [i_19] [i_15] [i_19] [i_19] [i_19] = ((/* implicit */short) ((unsigned int) arr_3 [i_16 + 1] [i_16 + 3]));
                        }
                    }
                    var_31 = min((min((arr_64 [i_6 + 1] [(_Bool)1] [(unsigned short)10] [8U] [i_6]), (arr_64 [i_6 + 1] [i_6 - 2] [i_6] [i_6] [i_6]))), (((arr_64 [i_6 - 2] [i_6] [i_6] [i_6] [8U]) ^ (var_10))));
                }
                for (short i_20 = 1; i_20 < 10; i_20 += 2) 
                {
                    arr_70 [i_6] = ((/* implicit */short) (!(((((/* implicit */int) var_9)) <= ((+(((/* implicit */int) var_2))))))));
                    var_32 = ((/* implicit */short) (~(((/* implicit */int) ((var_4) >= (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)9050))))))))));
                    arr_71 [i_7] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)56512)) >> (((/* implicit */int) (_Bool)1))))) ? ((+(0U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)60910)))))))));
                    arr_72 [i_20] = ((short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)60898)) <= (((/* implicit */int) (unsigned char)110)))))) >= (3241864172U)));
                }
            }
        } 
    } 
}
