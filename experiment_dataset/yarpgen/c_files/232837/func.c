/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232837
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
    var_18 = ((/* implicit */unsigned long long int) ((((unsigned long long int) -336851395)) != (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_16)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_9 [i_1] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_0] [i_1] [i_1]))) ? ((+(((unsigned int) arr_3 [i_1] [i_1] [i_1])))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                    var_19 ^= ((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_0]);
                }
                var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_6)), (6257010416439017375ULL)));
                arr_10 [i_1] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (743826291U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) * (((/* implicit */int) (short)-7))))) : (max((((/* implicit */unsigned long long int) (short)6)), (min((((/* implicit */unsigned long long int) (short)6)), (arr_6 [i_1] [i_0] [i_1] [7]))))));
                arr_11 [i_1] = ((/* implicit */signed char) ((unsigned short) min((max((arr_2 [i_1] [i_1] [i_0]), (((/* implicit */unsigned int) (unsigned short)5925)))), (((/* implicit */unsigned int) arr_5 [7] [3ULL] [i_1])))));
            }
        } 
    } 
}
