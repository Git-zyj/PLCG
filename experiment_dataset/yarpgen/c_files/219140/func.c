/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219140
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
    var_17 *= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) 1822608766U)) && (((/* implicit */_Bool) max((((/* implicit */unsigned char) var_7)), ((unsigned char)115)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)23159))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) < (((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) 143977981U)) <= (arr_1 [i_2])))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) 826815667U);
                                arr_13 [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) 826815660U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (long long int i_6 = 2; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_1] [i_1] [i_2] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)5408))));
                                var_19 ^= ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                    var_20 *= ((/* implicit */unsigned short) ((arr_6 [i_0] [i_0] [i_0]) * (((((/* implicit */_Bool) 826815668U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)48994))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (long long int i_8 = 1; i_8 < 12; i_8 += 4) 
                        {
                            {
                                var_21 ^= ((/* implicit */unsigned short) var_3);
                                arr_26 [i_8] [i_0] = ((((/* implicit */_Bool) min((arr_7 [i_1] [i_2] [i_7]), (((/* implicit */unsigned int) ((int) 3468151652U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)74))) == (var_0))))) : (4150989314U));
                                var_22 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((3468151628U) >> (((((/* implicit */int) (signed char)-74)) + (101)))))) ? ((-(((/* implicit */int) (unsigned short)23185)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16)))))))));
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */int) ((arr_10 [i_8] [i_2] [i_8 + 3] [i_7] [i_8] [i_0]) == (arr_10 [i_0] [i_0] [i_8 + 1] [i_7] [i_8] [i_1])))) == (((((/* implicit */_Bool) arr_7 [i_0] [i_8 + 2] [i_2])) ? (((/* implicit */int) (signed char)74)) : (((/* implicit */int) var_7)))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_9 = 4; i_9 < 12; i_9 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 3) 
                    {
                        for (long long int i_11 = 0; i_11 < 15; i_11 += 2) 
                        {
                            {
                                arr_35 [i_11] [i_10] [i_9] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned short)1022);
                                var_24 = ((/* implicit */unsigned char) 2305843009213693952ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 1; i_13 < 11; i_13 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) arr_10 [i_13 - 1] [i_0] [i_9 - 1] [i_12] [i_13] [i_12]);
                                arr_41 [i_0] [i_9] [i_9] [i_12] [i_13] [i_13] = ((/* implicit */_Bool) (-(var_6)));
                                var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)0))));
                            }
                        } 
                    } 
                    arr_42 [i_0] [i_0] [i_1] [i_9] = ((/* implicit */signed char) ((1824231620U) / (arr_4 [i_1] [i_9 - 1])));
                    /* LoopNest 2 */
                    for (long long int i_14 = 3; i_14 < 12; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                        {
                            {
                                arr_49 [i_9] [i_1] [i_9] [i_14] [i_15] = 3468151641U;
                                arr_50 [i_0] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (unsigned char)63))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23185)))));
                                arr_51 [i_9] [i_14] [i_9] [i_9] [i_1] [i_1] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_15] [i_14] [i_9] [i_1] [i_0]))))) && (((/* implicit */_Bool) ((int) -4441593784423418443LL)))));
                                var_27 = ((/* implicit */long long int) (-((-(((/* implicit */int) var_11))))));
                                var_28 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_9 + 3] [i_9 - 1] [i_14 + 1] [i_15] [i_15] [i_15] [i_15]))));
                            }
                        } 
                    } 
                    arr_52 [i_0] [i_9] = ((/* implicit */unsigned short) (-(826815672U)));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_29 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_31 [i_0] [i_16] [i_0] [i_0])) + (arr_17 [i_0] [i_1] [i_16] [i_1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (signed char)55)))))) : (((unsigned int) (unsigned short)57569)))) == (((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]))), (((arr_19 [i_16] [i_16] [i_1] [i_16]) << (((((/* implicit */int) (unsigned char)113)) - (113))))))))));
                    var_30 = ((/* implicit */unsigned short) (((-(arr_10 [i_0] [i_1] [i_16] [i_16] [i_16] [i_16]))) << (((min((min((18446744073709551613ULL), (((/* implicit */unsigned long long int) 2787909731U)))), (((/* implicit */unsigned long long int) 3468151629U)))) - (2787909724ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 4) 
                    {
                        arr_57 [i_16] = ((/* implicit */int) (signed char)41);
                        arr_58 [i_0] [i_16] [i_16] [i_17] [i_17] = ((/* implicit */unsigned short) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)180))) : (17540040292731821194ULL))))), ((-(((/* implicit */int) ((short) arr_44 [i_0] [i_0] [i_1] [i_16] [i_17])))))));
                        var_31 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_15)), (((arr_29 [i_0] [i_1] [i_16] [i_17] [i_1] [i_17]) & (((/* implicit */unsigned long long int) arr_19 [i_17] [i_16] [i_1] [i_17]))))));
                    }
                }
                arr_59 [i_1] [i_0] = max((((unsigned short) ((((/* implicit */_Bool) 7257686495302490375ULL)) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5478)))))), (((/* implicit */unsigned short) ((unsigned char) ((unsigned char) (_Bool)0)))));
                var_32 |= ((/* implicit */unsigned char) ((arr_36 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]) << (((min((((/* implicit */unsigned long long int) min(((unsigned short)33025), ((unsigned short)5945)))), (((arr_21 [i_1] [i_0]) ? (17540040292731821177ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) - (5942ULL)))));
            }
        } 
    } 
    var_33 = ((/* implicit */signed char) ((long long int) var_9));
}
