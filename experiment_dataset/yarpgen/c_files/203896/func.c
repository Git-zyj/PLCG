/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203896
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
    var_17 = ((/* implicit */short) (~(max((min((((/* implicit */long long int) (unsigned char)255)), (8LL))), (((/* implicit */long long int) (~(860410223U))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_18 = ((arr_8 [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8LL)) || (((/* implicit */_Bool) (unsigned char)255)))))) < (min((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1])), (arr_8 [i_1]))))))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) 950656957)), (-5LL)))))) ? (((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1] [i_2]))))) + (arr_3 [i_1] [i_0]))) : (((arr_9 [i_0] [i_1] [16LL] [i_1 - 1]) ^ (arr_2 [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) (unsigned short)11765)))) ? (((/* implicit */int) min(((unsigned short)11777), (((/* implicit */unsigned short) (signed char)127))))) : (((/* implicit */int) (short)-32748)))), (((/* implicit */int) (unsigned char)0)))))));
}
