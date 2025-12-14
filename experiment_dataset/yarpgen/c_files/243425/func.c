/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243425
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = (!(((/* implicit */_Bool) ((arr_4 [6LL] [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_1 [i_1] [i_1])))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((1631319351U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                arr_7 [i_0] [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_1 [4ULL] [(short)15]);
                arr_8 [i_1] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 1662224776U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)14136)))));
                arr_9 [16LL] [i_1] = ((/* implicit */unsigned char) var_8);
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (unsigned int i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_18 [i_2] [7ULL] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3 - 1] [i_3 - 1] [i_3] [i_3 + 1])) ? ((~(1249080004U))) : (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) arr_10 [i_2] [i_4])))))))) ? (((/* implicit */int) (((+(((/* implicit */int) (_Bool)0)))) < (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [14ULL] [0ULL] [12LL]))) == (arr_1 [(unsigned char)18] [6ULL]))))))) : (((/* implicit */int) (unsigned char)0))));
                    arr_19 [8ULL] = ((/* implicit */_Bool) arr_1 [i_3] [10ULL]);
                    arr_20 [3ULL] [i_3] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)63)) - (((/* implicit */int) (short)16164))))))))) : (min((var_6), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
}
