/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20655
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1 + 1] = ((/* implicit */signed char) (+((-(((/* implicit */int) ((short) var_6)))))));
                var_14 = ((/* implicit */short) (((~(((((/* implicit */_Bool) arr_0 [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-17)) ? (((/* implicit */int) arr_5 [(signed char)1])) : (((/* implicit */int) arr_2 [i_0])))) <= (((/* implicit */int) arr_2 [i_0]))))))));
            }
        } 
    } 
    var_15 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)37)), (2634315942U)))) ? (var_1) : (var_0)))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (int i_3 = 2; i_3 < 16; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 17; i_4 += 4) 
                {
                    for (signed char i_5 = 1; i_5 < 17; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((((arr_11 [i_3 - 2]) - (((/* implicit */int) arr_14 [i_5 - 1])))) + (((/* implicit */int) ((short) arr_14 [i_5 - 1])))));
                            arr_18 [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2] [i_3 + 2] [i_3])) && (((/* implicit */_Bool) arr_9 [i_4 + 1])))))));
                            arr_19 [i_2] [i_3 + 2] [i_3 + 2] [i_5] &= ((/* implicit */unsigned int) min(((+(arr_11 [i_3 - 2]))), (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (short)8192)) : (arr_11 [i_3 - 2])))));
                        }
                    } 
                } 
                var_17 += ((/* implicit */unsigned short) (~(((long long int) ((arr_12 [i_2] [11LL] [i_3]) > (((/* implicit */unsigned long long int) arr_10 [i_3] [i_3])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 1; i_6 < 9; i_6 += 2) 
    {
        for (unsigned long long int i_7 = 3; i_7 < 7; i_7 += 4) 
        {
            {
                arr_25 [i_6] [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) (unsigned char)8))))) ? (((/* implicit */int) arr_13 [(unsigned short)9])) : (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */int) (short)-22923)) : (((/* implicit */int) arr_20 [i_6])))))) / ((+(((/* implicit */int) ((unsigned char) arr_15 [9U])))))));
                /* LoopNest 2 */
                for (short i_8 = 3; i_8 < 7; i_8 += 2) 
                {
                    for (unsigned short i_9 = 1; i_9 < 8; i_9 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((arr_17 [i_6 + 1] [i_7 + 1] [i_8 + 2] [2ULL] [i_9]) - (arr_17 [7U] [i_7] [i_8 - 3] [i_7] [i_6 - 1]))) >> (((((((/* implicit */_Bool) arr_8 [i_6 + 1])) ? (arr_29 [i_9 - 1] [i_7 - 2] [i_7 - 2] [i_9]) : (arr_29 [i_9 + 1] [i_7] [i_7 + 1] [7]))) - (2644009381389616420ULL)))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((arr_23 [i_6 + 1] [i_8 - 2] [i_9]) ? ((+(((/* implicit */int) arr_23 [i_6 + 1] [i_7] [i_8 + 2])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)13)) < (((/* implicit */int) arr_23 [i_6 + 1] [i_7] [i_9 - 1]))))))))));
                            /* LoopSeq 3 */
                            for (int i_10 = 2; i_10 < 7; i_10 += 3) 
                            {
                                arr_32 [i_9] [i_6] [i_6] [i_6 - 1] = max((arr_4 [i_10 + 1]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_16 [i_6] [i_6] [2] [i_6] [i_6] [i_6]))))) ? (arr_11 [i_6 - 1]) : (((((/* implicit */int) arr_21 [i_6])) * (((/* implicit */int) arr_23 [(_Bool)1] [i_7] [i_7]))))))));
                                arr_33 [i_7] [i_6] [i_9] [i_10 - 2] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_20 [i_6 + 1]), (arr_20 [i_6 + 1])))) != (((/* implicit */int) arr_2 [i_6]))));
                            }
                            for (unsigned short i_11 = 3; i_11 < 6; i_11 += 2) 
                            {
                                var_20 = ((/* implicit */long long int) max((min((max((arr_1 [i_8]), (((/* implicit */int) arr_24 [1] [1LL])))), (((((/* implicit */int) arr_2 [i_6])) % (((/* implicit */int) arr_14 [i_11 - 3])))))), (((((/* implicit */_Bool) arr_16 [i_8 + 3] [i_8] [i_11 + 1] [(unsigned short)14] [i_11 + 2] [i_11])) ? (((/* implicit */int) arr_13 [i_7 + 3])) : (((/* implicit */int) arr_16 [i_8 + 2] [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11]))))));
                                arr_38 [i_6] [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)80))))) < (arr_15 [i_8 - 3])));
                            }
                            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                            {
                                arr_41 [i_6] [i_7] [i_8 - 1] [i_9] [i_12] [i_7] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (signed char)16))))) ? (max((((/* implicit */unsigned long long int) arr_13 [i_6])), (arr_31 [(signed char)9] [i_6] [i_8] [i_9] [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73)))))) ? (max((((arr_12 [i_6] [i_6 - 1] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)172))))), (((/* implicit */unsigned long long int) ((short) arr_30 [i_6] [i_7 + 1] [(_Bool)1] [i_9 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1660651376U))))))));
                                arr_42 [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)22636)) ? (((17592181850112ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6] [i_6 - 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [11ULL])))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            for (unsigned short i_15 = 2; i_15 < 11; i_15 += 2) 
            {
                {
                    var_21 += ((/* implicit */unsigned char) arr_12 [10LL] [i_14 - 1] [i_13]);
                    arr_50 [i_13] = max(((((~(arr_4 [i_15]))) - (((/* implicit */long long int) (~(782433423U)))))), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_13])) && (((/* implicit */_Bool) arr_2 [i_13])))))))));
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_14 - 1]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_13] [i_13] [14ULL] [i_13] [i_13] [7])) ? (arr_46 [i_13] [i_13] [i_13]) : (((/* implicit */int) (signed char)-80))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_13] [12ULL] [i_14 - 1] [i_13] [i_13] [i_15 - 1]))) : ((+(arr_43 [i_14 - 1] [i_14 - 1]))))) : (((/* implicit */long long int) (~(arr_10 [i_14 - 1] [i_15 + 3]))))));
                }
            } 
        } 
    } 
}
