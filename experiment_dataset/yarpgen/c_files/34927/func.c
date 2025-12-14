/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34927
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
    var_19 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) -250457821)) : (var_0)))) || (((/* implicit */_Bool) var_17)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (((~(arr_0 [i_0] [i_0]))) & (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((short) var_2))), (min((93254280U), (((/* implicit */unsigned int) (_Bool)1))))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_1] [i_1] [i_1] [i_1]), (arr_6 [i_1] [i_1] [i_2] [i_0])))) ? (max(((~(arr_0 [i_0] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2280194148U)) ? (((/* implicit */int) arr_2 [i_0] [(short)1])) : (((/* implicit */int) arr_2 [i_0] [10LL]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_0] [i_1] [i_2] [i_0]), (((/* implicit */unsigned short) ((-2) == (((/* implicit */int) (short)-9948)))))))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (var_7)))) ? (((((/* implicit */_Bool) 1696085588)) ? (-969680177089212783LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-255))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))));
        arr_11 [i_0] = ((/* implicit */int) (!((_Bool)1)));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        arr_16 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) 3790452202U))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                {
                    arr_22 [i_5] [i_5] [i_5 + 1] = ((/* implicit */unsigned char) ((arr_17 [i_5 + 1] [i_5 + 1] [i_5 + 1]) / (((/* implicit */unsigned long long int) ((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-30320))))))));
                    arr_23 [i_3] [i_5] = ((/* implicit */_Bool) ((unsigned int) (unsigned char)123));
                    arr_24 [i_5] [i_4] = arr_21 [i_5] [i_4] [13ULL];
                    arr_25 [12LL] [i_5] = ((/* implicit */_Bool) (+(arr_20 [i_5] [i_5 + 1] [i_5 + 1])));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */short) var_10);
    var_21 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) max((var_13), (((/* implicit */short) var_10))))), (((((/* implicit */_Bool) 8191ULL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))))))) : (min((max((((/* implicit */long long int) 4294967282U)), (var_5))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (var_0)))))));
    var_22 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) min((var_8), (((/* implicit */int) (short)245))))) == (max((((/* implicit */unsigned int) (unsigned char)49)), (504515077U))))));
}
