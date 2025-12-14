/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28851
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
    var_10 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */unsigned long long int) var_6);
                        arr_11 [i_0] [(unsigned char)12] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)86)), ((short)-26)))) ? (((/* implicit */int) (short)-26)) : (((/* implicit */int) (short)-32765))));
                        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (+(max((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) != (7592016992367741968ULL)))), (((((/* implicit */int) arr_5 [i_2])) & (((/* implicit */int) (short)-32767)))))))))));
                    }
                } 
            } 
        } 
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) arr_5 [i_0]))));
    }
    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) ((max((-2877960931649457397LL), (((/* implicit */long long int) (short)-32734)))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1500234521U))))));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26))) : (0ULL))))));
        /* LoopSeq 2 */
        for (long long int i_5 = 3; i_5 < 16; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    {
                        arr_25 [i_5 - 1] [i_4] = ((/* implicit */short) (-(283250398U)));
                        var_16 ^= ((_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_5]))) ? (arr_7 [i_4] [i_5] [i_4] [(unsigned char)9]) : (((/* implicit */int) var_8))));
                        arr_26 [i_4] [i_5 + 1] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_14 [i_6])), (min((-1432769517), (((/* implicit */int) var_5))))));
                        arr_27 [i_7] [i_6] = ((/* implicit */short) arr_7 [15LL] [i_6] [15LL] [i_4]);
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned long long int) -7233246506761486049LL);
            arr_28 [i_4] [i_4] = ((/* implicit */unsigned int) (unsigned short)3215);
            arr_29 [i_4] [3U] [i_5] = ((/* implicit */signed char) ((arr_8 [i_4] [(signed char)11] [i_4] [i_4]) ? ((+(((/* implicit */int) (short)-32765)))) : (((/* implicit */int) (signed char)124))));
        }
        for (long long int i_8 = 3; i_8 < 16; i_8 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) 16087967131551896412ULL)) ? (16087967131551896412ULL) : (((/* implicit */unsigned long long int) min((max((arr_12 [i_8]), (((/* implicit */unsigned int) arr_15 [i_4] [i_4] [i_8])))), (2436986186U))))))));
            arr_32 [i_8] = ((/* implicit */unsigned char) var_0);
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
    {
        for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 4) 
        {
            {
                arr_38 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (short)-21886)) + (((/* implicit */int) (short)32764)))) < (((/* implicit */int) (short)-10)))) ? (((var_8) ? (((arr_13 [i_10] [i_9]) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_9] [i_10 + 2] [i_10 - 1] [i_9] [i_9] [i_9]))) : (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((var_4) || (var_1))))))) : (((/* implicit */long long int) (-(arr_0 [i_9]))))));
                /* LoopSeq 1 */
                for (short i_11 = 3; i_11 < 16; i_11 += 1) 
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_10 - 1] [i_11 - 2])) - (((/* implicit */int) arr_4 [i_10 + 3] [i_11 - 3]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_30 [i_10 + 1] [(unsigned short)15] [i_11 + 1]))))) : (((((/* implicit */_Bool) arr_0 [i_11 - 2])) ? (arr_0 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_11 - 1] [i_10] [i_9] [i_9])))))));
                    arr_41 [i_9] [i_9] [i_10 + 2] [i_10] = ((/* implicit */short) -2147483645);
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 16087967131551896412ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26660))) : (743727084U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0)))))))) ? (((/* implicit */int) arr_14 [13ULL])) : (((/* implicit */int) (short)-21886))));
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_5))));
                }
            }
        } 
    } 
}
