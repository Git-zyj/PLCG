/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212280
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
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [5U] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0 + 2])) ? (((/* implicit */int) (short)2016)) : (((/* implicit */int) (unsigned char)73))))) ? (1269671976U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0 + 2])) ? (((/* implicit */int) (unsigned short)59539)) : (((/* implicit */int) (signed char)74))))));
                            arr_12 [i_2] [i_1] [i_1] [i_3] = arr_3 [i_0 - 1];
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_1] [i_2])) ? (((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_1] [i_2] [i_2] [i_3]))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [8LL]))) : (arr_10 [i_2] [i_2] [i_2] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_2])))));
                            arr_13 [i_0] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 + 2]) : (((/* implicit */unsigned int) 155424908)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1)))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_9 [(unsigned char)7] [i_2] [i_1] [8U]))));
                        }
                    } 
                } 
                arr_14 [i_0 - 1] [i_1] |= arr_10 [i_1] [i_1] [i_0] [i_1];
                var_21 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((/* implicit */_Bool) arr_3 [i_1])))) ? (arr_10 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_0 - 3] [i_0 + 1])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (int i_5 = 0; i_5 < 24; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    arr_22 [i_6] [i_6] = ((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4]);
                    arr_23 [(short)3] [i_4] [i_6] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 2022172143U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_21 [i_4] [i_5] [i_5] [i_4]))))) ? (((/* implicit */int) arr_20 [i_4] [i_5] [i_4] [i_4])) : (((((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_4])) ? (((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_20 [i_4] [i_4] [i_4] [i_4]))))))) : (((((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_4] [i_4] [i_5] [i_6]))) : ((-(14084876735161941414ULL)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)73)) ? (2747690208U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183)))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))))))))))));
}
