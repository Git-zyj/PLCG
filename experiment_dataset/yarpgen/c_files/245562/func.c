/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245562
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        arr_2 [i_0 + 2] [i_0 + 2] |= ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) != (3329912627U))), ((!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2]))))));
        arr_3 [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))) > (18271243565164038850ULL)));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) var_12);
        var_14 = ((/* implicit */int) (~((~(((((/* implicit */_Bool) var_5)) ? (1272125430U) : (4294967294U)))))));
    }
    for (short i_2 = 3; i_2 < 19; i_2 += 3) 
    {
        arr_11 [i_2 - 1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 1])) != ((+(((/* implicit */int) (unsigned char)39)))))) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 - 2])))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (int i_5 = 1; i_5 < 19; i_5 += 3) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            arr_22 [i_6] [i_5 - 1] [i_5] [i_4] [i_5] [i_3] [i_2 - 3] = ((/* implicit */unsigned char) ((short) 4294967271U));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((((/* implicit */unsigned long long int) ((2948446232U) / (((/* implicit */unsigned int) arr_21 [i_2 - 3] [i_5 - 1] [i_5 - 1]))))) % (min((((unsigned long long int) (signed char)14)), (((var_12) % (((/* implicit */unsigned long long int) arr_5 [i_3]))))))))));
                            arr_23 [i_5] = ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0)));
                            var_16 -= ((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned int) (unsigned char)236)), (2194422873U))));
                        }
                        for (int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            arr_27 [i_7] [i_5 - 1] [i_5] [i_3] [i_2 - 1] = ((((/* implicit */_Bool) arr_21 [i_2 - 3] [i_5 + 1] [i_7])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967271U)) ? (((/* implicit */int) arr_17 [i_7] [i_5 - 1] [i_5] [i_3] [i_2 - 1])) : (((/* implicit */int) arr_4 [i_2 + 1]))))));
                            arr_28 [i_2 - 1] [i_5] [i_4] [i_5 + 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967271U)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_5]))))) : (((((((/* implicit */_Bool) -22)) ? (0ULL) : (18446744073709551600ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)35)))))));
                            var_17 &= ((/* implicit */unsigned short) max(((+(((/* implicit */int) ((unsigned char) arr_25 [i_7]))))), (((/* implicit */int) arr_4 [i_5 - 1]))));
                        }
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            arr_31 [i_2 - 3] [i_3] [i_4] [i_5 - 1] [i_5 + 1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((3590811453U) % (((/* implicit */unsigned int) 1632090861))))) ? (((/* implicit */int) ((unsigned short) arr_16 [i_8] [i_5 - 1] [i_4] [i_2 - 2]))) : (((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_2 - 3] [i_2 - 2] [i_2 + 1])) ? (((/* implicit */int) arr_18 [i_5 - 1] [i_2 + 1] [i_2 - 2] [i_2 + 1])) : (var_5)))));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-121)) ? (((((/* implicit */_Bool) arr_30 [i_5] [i_5 + 1] [i_4] [i_3] [i_5])) ? (-1797875786) : (((/* implicit */int) arr_24 [i_8] [i_5 - 1] [i_4] [i_3] [i_2 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_8] [i_5] [i_4] [i_3] [i_5] [i_2 + 1])))))))) ? ((~(((((/* implicit */_Bool) arr_20 [i_5] [i_2 - 1] [i_3] [i_4] [i_4] [i_5 + 1] [i_8])) ? (((/* implicit */unsigned long long int) 1879048192U)) : (arr_29 [i_8] [i_5] [i_4] [i_4] [i_5] [i_2 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
                        }
                        for (short i_9 = 1; i_9 < 19; i_9 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_12 [i_9 - 1] [i_5 - 1] [i_2 - 2]), (((/* implicit */unsigned int) var_11))))) ? (((((/* implicit */int) (!((_Bool)1)))) * (((/* implicit */int) (!(((/* implicit */_Bool) -1))))))) : (((/* implicit */int) arr_13 [i_9 - 1] [i_5 + 1] [i_4])))))));
                            arr_34 [i_2 - 2] [i_5] [i_5 - 1] [i_9 + 1] = ((/* implicit */short) (~(((/* implicit */int) var_10))));
                            var_20 = (short)-1612;
                            arr_35 [i_5] [i_5 + 1] [i_5] = ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) 2948446232U))));
                        }
                        var_21 = ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) (unsigned char)128)) ? (0) : (((/* implicit */int) (short)-20))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 12; i_10 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_11 = 2; i_11 < 12; i_11 += 1) 
        {
            var_22 &= ((/* implicit */signed char) arr_13 [i_11 - 1] [i_10 - 1] [i_10 - 1]);
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                for (unsigned int i_13 = 0; i_13 < 13; i_13 += 4) 
                {
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(((((/* implicit */_Bool) (short)-577)) ? (9223372036854251520LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
                        arr_45 [i_10 + 1] [i_10 + 1] [i_10] [i_12] [i_13] [i_13] |= ((/* implicit */unsigned char) ((short) arr_6 [i_10 - 1]));
                        var_24 -= ((/* implicit */unsigned short) ((((/* implicit */int) (!(var_6)))) % ((+(1145398513)))));
                    }
                } 
            } 
        }
        var_25 = ((/* implicit */signed char) 175500508545512766ULL);
        var_26 *= ((/* implicit */unsigned short) var_10);
    }
    var_27 = var_0;
}
