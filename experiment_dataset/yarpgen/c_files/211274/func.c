/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211274
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_0 [i_0] [i_0])) >> (((((/* implicit */int) var_12)) - (26032))))), (((((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_1 [i_0] [8ULL])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [(unsigned char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24921))) : (arr_3 [i_0] [i_0])))) ? (18446744073709551615ULL) : (max((((/* implicit */unsigned long long int) var_12)), (arr_3 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
                var_15 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0 + 2] [4ULL])) ? (((/* implicit */int) arr_1 [i_0 + 2] [(unsigned char)6])) : (((/* implicit */int) arr_1 [i_0 + 1] [12ULL])))) <= (((/* implicit */int) max((arr_1 [i_0 + 1] [(unsigned char)2]), (arr_1 [i_0 + 1] [8LL]))))));
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((1ULL) & (12563584769243283294ULL)));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((short) max((arr_1 [i_0 + 3] [i_0]), (arr_1 [i_0] [i_0]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 22; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 21; i_4 += 1) 
            {
                {
                    arr_12 [i_2] = ((/* implicit */unsigned short) 1ULL);
                    arr_13 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((int) arr_6 [i_3] [i_2])) / (((/* implicit */int) (signed char)-110))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_17 [(unsigned char)0] &= ((/* implicit */unsigned char) arr_15 [i_5]);
        /* LoopSeq 2 */
        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 3) 
        {
            var_16 = var_8;
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                for (long long int i_8 = 1; i_8 < 15; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            arr_29 [i_5] [i_9] [i_8] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_8] [i_6] [i_7])), (var_13)))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_9] [i_9] [i_9] [i_5]))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                            var_17 = ((/* implicit */unsigned char) var_11);
                            var_18 = ((/* implicit */signed char) ((short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_8] [i_5])) ^ (((/* implicit */int) arr_1 [i_5] [i_5]))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5] [i_5]))) : (18446744073709551614ULL))))));
                        }
                        arr_30 [i_5] = ((/* implicit */signed char) max((10ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
                        arr_31 [i_5] [i_5] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_8 - 1] [i_8] [i_8 - 1] [i_8] [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_27 [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 - 1]))))) : (((((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_8] [i_8])) ? (arr_22 [i_5] [i_8] [i_8] [i_8]) : (arr_22 [i_5] [i_8] [i_8] [i_8])))));
                    }
                } 
            } 
            var_19 += ((/* implicit */long long int) var_9);
        }
        for (short i_10 = 2; i_10 < 13; i_10 += 4) 
        {
            var_20 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((unsigned char) arr_20 [i_5] [i_10] [i_10 - 1]))), (arr_3 [i_10 + 2] [i_10 - 1])));
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 15; i_11 += 3) 
            {
                for (unsigned long long int i_12 = 3; i_12 < 14; i_12 += 2) 
                {
                    {
                        var_21 *= ((/* implicit */short) ((((/* implicit */int) var_12)) > (min((((/* implicit */int) var_12)), (((((/* implicit */_Bool) (unsigned short)43177)) ? (((/* implicit */int) arr_27 [i_5] [i_10] [i_11] [i_11] [i_12])) : (((/* implicit */int) arr_1 [i_5] [i_10]))))))));
                        var_22 -= ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_23 [i_10 + 2] [i_11 - 1] [i_12 + 2]))) / (((arr_40 [i_10] [i_10]) ? (((((/* implicit */_Bool) arr_28 [i_5] [i_10] [i_11] [i_11])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)25432)))) : (((/* implicit */int) var_10))))));
                    }
                } 
            } 
            arr_41 [i_5] [i_5] = ((/* implicit */unsigned long long int) var_4);
        }
        var_23 -= ((/* implicit */unsigned char) ((arr_15 [i_5]) >> (((var_11) - (6854487430009979209ULL)))));
    }
    var_24 &= ((/* implicit */unsigned long long int) var_4);
}
