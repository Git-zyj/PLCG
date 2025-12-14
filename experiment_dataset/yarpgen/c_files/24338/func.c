/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24338
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
    var_10 = ((/* implicit */short) (((+(var_6))) % (var_3)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 11; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)30893)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_1] [i_1] [i_3]))))) : (min((var_9), (((/* implicit */unsigned int) (short)-30879))))))), (((arr_0 [i_3]) >> (((arr_0 [8]) - (5610972589816888250LL)))))));
                                var_12 = ((/* implicit */unsigned char) min((3887322017U), (((/* implicit */unsigned int) (short)30876))));
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */unsigned int) ((((var_4) ? (var_7) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_0] [i_1])))) >= (((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0] [2ULL] [i_1]))) ? (((((/* implicit */unsigned long long int) var_9)) - (arr_9 [i_1 - 1] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)240)) % (var_3))))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_8))))) ? ((+(((/* implicit */int) (short)-26489)))) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1] [i_1 - 1])))));
                            var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (short)30858)), (arr_6 [i_0] [i_1] [i_0] [(short)9])));
                            var_15 = ((/* implicit */_Bool) ((unsigned char) ((arr_14 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1]) / (((/* implicit */long long int) var_6)))));
                            var_16 = ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_7 = 1; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned int i_8 = 2; i_8 < 11; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 14; i_9 += 2) 
                        {
                            {
                                var_17 = var_4;
                                arr_24 [i_0] [i_1 - 1] [i_7 + 1] [i_8] [i_9] [i_1] = ((/* implicit */_Bool) arr_19 [i_1] [i_8]);
                                var_18 = ((/* implicit */unsigned long long int) arr_19 [i_1] [10LL]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    for (short i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((long long int) ((arr_14 [i_0] [i_1] [(_Bool)1] [i_1] [i_10] [i_11]) - (arr_14 [1U] [i_1] [i_10] [i_10] [(unsigned char)10] [i_0])))) : (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)30882))) : (7735077451662558373LL))))))));
                            arr_29 [i_1] = ((/* implicit */signed char) arr_13 [i_0] [i_1] [i_10] [i_11]);
                            arr_30 [i_0] [i_0] [i_1] [i_10] [i_1] [i_11] = ((/* implicit */int) max((min((((/* implicit */long long int) arr_12 [i_1 - 1] [i_1 - 1])), (arr_14 [i_0] [i_1] [i_1] [i_1 - 1] [i_11] [i_11]))), (((/* implicit */long long int) (short)32748))));
                            arr_31 [i_0] [i_1] [i_1 + 1] [i_10] [i_10] [i_11] = ((/* implicit */unsigned char) (((-(((2131120900445700187LL) - (2131120900445700172LL))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_1 + 1])))))));
                            arr_32 [i_1] = ((/* implicit */int) ((var_1) >= (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (short)30872))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
