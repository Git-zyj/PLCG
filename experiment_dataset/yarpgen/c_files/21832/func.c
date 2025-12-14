/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21832
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
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_18 = (((((-(((/* implicit */int) arr_4 [i_0 + 1] [i_0] [i_0 + 1])))) + (2147483647))) << ((((-(((unsigned long long int) var_17)))) - (18446744073709551467ULL))));
                var_19 *= ((/* implicit */unsigned long long int) arr_9 [i_2] [i_1] [i_0 - 2] [(short)10]);
                /* LoopSeq 1 */
                for (unsigned int i_3 = 2; i_3 < 23; i_3 += 1) 
                {
                    var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1] [i_3 - 1])) ? (arr_6 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) && (((/* implicit */_Bool) var_10)))))) : (arr_6 [i_2] [i_0])));
                    arr_12 [i_0] [i_1] [i_2] [i_3 + 2] [i_3] = var_0;
                    arr_13 [i_2] [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                }
            }
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59175))) : (0ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)29790))))) : (3821730743669192652ULL)));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (_Bool)1))));
            }
            arr_17 [i_0] = ((/* implicit */unsigned long long int) var_5);
            var_23 = max((((((/* implicit */_Bool) (unsigned short)60499)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_1] [i_0]))) : (arr_1 [i_0] [i_0 - 1]))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)5854)) ^ (((/* implicit */int) (unsigned char)99)))) <= (((/* implicit */int) (unsigned char)116))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */int) (short)22667)) : (((/* implicit */int) (short)-32759))))) ? (((((/* implicit */int) (signed char)91)) % (arr_11 [i_0] [i_0] [i_0] [i_5] [i_0]))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)-29790)) : (((/* implicit */int) (_Bool)1))))))))));
            arr_21 [i_5] = ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (arr_1 [i_0] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_18 [i_0 - 1] [i_0 - 1] [i_0]));
            var_25 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)59934)) < (((/* implicit */int) (unsigned short)20))))), ((-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5616))) : (0U)))))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned short) arr_15 [i_0] [i_5] [(_Bool)1] [i_7])), (var_5)))))) / (min((arr_20 [i_0 - 1] [i_6]), (var_13)))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((18446744073709551600ULL) / (((arr_24 [i_5] [i_6] [i_7]) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)77)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)992)) ? (arr_19 [i_5] [i_5]) : (((/* implicit */int) (signed char)-72))))) : (min((((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned short)17] [i_7] [i_7]))) : (var_2))), (((/* implicit */unsigned int) arr_10 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_6]))))));
                        arr_28 [i_5] = ((/* implicit */short) arr_25 [i_0 + 1]);
                        arr_29 [i_5] [(short)0] [(unsigned short)7] [i_7] [(unsigned char)16] = ((/* implicit */unsigned long long int) arr_4 [i_0 - 2] [i_6] [i_7]);
                    }
                } 
            } 
        }
        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0 + 1] [i_0])), (((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))))) ? ((~(arr_6 [i_0] [i_0 - 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_10 [i_0] [i_0 - 2] [i_0] [9ULL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 1] [i_0]))) : (((unsigned long long int) var_9))))));
        var_29 = ((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0])) / (((var_11) ? (min((17686481949596801699ULL), (((/* implicit */unsigned long long int) (unsigned short)38064)))) : (6465978471051185973ULL))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 2; i_8 < 24; i_8 += 4) /* same iter space */
    {
        arr_32 [(unsigned char)0] [i_8] = ((/* implicit */short) (~(821077235U)));
        arr_33 [i_8] [i_8 - 2] = ((/* implicit */unsigned short) arr_19 [i_8] [i_8]);
        arr_34 [i_8] = var_0;
    }
    for (unsigned long long int i_9 = 2; i_9 < 24; i_9 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned short) max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) (unsigned char)242))));
        arr_38 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 72057594037927935ULL)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_31 [i_9] [i_9 - 1]))))) : (((15757621303737533527ULL) >> (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) 0)) : (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [(_Bool)1] [i_9 - 2] [i_9 + 1] [i_9 - 2])) >> (((/* implicit */int) var_11))))), (var_2)))));
        var_31 = ((/* implicit */unsigned short) ((_Bool) (+(((((/* implicit */int) (signed char)112)) & (((/* implicit */int) var_12)))))));
    }
    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
    {
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (+(((min((var_13), (var_0))) / (((/* implicit */unsigned long long int) arr_11 [(unsigned short)17] [i_10] [i_10] [i_10] [(_Bool)1])))))))));
        var_33 = ((((((/* implicit */_Bool) arr_37 [i_10] [i_10])) && (((/* implicit */_Bool) 0ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5600)) ? (7611233734339669571ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    }
    var_34 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-84))));
}
