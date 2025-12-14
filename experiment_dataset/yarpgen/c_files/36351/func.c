/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36351
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((max((18446744073709551615ULL), (18446744073709551614ULL))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), ((-(0ULL))))))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528))) : (5141469149186558252LL)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)31313))) | ((~(-236556552893241280LL)))))))))));
                var_20 = ((/* implicit */unsigned long long int) ((unsigned short) max(((+(0ULL))), (((/* implicit */unsigned long long int) (short)-14985)))));
                arr_5 [i_1 + 1] [i_1 + 1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) 0ULL));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) var_14);
    /* LoopNest 3 */
    for (short i_2 = 1; i_2 < 15; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (signed char)88))));
                    arr_15 [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11584))) : (236556552893241300LL)))) >= (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_7 [i_4 - 2]))))), (((((/* implicit */_Bool) arr_8 [7LL] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48291))) : (var_3)))))));
                }
            } 
        } 
    } 
}
