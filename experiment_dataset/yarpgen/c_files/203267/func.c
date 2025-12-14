/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203267
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
    var_12 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [(short)11] [(short)11] [i_3] [i_3] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (unsigned char)94)) || (((/* implicit */_Bool) (unsigned char)94)))) || (((/* implicit */_Bool) arr_7 [i_0 - 2] [i_3 - 2] [i_2 + 1] [i_2 + 2])))) && (((/* implicit */_Bool) ((((/* implicit */int) min((arr_9 [i_0] [i_0] [i_0] [i_3]), ((unsigned char)162)))) >> (((max((-1LL), (((/* implicit */long long int) 1973637581)))) - (1973637561LL))))))));
                            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((long long int) arr_4 [i_0] [i_2 + 1] [i_3 - 1])))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 1973637558)) && (((/* implicit */_Bool) (signed char)1)))))))) - (var_11))))));
                arr_12 [i_0] = ((/* implicit */short) min((-1973637575), (((/* implicit */int) (_Bool)1))));
                arr_13 [i_1] [(unsigned short)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)20))) / ((-(13591303697705668116ULL)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)79))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))))))))));
                var_15 = ((/* implicit */int) arr_0 [i_0]);
            }
        } 
    } 
}
