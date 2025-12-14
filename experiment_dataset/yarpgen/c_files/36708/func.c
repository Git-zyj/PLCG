/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36708
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
    for (signed char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */signed char) (!(((((/* implicit */_Bool) (unsigned char)224)) && (((/* implicit */_Bool) 4503823785212087088ULL))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [6] [i_4] = (((~(1901911379709953530LL))) | (((/* implicit */long long int) min((((/* implicit */unsigned int) 504)), (0U)))));
                                var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */unsigned long long int) arr_4 [i_4] [i_1] [i_2] [i_3])) : (0ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (arr_5 [i_0] [i_0] [i_0]))))))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) min((arr_1 [i_0 + 3] [i_4 + 1]), (arr_1 [i_0 + 1] [i_4 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)(-127 - 1)))))) : (min((9187343239835811840ULL), (18446744073709551601ULL)))))));
                                var_20 ^= 36ULL;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_21 *= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_16)), (arr_10 [i_0 - 1] [i_0 + 3] [i_0 + 3] [14LL] [i_0 + 1] [i_0 + 2] [14LL])))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (max((arr_11 [i_0]), (((/* implicit */long long int) (unsigned short)15596)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) > (((/* implicit */int) (unsigned char)201))))))))));
                                arr_19 [(unsigned short)5] [i_6] [i_2] [(unsigned short)5] [i_6] = ((/* implicit */unsigned short) 230703223);
                                arr_20 [i_6] [i_6] [i_5] = ((/* implicit */signed char) 0ULL);
                                arr_21 [i_0] [i_1] [i_0] [i_6] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_5 [(signed char)16] [14ULL] [3LL])), (arr_17 [i_0] [i_0] [i_0 + 1] [i_6] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_15 [i_0 - 1] [i_0 - 1] [i_2] [i_5]) != (31ULL))))) : (var_3))) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((unsigned short) var_8)), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [15ULL] [(unsigned char)13] [i_2] [i_0] [i_6] [i_6])) && (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        for (short i_8 = 1; i_8 < 17; i_8 += 2) 
                        {
                            {
                                var_22 |= ((/* implicit */_Bool) 12725666849023362233ULL);
                                arr_27 [i_7] [i_1] [i_1] [i_2] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((long long int) ((arr_18 [i_0] [i_0] [i_0 - 1]) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56))) + (var_10)))))));
                                arr_28 [i_8] [i_8] [i_7] [i_1] [0LL] [i_1] [i_1] = ((/* implicit */_Bool) 18446744073709551600ULL);
                                var_23 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_26 [3ULL] [i_1] [i_8] [i_7] [i_2] [i_7] [i_8])), (min((arr_10 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0 + 2]), (((/* implicit */unsigned int) (_Bool)1))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */long long int) (-2147483647 - 1))) < (arr_4 [12U] [i_1] [i_7] [i_7])))), (arr_0 [i_0 + 1] [i_0 + 3]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
    {
        for (long long int i_10 = 1; i_10 < 15; i_10 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    for (long long int i_12 = 2; i_12 < 14; i_12 += 2) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 1) 
                        {
                            {
                                arr_44 [i_12] [i_10] [i_12] [i_12] |= ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned short)25375)))), (((/* implicit */int) arr_38 [i_12 + 2] [i_10 + 2] [i_11] [12ULL] [i_10 + 2] [i_10 + 2]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_13)), (var_7)))) ? (arr_9 [i_9] [i_9] [i_10 + 1] [i_12 - 1] [i_13]) : (arr_14 [i_9] [i_9] [i_9] [i_9] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((arr_25 [i_9] [i_10] [i_11] [13LL] [13LL]) / (((/* implicit */int) var_0))))))));
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min(((_Bool)1), ((_Bool)0))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_14 = 1; i_14 < 16; i_14 += 1) 
                {
                    for (long long int i_15 = 0; i_15 < 18; i_15 += 4) 
                    {
                        for (int i_16 = 3; i_16 < 15; i_16 += 3) 
                        {
                            {
                                arr_52 [i_14] [i_14] [i_14] [i_14] [i_14] [(_Bool)1] [i_10] = ((/* implicit */unsigned long long int) (unsigned char)62);
                                arr_53 [i_9] [i_10] [i_9] [i_15] [i_9] = ((/* implicit */signed char) ((((min((var_3), (((/* implicit */unsigned long long int) (_Bool)1)))) != (((/* implicit */unsigned long long int) max((arr_42 [i_9] [i_9] [i_10] [i_14] [i_14 + 1] [i_15] [(unsigned char)3]), (arr_17 [i_9] [8ULL] [8ULL] [i_10] [i_16])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1471915524)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2305843009213693952LL))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) 0ULL))) < (((((/* implicit */_Bool) (unsigned short)33645)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_9] [i_16]))) : (var_10))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 4) 
                {
                    for (short i_18 = 1; i_18 < 17; i_18 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((_Bool)0) && (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (signed char)106)))))))), (((((/* implicit */_Bool) arr_35 [i_10 + 1] [i_10 + 1])) ? ((((_Bool)1) ? (arr_15 [i_9] [i_10] [i_17] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_9] [i_9] [i_9] [i_9] [i_17] [i_18] [i_18 + 1]))))) : (((arr_29 [i_18] [i_18]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                            arr_60 [(unsigned char)13] [i_10] [i_17] [i_18] [i_18 + 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_9] [i_9] [i_9] [i_9])) >> (max((min((-1815304365), (((/* implicit */int) arr_49 [i_9] [i_10 + 2] [i_10 + 2] [(short)2] [(unsigned short)14])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_10] [i_10] [i_17] [i_17])) || (((/* implicit */_Bool) arr_56 [i_9] [i_10 + 2] [i_10] [i_9])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
