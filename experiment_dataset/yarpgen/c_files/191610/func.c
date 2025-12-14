/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191610
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6055832773881628762LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (6055832773881628762LL)));
                var_12 = ((((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) arr_0 [i_1] [i_0])), (var_5))))) | (arr_3 [i_0]));
                arr_5 [i_1] = ((/* implicit */int) max(((~(arr_2 [i_0] [i_1]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0] [i_1])))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) arr_3 [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 3; i_2 < 6; i_2 += 4) 
    {
        arr_9 [(short)1] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_4 [i_2 - 3] [i_2])), ((-(min((-6055832773881628762LL), (6055832773881628760LL)))))));
        arr_10 [i_2] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((unsigned int) arr_1 [i_2])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */int) arr_0 [i_2 + 3] [i_2])) : ((+(arr_3 [(_Bool)1]))))))));
    }
}
