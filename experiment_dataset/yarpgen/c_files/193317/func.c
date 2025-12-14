/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193317
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
    var_11 *= ((/* implicit */int) ((((((/* implicit */_Bool) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_1)))))) : (var_9))) % (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (min((15823726892110868305ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) var_2)))))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_1]);
                    arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */int) arr_8 [i_0 - 2] [i_2] [i_1 + 1] [i_1])) : (((/* implicit */int) ((((/* implicit */int) arr_8 [i_0 - 2] [i_1] [i_1 + 1] [i_0])) >= (((/* implicit */int) (unsigned char)255)))))));
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_1 + 1]))) ? (((/* implicit */int) ((signed char) -1099434928))) : ((+(arr_0 [i_0 + 2])))));
                    var_14 *= ((/* implicit */short) arr_6 [i_1 + 1] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) arr_4 [i_2])))))) < (min((7828241584169364504LL), (((/* implicit */long long int) (signed char)0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-17237)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_3] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_4])) : (((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned short)0] [i_3]))))) : (((((/* implicit */_Bool) 9223372036854775805LL)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_1])) / (((/* implicit */int) var_5)))))));
                                var_16 = (+(((((/* implicit */_Bool) 250895280)) ? (arr_9 [i_1]) : (((/* implicit */int) (signed char)-10)))));
                                var_17 = ((/* implicit */int) arr_16 [i_0 + 1] [i_1] [i_0] [i_0 - 2] [i_1 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
