/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33251
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
    var_13 -= ((/* implicit */unsigned short) ((min((((6025230792884301656ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))))), (6025230792884301656ULL))) * ((~((-(6025230792884301657ULL)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) ((max((max((((/* implicit */unsigned long long int) (unsigned short)4095)), (6025230792884301649ULL))), (((/* implicit */unsigned long long int) var_11)))) + (((/* implicit */unsigned long long int) ((max((var_6), (((/* implicit */unsigned int) arr_0 [i_0])))) & (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_15 += ((/* implicit */unsigned int) arr_0 [i_2]);
                            arr_8 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0])))), (((/* implicit */int) arr_4 [i_2 - 2] [i_1] [i_0 - 1]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned char) arr_3 [i_0 - 2] [i_0 - 1] [i_2 - 3])))))));
                            arr_9 [i_2] [i_2 + 1] [i_2] [i_2 - 2] [i_2] &= ((/* implicit */signed char) arr_6 [i_3] [i_3] [i_2] [i_1] [i_0 - 2] [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_16 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((arr_15 [i_0] [i_1] [i_4] [i_1]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0)))), (((/* implicit */int) arr_16 [(_Bool)1] [i_0 - 2] [i_4] [i_5] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_5 [i_0])));
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 266287972352LL)) ? (13374362730656018501ULL) : (((/* implicit */unsigned long long int) 6467677236161120001LL))));
                                arr_17 [i_6] [i_5] [i_5] [i_5] [(unsigned char)4] [(unsigned char)4] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6] [i_6]))) > (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_8)) : (min((((/* implicit */unsigned int) arr_10 [i_6] [i_4] [i_1] [i_0])), (var_6)))))));
                            }
                        } 
                    } 
                    var_18 ^= ((/* implicit */long long int) arr_13 [i_0] [i_4]);
                    arr_18 [i_0] [i_1] [i_4] = ((/* implicit */signed char) arr_12 [i_0 + 1] [(_Bool)1] [i_1] [i_4]);
                }
                for (long long int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
                    {
                        arr_23 [i_8] [i_7] = ((/* implicit */_Bool) var_1);
                        var_19 = ((/* implicit */unsigned long long int) arr_0 [i_0 - 1]);
                    }
                    for (unsigned short i_9 = 2; i_9 < 16; i_9 += 4) 
                    {
                        var_20 += ((/* implicit */_Bool) min((((((arr_19 [(_Bool)1] [i_7] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) * (arr_13 [i_1] [i_7]))), (((/* implicit */unsigned int) arr_12 [i_9 + 2] [i_0 - 2] [i_7] [i_9]))));
                        var_21 = var_9;
                        arr_27 [i_0] [i_1] [i_7] [i_0] = ((/* implicit */_Bool) arr_4 [16U] [i_7] [i_1]);
                    }
                    for (short i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        var_22 = ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)63))) : (266287972372LL));
                        /* LoopSeq 4 */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_23 ^= ((/* implicit */signed char) ((arr_12 [i_0] [i_0 + 1] [i_0 - 2] [i_11 - 1]) ? (((((/* implicit */int) arr_12 [i_0 - 2] [(_Bool)1] [i_10] [i_10])) * (((((/* implicit */_Bool) arr_28 [(_Bool)1] [i_1] [i_7] [i_10] [i_11])) ? (((/* implicit */int) arr_28 [i_0] [i_1] [i_7] [i_10] [(signed char)12])) : (((/* implicit */int) var_1)))))) : (max((((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1])), (var_8)))));
                            arr_33 [i_0] [i_1] [i_7] [i_11] [i_11 - 1] = ((/* implicit */int) (+((~(((((/* implicit */_Bool) arr_19 [(unsigned char)3] [(unsigned char)3] [i_11 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [16]))) : (arr_22 [i_0] [i_1] [i_7] [i_11])))))));
                        }
                        for (signed char i_12 = 2; i_12 < 15; i_12 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_32 [i_12 - 2] [i_1] [i_12 + 2] [i_0 - 2]), (arr_32 [i_7] [i_1] [i_12 + 2] [i_0 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)15))))));
                            arr_36 [i_0] [i_1] [i_1] [i_10] [i_10] [i_12] = ((/* implicit */long long int) (~(((/* implicit */int) min((var_4), (var_4))))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 18; i_13 += 3) 
                        {
                            arr_39 [i_13] [i_10] [i_7] [i_0] &= ((/* implicit */int) var_2);
                            arr_40 [i_1] [12ULL] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (arr_5 [i_1])));
                            var_25 = ((/* implicit */int) arr_15 [i_0] [i_0] [i_7] [i_1]);
                            var_26 -= (!(((/* implicit */_Bool) (unsigned char)15)));
                        }
                        for (unsigned char i_14 = 1; i_14 < 15; i_14 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned char) (((+(min((arr_5 [i_10]), (((/* implicit */unsigned int) arr_25 [i_14 + 1] [i_10] [i_7] [i_1] [i_0 + 1])))))) | (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_34 [i_1])), (var_12)))))));
                            var_28 = ((/* implicit */signed char) var_12);
                            var_29 = ((/* implicit */_Bool) var_6);
                            arr_43 [i_1] [i_1] [i_7] [i_0] [i_14 + 2] [i_14 + 2] = ((/* implicit */unsigned char) min((-266287972353LL), (((/* implicit */long long int) (unsigned short)30543))));
                        }
                        arr_44 [2LL] [i_1] [i_7] [i_10] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (short)-12783)), (463000351048186737ULL))), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_30 = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_34 [i_0]))))));
                    }
                    var_31 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(-9223372036854775807LL)))) ? (((((((/* implicit */_Bool) 5072381343053533116ULL)) ? (6467677236161120006LL) : (((/* implicit */long long int) 4177920)))) % (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    var_32 = ((/* implicit */unsigned long long int) (+(-1188443064)));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_15 = 0; i_15 < 16; i_15 += 3) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                arr_51 [i_15] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_10), (var_5))))))) ? (((((((/* implicit */_Bool) (signed char)9)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12109))))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)511))))))) : (arr_11 [i_15] [i_15] [i_16])));
                arr_52 [i_16] = ((/* implicit */_Bool) var_10);
            }
        } 
    } 
    var_33 = var_10;
}
