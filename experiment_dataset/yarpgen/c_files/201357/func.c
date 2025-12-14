/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201357
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
    var_17 += var_0;
    var_18 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned int) var_3);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 3) 
                            {
                                var_20 |= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7695))) : (1018312699U))));
                                var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_7 [(short)17] [i_1] [i_0])))) ? (arr_15 [i_0] [i_0] [i_1] [i_0] [i_4]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_4))))));
                                arr_17 [i_0] [i_0] [i_1] [i_3] [i_3] [i_0] = ((/* implicit */int) ((long long int) ((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                            }
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) min((((3276654593U) >> (((-8103425598490836126LL) + (8103425598490836157LL))))), (((1018312700U) << (((9787736610722548625ULL) - (9787736610722548605ULL))))))))));
                        }
                    } 
                } 
                var_23 ^= ((/* implicit */unsigned int) var_7);
                arr_18 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((((/* implicit */_Bool) 3276654593U)) || (((/* implicit */_Bool) 18446744073709551599ULL))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            {
                var_24 ^= ((((/* implicit */_Bool) var_10)) ? ((-(arr_22 [i_6] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_20 [i_6])), (1018312698U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3276654611U)) ? (((/* implicit */int) (short)1020)) : (((/* implicit */int) (unsigned short)39611))))))))));
                var_25 = ((/* implicit */int) arr_19 [i_5]);
                var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)998)), ((unsigned short)49823))))) % (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_19 [i_6])))) : (((1018312678U) / (((/* implicit */unsigned int) arr_21 [i_6] [i_5]))))))));
                arr_23 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1018312703U)) ? (36028797018963712ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((arr_22 [i_5] [i_5]) != (var_2))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) arr_20 [i_5]))))) ? ((~(36028797018963712ULL))) : (min((((/* implicit */unsigned long long int) arr_20 [i_5])), (0ULL)))))));
                arr_24 [i_5] [i_5] = ((/* implicit */unsigned short) arr_22 [i_5] [i_5]);
            }
        } 
    } 
}
