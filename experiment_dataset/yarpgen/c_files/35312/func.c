/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35312
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
    var_18 = ((/* implicit */_Bool) (unsigned short)10783);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 4; i_1 < 18; i_1 += 2) 
        {
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) arr_2 [i_1] [i_0])))))) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1 - 2] [i_1] [i_1])))));
            var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-45)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54753)) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (var_15)))))) ? (max((min((2554109296292632659ULL), (((/* implicit */unsigned long long int) -2739578266462961269LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2739578266462961289LL)) ? (((/* implicit */long long int) 1472628107)) : (var_14)))))) : (((/* implicit */unsigned long long int) -1472628107))));
            var_20 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */long long int) var_6))))) ? (((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */unsigned long long int) arr_3 [i_1 + 1])))) : (((unsigned long long int) var_11))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((var_10) << (((4223841499U) - (4223841497U)))))));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) ((arr_4 [i_0] [(signed char)19] [i_3]) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_2] [i_0])))));
                            var_23 = ((/* implicit */int) ((arr_7 [i_0]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)54753)) : (((/* implicit */int) var_16)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_6 = 1; i_6 < 20; i_6 += 3) 
            {
                arr_22 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_6 + 1])) ? (((/* implicit */int) arr_0 [i_6 + 1])) : (((/* implicit */int) arr_0 [i_6 + 1]))));
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) arr_17 [(_Bool)1] [i_6 + 1] [i_6 - 1] [i_6 - 1] [(_Bool)1])) && (((/* implicit */_Bool) arr_17 [i_6] [i_6 - 1] [i_6 - 1] [i_6 + 1] [10ULL])))))));
                arr_23 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_6] [i_6 + 1] [i_6]))));
                arr_24 [i_0] [i_2] [16ULL] [(short)15] = ((/* implicit */unsigned long long int) ((arr_10 [(unsigned short)13] [i_2] [i_6 + 1]) >= (arr_10 [14ULL] [i_2] [i_6 + 1])));
            }
            var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [8ULL])) ? (((unsigned int) -2355680998627513690LL)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14014)))));
        }
        var_26 = ((/* implicit */signed char) arr_11 [i_0] [i_0] [i_0] [i_0]);
        arr_25 [(unsigned char)14] [(unsigned char)14] = ((/* implicit */long long int) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (var_2))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        var_27 = ((_Bool) (!(((/* implicit */_Bool) 922789392))));
    }
    for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        arr_28 [i_7] = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */int) arr_27 [i_7])), (((((/* implicit */int) var_16)) >> (((var_12) - (2070918068U))))))));
        arr_29 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2739578266462961278LL)) ? (((/* implicit */int) arr_26 [i_7] [i_7])) : (((/* implicit */int) (short)32767))));
    }
}
