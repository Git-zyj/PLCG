/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41684
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (~(var_9))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)19480))))) : (((((/* implicit */_Bool) 127)) ? (((/* implicit */long long int) -113)) : (arr_1 [i_0] [i_0])))));
        var_13 = ((/* implicit */unsigned int) (~(arr_2 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)19] [i_0]);
            var_14 &= ((/* implicit */long long int) min(((~(((((/* implicit */_Bool) 0)) ? (-127) : (113))))), (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0] [i_0])))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-1LL), (((/* implicit */long long int) 127))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_5 [i_0] [11U] [i_0])))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)90))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_1])))) : (arr_1 [i_0] [i_1])));
        }
        var_15 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
    {
        var_16 &= ((/* implicit */unsigned short) (~(arr_10 [i_2 + 1])));
        arr_12 [i_2 + 1] = ((/* implicit */_Bool) arr_8 [i_2 - 2]);
        arr_13 [i_2] [i_2] = ((/* implicit */_Bool) (~(16LL)));
        /* LoopSeq 2 */
        for (int i_3 = 4; i_3 < 21; i_3 += 2) 
        {
            var_17 = ((/* implicit */_Bool) arr_8 [i_3 - 4]);
            arr_17 [i_2 - 1] [i_3] = ((/* implicit */short) -114);
        }
        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            arr_20 [i_2] [i_2] [i_4] = ((/* implicit */short) arr_16 [i_2 - 2] [i_4] [i_4]);
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                for (long long int i_6 = 1; i_6 < 21; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_7 = 1; i_7 < 22; i_7 += 2) 
                        {
                            arr_29 [i_5] [i_2] [i_2] [i_2 - 2] [i_2] [i_2] = ((/* implicit */int) ((arr_23 [i_2 - 1] [i_2] [i_2 - 2] [i_2 - 1] [i_2 + 1]) ? (-19LL) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6 + 1] [i_7 - 1])))));
                            arr_30 [i_5] [i_4] [i_4] [i_6] = ((/* implicit */unsigned short) arr_27 [i_2] [i_4] [i_4] [i_6] [i_7 - 1]);
                        }
                        for (int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            var_18 = (((!(((/* implicit */_Bool) (short)32767)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)166))))) : (((/* implicit */int) arr_31 [i_2 + 1] [i_4] [i_5] [i_4] [9U])));
                            var_19 = ((/* implicit */unsigned short) (~(arr_25 [i_2 - 1] [i_2 - 1] [i_5] [i_2 - 1] [i_6])));
                            arr_34 [i_6 - 1] [i_5] [i_6 - 1] [i_6 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) || (arr_23 [i_2] [i_4] [i_6 - 1] [i_6] [i_8])));
                        }
                        arr_35 [i_2] [i_2] [i_5] [i_6] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_2] [i_4]))));
                    }
                } 
            } 
        }
        arr_36 [i_2] [i_2 + 1] = ((/* implicit */signed char) ((((_Bool) arr_23 [i_2] [i_2 - 1] [i_2] [i_2] [(short)18])) ? (31LL) : (arr_14 [i_2 + 1] [i_2 + 1])));
    }
    for (int i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3283039925U))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((+(0LL)))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)48234)), (16303012453004136685ULL))) : (((/* implicit */unsigned long long int) min((arr_25 [i_9] [i_9] [i_9] [i_9] [i_9]), (arr_25 [i_9] [i_9] [i_9] [i_9] [i_9]))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(761568531))), ((~(((/* implicit */int) (unsigned char)157))))))) ? ((+(((/* implicit */int) (unsigned char)227)))) : (((/* implicit */int) (unsigned short)65022))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            for (short i_12 = 4; i_12 < 23; i_12 += 3) 
            {
                {
                    var_23 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65002))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_12] [i_10] [i_12 + 2] [i_12 - 3])) ? (arr_44 [i_12] [i_10] [i_12 - 3] [i_12 - 1]) : (arr_44 [i_12 + 2] [i_10] [i_12] [i_12 - 3])))) ? (((((/* implicit */_Bool) arr_44 [i_12] [i_10] [i_12 + 2] [i_12 - 2])) ? (arr_44 [i_12] [i_10] [i_12 - 3] [i_12 - 1]) : (arr_44 [i_12 - 3] [i_10] [i_12 - 2] [i_12 - 2]))) : (((((/* implicit */_Bool) -1LL)) ? (-9223372036854775795LL) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                }
            } 
        } 
        arr_46 [i_10] = ((/* implicit */long long int) (unsigned short)65022);
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 25; i_13 += 2) 
        {
            for (unsigned char i_14 = 1; i_14 < 21; i_14 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) ((signed char) (+(12U))));
                    var_26 = ((/* implicit */int) (unsigned char)172);
                }
            } 
        } 
        arr_52 [i_10] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 761568531)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))), (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_10]))) : (arr_49 [i_10] [i_10] [i_10])))))));
    }
    var_27 -= ((/* implicit */_Bool) var_9);
}
