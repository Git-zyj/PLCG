/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211906
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((unsigned short) min((max((-1150502601020495772LL), (((/* implicit */long long int) (short)23199)))), (((/* implicit */long long int) var_16))))))));
    var_19 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_20 |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)48673)) / (((/* implicit */int) (short)1))));
        var_21 = ((/* implicit */unsigned char) (~(arr_1 [i_0])));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) (((((-(((/* implicit */int) var_13)))) + (2147483647))) << (((arr_3 [i_0]) - (634646602687288551LL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_3]))) * (((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                                var_23 = ((/* implicit */unsigned char) ((2292545096457439057ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 2] [i_2] [i_2] [i_2])))));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_2] [i_1] [i_1])) + (((/* implicit */int) arr_11 [i_2] [i_3] [i_4]))));
                                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2 + 1]))) : (arr_9 [i_2 - 1] [i_2] [i_2 - 1])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))) : (((8619715216408186971LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63)))))));
    }
    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        arr_16 [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) (short)-11349))) * (((/* implicit */int) (!(((arr_15 [i_5]) && (((/* implicit */_Bool) 14152632685164746367ULL)))))))));
        var_27 = ((/* implicit */short) ((((_Bool) var_4)) ? (((((/* implicit */_Bool) arr_14 [i_5] [i_5])) ? (arr_14 [i_5] [(short)6]) : (arr_14 [i_5] [i_5]))) : (((((/* implicit */_Bool) 672781361U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12881)) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) (_Bool)1))))) : (var_1)))));
    }
    for (int i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        var_28 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
        var_29 = ((/* implicit */unsigned short) max((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) arr_18 [i_6]))))));
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_18 [(short)1])) - (((/* implicit */int) arr_17 [2ULL] [i_6])))) + (((((/* implicit */int) arr_17 [i_6] [i_6])) + (((/* implicit */int) var_12)))))))));
    }
}
