/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226333
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_15 += ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
                /* LoopNest 3 */
                for (signed char i_2 = 4; i_2 < 20; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */signed char) (~((~(463251787)))));
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) 463251773))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [7LL])))))))));
                                arr_14 [i_4] = ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */short) (signed char)64)), ((short)-1)))), (((((/* implicit */_Bool) -463251769)) ? (-463251794) : (((/* implicit */int) (short)-1))))))) ? (((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)117))))) & (min((((/* implicit */long long int) 1811409102U)), (arr_8 [i_0] [i_1]))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) 820308769U)) ? (((/* implicit */int) var_2)) : (463251768)))) + (arr_10 [i_1 - 2] [i_1 - 2] [i_2 - 4] [i_2 - 3]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) (+((+((+(10050609276928571331ULL)))))));
    var_20 = ((/* implicit */_Bool) max((var_20), ((!(var_12)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) ((arr_11 [i_5]) ? (((/* implicit */int) (unsigned char)139)) : (((/* implicit */int) arr_11 [i_5]))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                {
                    var_22 = ((/* implicit */short) ((((463251773) != (((/* implicit */int) (signed char)122)))) ? (((((/* implicit */_Bool) arr_8 [i_6] [i_6])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(unsigned short)3] [i_6] [i_7] [i_7] [i_7] [i_6] [i_5]))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_23 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 463251773))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (arr_10 [i_5] [i_5] [i_5 - 1] [i_5 - 1])));
                        var_24 = ((/* implicit */_Bool) (+((-(((/* implicit */int) (short)6))))));
                        arr_24 [i_8] [i_5] [i_7] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)189))));
                        var_25 = ((/* implicit */unsigned short) ((signed char) arr_5 [i_5 - 2] [i_8] [i_8]));
                    }
                    arr_25 [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) ((arr_9 [(_Bool)1] [i_5 + 1] [i_7] [(_Bool)1]) != (((/* implicit */long long int) -463251769))));
                    var_26 -= ((/* implicit */unsigned long long int) arr_11 [i_7]);
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) arr_8 [i_5] [(short)5]);
    }
    /* LoopNest 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 4; i_10 < 11; i_10 += 1) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_32 [i_9] [i_10] [i_10] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(2587442589906174897ULL))))));
                    var_28 = ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    } 
}
