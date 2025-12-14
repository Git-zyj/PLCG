/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228409
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
    var_14 += var_7;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(arr_6 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)0)))) : (max((((/* implicit */int) arr_5 [i_0] [i_0] [i_2 - 2])), (arr_6 [i_0] [i_0] [5LL])))))));
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) arr_0 [i_2 - 2]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) var_1);
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((3451551542698286377LL) / (864691128455135232LL)))))) ? (max((var_2), (((/* implicit */long long int) arr_13 [i_4] [i_2 - 1] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)32070), ((short)17396)))) ? (((/* implicit */int) (unsigned short)4016)) : (((/* implicit */int) max(((unsigned char)23), (((/* implicit */unsigned char) (_Bool)1))))))))));
                                arr_15 [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) (short)1)), (((int) ((unsigned short) (unsigned short)0)))));
                                var_16 = ((/* implicit */short) max((((/* implicit */int) (unsigned short)60928)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_11 [i_4] [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)18))))) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_2 [i_0]))))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) max((((/* implicit */long long int) (unsigned short)0)), (arr_9 [(short)1] [i_3 - 1] [i_3 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((short) arr_13 [i_2 + 1] [i_2 - 2] [i_2]))) : (((/* implicit */int) var_7))))) : (min((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_3])) ? (562675075514368ULL) : (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2] [(signed char)4] [i_2])))), (((/* implicit */unsigned long long int) arr_0 [(unsigned short)2]))))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((3451551542698286377LL), (((/* implicit */long long int) (short)-3212))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)59))) : (arr_0 [i_0])))) ? (arr_6 [i_0] [i_1] [i_1]) : (((/* implicit */int) (!((_Bool)1))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((max((((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))))), (((/* implicit */unsigned long long int) ((short) var_4))))) << (((((unsigned int) min((var_12), (((/* implicit */int) var_6))))) - (39029U)))));
}
