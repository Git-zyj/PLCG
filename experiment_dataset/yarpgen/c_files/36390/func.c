/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36390
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
    var_20 = ((/* implicit */_Bool) var_14);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        var_21 = ((/* implicit */signed char) max((arr_0 [i_0]), (((/* implicit */short) min(((_Bool)1), ((_Bool)1))))));
        var_22 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_9 [(short)0] [4ULL] [i_2] &= ((/* implicit */unsigned long long int) max((((((/* implicit */int) var_13)) ^ (arr_1 [i_1]))), (max((((/* implicit */int) arr_5 [i_2] [i_2])), (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1))))))));
            arr_10 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) (unsigned short)29450))))) || (((/* implicit */_Bool) (unsigned char)177)))) ? (min((var_4), (((/* implicit */long long int) arr_3 [i_1] [i_2])))) : (min((((/* implicit */long long int) (unsigned short)48754)), (((((/* implicit */long long int) ((/* implicit */int) (signed char)86))) - (var_14)))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            arr_14 [i_1] [i_3] [(unsigned short)8] = ((/* implicit */short) min(((((_Bool)1) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) (-(((((/* implicit */int) (short)-6538)) + (((/* implicit */int) var_19)))))))));
            arr_15 [i_1] [i_1] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)0)))))));
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_23 += ((/* implicit */unsigned char) var_18);
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_4])) + (arr_1 [i_4])))) ? (((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [9ULL] [i_3]))))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_6 [i_4] [i_3])), (arr_1 [i_4]))))));
                arr_19 [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_3])) > (((/* implicit */int) (unsigned char)18))))), (arr_17 [i_4] [i_3] [i_1])));
            }
            /* vectorizable */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
            {
                arr_24 [0ULL] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1])) + (((/* implicit */int) arr_8 [i_1]))));
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        {
                            arr_30 [i_3] [i_7] [i_7] |= var_18;
                            arr_31 [i_1] [(unsigned short)5] [i_5] [(unsigned short)5] [4] [1U] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_5]))) + (arr_7 [i_3] [i_5])));
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) ((arr_18 [i_1] [i_3] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_3] [i_5]))) : (14151952830992894454ULL)));
            }
            arr_32 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_3]))) < (max((6387016951082491261ULL), (((/* implicit */unsigned long long int) max(((short)-17355), ((short)24380))))))));
            arr_33 [i_3] = ((/* implicit */unsigned short) ((var_14) <= (((/* implicit */long long int) ((/* implicit */int) (short)-32317)))));
        }
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_7 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) << (((arr_22 [i_1] [i_1] [6ULL] [i_1]) - (1953898663139353552ULL)))))) ? (max((arr_4 [i_1]), (((/* implicit */int) (short)32317)))) : (min((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)100)))), (((((/* implicit */int) arr_3 [i_1] [i_1])) / (arr_12 [i_1] [i_1]))))))))));
        arr_34 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) var_2))))) ? (min((((/* implicit */long long int) arr_11 [i_1] [i_1] [i_1])), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_11 [i_1] [i_1] [i_1]))))));
    }
    for (int i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
    {
        arr_37 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_7 [i_8] [i_8])))) ? (arr_7 [i_8] [i_8]) : (((((/* implicit */_Bool) arr_7 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_7 [i_8] [i_8])))));
        /* LoopSeq 2 */
        for (short i_9 = 2; i_9 < 9; i_9 += 4) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_12))));
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) min((min((((/* implicit */unsigned int) (unsigned short)44580)), (((((/* implicit */_Bool) var_19)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))), (((/* implicit */unsigned int) (_Bool)1)))))));
            var_29 ^= ((/* implicit */unsigned int) arr_22 [i_8] [i_8] [i_9] [i_9]);
        }
        for (short i_10 = 2; i_10 < 9; i_10 += 4) /* same iter space */
        {
            arr_43 [i_8] [i_8] = ((/* implicit */unsigned short) (+(min((arr_38 [i_10 + 1]), (((/* implicit */unsigned long long int) var_4))))));
            var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) var_19))))), (max((var_18), (((/* implicit */unsigned long long int) var_17))))))) ? ((+((-2147483647 - 1)))) : (((/* implicit */int) arr_42 [i_10 - 1] [i_10 - 2]))));
        }
        arr_44 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((2210526769U), (((/* implicit */unsigned int) (unsigned short)55908))))) ? (((/* implicit */int) arr_21 [i_8] [i_8] [i_8] [i_8])) : (min((((/* implicit */int) arr_25 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])), (max((1841508725), (1122525221)))))));
    }
    for (signed char i_11 = 0; i_11 < 17; i_11 += 2) 
    {
        arr_47 [i_11] = ((/* implicit */unsigned short) var_8);
        var_31 ^= ((/* implicit */long long int) ((max((((1339586674) >> (((1413827450U) - (1413827434U))))), (((/* implicit */int) var_15)))) == (((/* implicit */int) arr_46 [15U]))));
    }
}
