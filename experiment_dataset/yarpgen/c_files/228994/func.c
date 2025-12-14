/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228994
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                for (short i_3 = 2; i_3 < 14; i_3 += 3) 
                {
                    {
                        var_10 = ((/* implicit */unsigned int) max((var_10), (min((((/* implicit */unsigned int) ((((arr_0 [i_1]) >> (((((/* implicit */int) arr_5 [i_0])) + (28795))))) != (arr_0 [i_2])))), ((+((-(arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])))))))));
                        var_11 = ((/* implicit */_Bool) (short)-31440);
                    }
                } 
            } 
            var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_5 [i_0 + 2])), (max((15U), (2164923046U)))));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0]))))) : (arr_3 [i_0] [i_4])));
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */short) ((3553499571U) != (2130044250U)));
        }
        for (unsigned short i_5 = 3; i_5 < 14; i_5 += 3) 
        {
            var_14 = ((/* implicit */short) (unsigned short)21471);
            var_15 ^= ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_9 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_0] [i_0]) : (min((arr_4 [i_0 - 1] [i_5 + 2] [i_5 + 2]), (arr_4 [i_0 - 1] [i_5] [i_5 + 3]))));
        }
        for (short i_6 = 1; i_6 < 13; i_6 += 3) 
        {
            arr_21 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)44093))));
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) arr_20 [i_0 + 2] [i_0 + 1]))));
        }
        arr_22 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)44035))))));
        var_17 = var_7;
    }
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        for (short i_8 = 3; i_8 < 21; i_8 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    for (short i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 21; i_11 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */_Bool) ((max((2164923053U), (((/* implicit */unsigned int) arr_33 [i_7] [i_7] [i_7] [i_7])))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7] [9LL])))))) ? (arr_32 [i_7] [i_8] [i_8] [i_9] [i_10] [3U]) : (var_4)))));
                                arr_37 [i_11] [i_8] [i_8] [i_11] [i_8] [22LL] = ((/* implicit */short) var_3);
                                arr_38 [i_9] [i_9] [i_11 - 1] &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_33 [i_7] [i_8 - 2] [i_10] [i_11 + 1]))))), (min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_35 [i_7] [i_8] [i_9] [i_10] [i_11])), ((unsigned short)21454)))), (arr_28 [i_9] [i_8 - 1] [i_9])))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((arr_26 [i_8] [i_9] [i_11]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_9] [i_9] [i_9] [i_9])) >> (((((/* implicit */int) arr_33 [i_7] [i_8 - 3] [i_7] [i_10])) - (33593)))))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != ((+(arr_34 [i_8 - 2] [i_8 + 2] [i_8 + 1]))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)21488)), ((~((~(((/* implicit */int) (short)-523))))))));
    var_22 = ((/* implicit */short) var_4);
}
