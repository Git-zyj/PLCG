/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245219
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((((/* implicit */_Bool) var_8)) ? (arr_5 [i_2] [12LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 1]))))) : (((/* implicit */unsigned long long int) var_2))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_2])) & (((/* implicit */int) arr_1 [i_2]))))), (arr_5 [i_1 + 1] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [i_2] [i_1 - 1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (arr_5 [8] [i_1 - 1]) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_7 [(short)14] [(_Bool)1])), (arr_10 [i_3] [i_3] [i_0] [i_0] [i_0])))) : (((arr_5 [i_0] [(_Bool)1]) << (((var_6) - (990371059)))))))));
                                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [(short)6] [(unsigned char)16] [i_2] [i_3] [i_0] [i_0])) / (var_6)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0])), (var_2)))) : (var_8))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)65094)), (arr_12 [i_4] [i_3] [12ULL] [(unsigned char)6]))))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1])) ? (arr_12 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]) : (arr_12 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1])) ? (arr_12 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) : (arr_12 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))) : (((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1])) ? (arr_12 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                    var_13 *= var_3;
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)431)) > (((/* implicit */int) (unsigned char)106))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 2; i_5 < 14; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 1) 
                            {
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((((/* implicit */_Bool) max((var_7), (((/* implicit */short) arr_15 [11ULL] [(unsigned char)4]))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [6ULL]))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5 - 2] [i_5] [i_5 - 2]))))) | (((((/* implicit */_Bool) 0U)) ? (0U) : (1387062121U))))))));
                                var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_0 [i_5]), (((((/* implicit */_Bool) arr_24 [i_5] [i_5] [1ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5]))) : (arr_14 [i_5 - 1] [i_6])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) arr_7 [i_5] [i_6])) + (((/* implicit */int) arr_9 [(unsigned short)0] [i_8] [15LL] [i_5] [i_6] [i_5]))))))) : (((((/* implicit */_Bool) arr_18 [i_9] [i_8])) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) arr_18 [i_7] [(unsigned char)14])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_26 [i_5] [i_5 - 1] [i_5 + 2] [i_5] [i_5 - 2] [i_5])) : (((/* implicit */int) max((arr_24 [i_5] [i_5] [i_5]), (arr_4 [(unsigned char)4] [i_6] [i_6] [i_6]))))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_20 [i_5] [i_8] [i_9])) ? (((/* implicit */int) arr_1 [i_8])) : (var_6))), (((/* implicit */int) arr_28 [i_5] [i_6] [5ULL] [i_8] [i_8] [15LL]))))) : (arr_2 [i_8] [(unsigned short)1])));
                            }
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((max(((short)6232), ((short)18095))), (((/* implicit */short) arr_26 [i_5] [(unsigned char)12] [(unsigned char)8] [i_5] [i_5 + 1] [i_5])))))) + (min((((/* implicit */unsigned int) arr_27 [i_5] [i_6] [i_5] [i_8] [5LL])), (max((arr_2 [i_5 - 2] [8U]), (((/* implicit */unsigned int) var_7))))))));
                        }
                    } 
                } 
                var_19 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)437)) ? (((/* implicit */int) (short)6232)) : (((/* implicit */int) (unsigned short)431))))), ((((_Bool)1) ? (4294967295U) : (2424472824U)))))) ? (((((/* implicit */_Bool) 4294967294U)) ? (4294967294U) : (((/* implicit */unsigned int) -1943347216)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (min((var_6), (((/* implicit */int) arr_28 [(short)13] [i_6] [i_5] [i_5] [15] [15])))) : (((/* implicit */int) max((arr_23 [i_5] [i_5] [i_5] [i_6]), (var_7))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((var_0) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_9)) : (var_5)))) ? (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) min((var_1), (var_6)))))) : (var_2))))));
}
