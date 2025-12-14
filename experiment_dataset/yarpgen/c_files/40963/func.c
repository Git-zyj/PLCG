/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40963
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
    var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 3134891071357240422LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_15))))) : (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) var_5))))))) : (((/* implicit */int) var_8))));
    var_19 = ((/* implicit */signed char) 288230376151711743LL);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_2 [(short)9] [i_1] [i_0])) : (arr_4 [i_0] [i_1] [i_1])))) ? (min((77279144), (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))) : (((arr_4 [i_0] [i_0] [i_1]) ^ (arr_3 [i_0] [i_0] [i_0]))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) max((var_21), ((-(((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_0])) - (((((/* implicit */_Bool) -77279159)) ? (((/* implicit */unsigned int) arr_4 [i_0] [i_2] [i_0])) : (arr_6 [i_0])))))))));
                                var_22 += ((/* implicit */unsigned long long int) var_2);
                                arr_12 [7ULL] [i_1] [(unsigned char)3] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) -77279159)) ? (((/* implicit */int) ((-77279159) == (2147483647)))) : (((int) ((_Bool) var_5)))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_5 = 4; i_5 < 10; i_5 += 4) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((short) var_1));
                    var_24 = ((/* implicit */unsigned long long int) arr_14 [(short)7] [i_5 - 2] [i_5]);
                }
                for (short i_6 = 3; i_6 < 10; i_6 += 2) 
                {
                    arr_19 [i_6] = ((/* implicit */short) arr_18 [i_0] [i_1] [(short)7] [i_6]);
                    var_25 -= ((/* implicit */unsigned int) ((arr_6 [i_1]) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_6 - 1])))))) ? (((/* implicit */int) ((unsigned char) var_17))) : (var_14))))));
                    var_26 *= var_12;
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_6 - 3] [i_6] [i_6] [i_6 - 1] [i_0]))) ? ((-(arr_5 [i_0] [i_0] [i_1] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                }
                for (unsigned int i_7 = 1; i_7 < 11; i_7 += 4) 
                {
                    arr_22 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((short) (_Bool)0)))) > (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7] [i_7] [(short)3] [i_0]))) | (arr_6 [i_7]))) < (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 3; i_8 < 10; i_8 += 1) 
                    {
                        arr_27 [i_8] = ((/* implicit */_Bool) (+(max((((/* implicit */int) var_17)), ((+(((/* implicit */int) var_13))))))));
                        var_28 -= ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_24 [i_7 - 1] [i_7] [i_7 + 1] [i_7 + 1] [i_7 + 1])) > (((/* implicit */int) arr_24 [i_7 - 1] [i_7 - 1] [(short)1] [i_7] [i_7 + 1]))))));
                    }
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_7] [i_7] [i_7 - 1] [i_7 + 1])) / (((/* implicit */int) (short)32754))));
                        var_30 = (~(((/* implicit */int) arr_29 [i_0] [i_0])));
                        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (+((-2147483647 - 1)))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_35 [i_1] [i_0] [i_10] [i_10] [i_1] [i_0] = ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (arr_0 [i_0])))) && (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_5)))))) ? (arr_28 [i_0] [i_1] [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) (unsigned short)51073)))))))));
                        arr_36 [1ULL] [i_1] [i_10] [i_1] [i_1] [i_10] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_0] [i_1] [6LL] [i_10] [i_10] [i_0])) >= (((/* implicit */int) (unsigned short)7058)))))) & ((+(var_12))))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-30495)))))));
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) var_10))));
                    }
                }
                var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (((arr_5 [i_0] [i_1] [i_1] [i_1]) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0] [2U] [i_1]))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_11 = 4; i_11 < 16; i_11 += 4) 
    {
        for (long long int i_12 = 1; i_12 < 16; i_12 += 1) 
        {
            {
                var_34 -= ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                /* LoopNest 3 */
                for (int i_13 = 2; i_13 < 17; i_13 += 4) 
                {
                    for (long long int i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        for (long long int i_15 = 0; i_15 < 19; i_15 += 3) 
                        {
                            {
                                arr_51 [i_11 - 3] [(short)5] [i_12] [i_14] [i_15] [i_13] [i_13] = ((/* implicit */signed char) (-((+(5U)))));
                                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_11] [i_11 + 1] [i_11 - 4] [(short)17])) ? (arr_49 [i_11] [i_12] [i_14]) : (((max((((/* implicit */unsigned int) arr_41 [i_14] [(short)1] [i_12] [i_11])), (2065284860U))) - (((/* implicit */unsigned int) arr_39 [i_13] [i_12 + 1] [i_14]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 19; i_16 += 2) 
                {
                    for (signed char i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) ((arr_45 [i_11] [i_11] [i_16] [i_17]) - (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (signed char)-64)) || (((/* implicit */_Bool) (short)-3425)))))))))));
                            arr_60 [i_12] [i_12] [i_16] [i_17] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)32765)))) ? (((((((/* implicit */int) arr_59 [i_11 + 2] [i_11 + 2] [i_12] [i_17])) + (2147483647))) << (((var_1) - (9995415615798383800ULL))))) : ((~(((/* implicit */int) (_Bool)1))))));
                            var_37 = ((/* implicit */long long int) (+(((int) 2147483647))));
                        }
                    } 
                } 
            }
        } 
    } 
}
