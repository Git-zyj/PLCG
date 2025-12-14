/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25141
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
    var_15 = ((/* implicit */signed char) (((~(((((/* implicit */int) var_0)) >> (((-4824643626043316406LL) + (4824643626043316431LL))))))) | (((/* implicit */int) var_11))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) min((4294967294U), (((/* implicit */unsigned int) (unsigned char)160))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3423926043595625615LL)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : ((+(((/* implicit */int) arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((+(((/* implicit */int) (unsigned short)8890)))) : (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        var_17 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 16U)) ? (4489519648871396605LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))))) ? (((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1 + 1])))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 4; i_2 < 22; i_2 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) (unsigned short)960);
            var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) (((-(1081294808U))) != ((~(arr_5 [i_1] [i_1]))))))));
            var_20 = ((/* implicit */_Bool) var_8);
            var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_8 [(short)2] [2U]))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_13)));
        }
        for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 1) /* same iter space */
        {
            arr_13 [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-118))) % (min((8247721909054694911LL), (((/* implicit */long long int) (signed char)-41))))));
            var_22 = (~(max((((/* implicit */unsigned int) var_8)), (arr_12 [(_Bool)1] [i_1]))));
            var_23 = ((/* implicit */unsigned long long int) 2141924194U);
            /* LoopNest 2 */
            for (unsigned int i_4 = 1; i_4 < 23; i_4 += 1) 
            {
                for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    {
                        var_24 = (_Bool)1;
                        var_25 = ((/* implicit */unsigned int) arr_11 [i_3]);
                        var_26 &= min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_1 + 3]))))), (min((((/* implicit */unsigned int) arr_7 [i_1 + 2])), (arr_12 [i_1 + 1] [i_5]))));
                        arr_20 [i_3] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) var_8)), ((-(9223372036854775807LL)))));
                    }
                } 
            } 
            var_27 |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) 13U)) ? (arr_12 [i_1 + 1] [24U]) : (arr_12 [i_1 + 2] [(_Bool)1]))), (((/* implicit */unsigned int) (unsigned short)28559))));
        }
    }
    for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 4) 
    {
        var_28 = ((/* implicit */unsigned int) arr_10 [i_6 + 1] [i_6]);
        arr_25 [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 22U)) ? (((((/* implicit */_Bool) arr_19 [(unsigned short)0] [i_6 + 4] [(unsigned short)0] [24ULL] [i_6 + 4] [i_6 + 2])) ? (((/* implicit */unsigned long long int) -1)) : (((((/* implicit */_Bool) 2097151)) ? (10922940896019818435ULL) : (((/* implicit */unsigned long long int) arr_19 [i_6] [i_6] [i_6] [i_6 - 1] [2ULL] [2ULL])))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_15 [(short)4] [i_6] [i_6 + 3])), (arr_17 [i_6 + 3] [i_6] [i_6] [(unsigned char)22]))))));
    }
    var_29 = ((/* implicit */signed char) var_7);
}
