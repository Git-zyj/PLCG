/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215690
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
    var_17 = var_6;
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_12))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_19 = 18014398492704768LL;
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            var_20 = var_11;
            var_21 &= ((/* implicit */unsigned int) (-(var_8)));
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            var_22 |= ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 1073709056U)) ? (((/* implicit */int) arr_3 [12] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) arr_3 [(_Bool)1] [i_2 - 1] [i_2 + 1]))))), (((((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) arr_5 [8U]))))) ? (((arr_4 [i_0] [10ULL]) | (9223372036854775807LL))) : (((/* implicit */long long int) 0))))));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) (-(18446744073709551607ULL))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_3 [i_0] [i_2] [i_2]))))), (arr_7 [i_2 - 1] [i_0]))) : (((/* implicit */long long int) (+(((int) 29ULL)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [6LL])) ? (((/* implicit */unsigned long long int) arr_5 [0ULL])) : (arr_2 [(signed char)12] [(signed char)12]))))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (var_7)))) ? (((((/* implicit */unsigned long long int) arr_4 [i_2] [(_Bool)1])) * (18446744073709551607ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
            }
        }
        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(arr_5 [i_0])))), ((-(var_4)))));
            var_27 &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_4])) ? (((/* implicit */unsigned long long int) arr_1 [i_4])) : (max((((/* implicit */unsigned long long int) arr_1 [i_4])), (arr_10 [i_4] [i_4]))))) * (((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) arr_9 [i_4] [(short)12] [i_4])), (arr_12 [i_4] [i_4]))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_28 += ((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) var_4)));
            var_29 = ((/* implicit */int) max((((((unsigned long long int) (_Bool)0)) >> (((/* implicit */int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((arr_7 [i_0] [i_5]) << (((arr_7 [i_0] [i_5]) - (6318590210708097178LL))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                var_30 = ((/* implicit */_Bool) (~(arr_16 [i_0])));
                var_31 |= ((var_1) ? (arr_12 [i_6] [10LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6] [i_5] [12]))));
                var_32 = ((/* implicit */_Bool) ((arr_10 [i_0] [i_0]) / (arr_10 [i_0] [i_0])));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_33 = ((/* implicit */signed char) var_5);
                var_34 &= ((/* implicit */unsigned int) arr_0 [i_5]);
            }
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_4 [i_0] [i_5]) + (9223372036854775807LL))) >> (((arr_4 [(_Bool)1] [i_5]) + (8829647939331706989LL)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                var_36 |= ((/* implicit */int) var_13);
                var_37 = ((/* implicit */int) min((max((max((((/* implicit */long long int) arr_23 [i_0] [i_5] [i_0])), (699904600097149879LL))), (max((((/* implicit */long long int) var_1)), (0LL))))), (((arr_13 [i_8]) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((((_Bool)1) ? (arr_22 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
            }
        }
    }
    var_38 = ((/* implicit */int) ((((((/* implicit */_Bool) (((_Bool)1) ? (var_0) : (((/* implicit */long long int) 508698247))))) && (((/* implicit */_Bool) var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))), (min((((/* implicit */long long int) (signed char)-92)), (var_8)))))));
}
