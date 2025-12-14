/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217439
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
    var_16 = ((/* implicit */long long int) var_9);
    var_17 = ((/* implicit */unsigned char) var_7);
    var_18 = max((var_3), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))), (min((((/* implicit */unsigned char) (signed char)34)), ((unsigned char)156)))))));
    var_19 = ((/* implicit */unsigned int) min(((+(max((-1200898716920238971LL), (((/* implicit */long long int) var_6)))))), (((/* implicit */long long int) ((536870911U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) var_2);
        var_20 = ((/* implicit */short) arr_1 [i_0] [(short)3]);
        var_21 = ((/* implicit */unsigned char) min((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), (arr_1 [i_0] [i_0])));
        var_22 *= ((/* implicit */unsigned int) ((((min((((/* implicit */unsigned long long int) 4276797743U)), (15580173698118128425ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))))) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (((((((/* implicit */_Bool) 2950645758U)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)6))) : (0LL)))));
        var_23 = ((/* implicit */unsigned int) (+((((+(arr_0 [i_0] [i_0]))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (507619560U) : (arr_1 [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) ((1213565129U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232)))));
        var_25 ^= ((/* implicit */_Bool) ((18069022585564055872ULL) - (((arr_0 [i_1] [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2231)))))));
        arr_5 [i_1] = ((/* implicit */_Bool) arr_1 [i_1] [8LL]);
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) 2402552433U);
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((arr_10 [i_2] [i_3] [16U]) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))))));
                    var_27 = ((/* implicit */short) arr_11 [i_4] [i_2]);
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) min((var_5), (arr_12 [i_5] [11U]))))));
        var_29 = ((/* implicit */unsigned int) max((var_29), (max((((/* implicit */unsigned int) arr_11 [i_5] [(unsigned char)24])), (((((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_5])) >> (((/* implicit */int) (unsigned char)16))))) | (arr_7 [i_5])))))));
    }
}
