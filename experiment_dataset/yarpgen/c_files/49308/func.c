/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49308
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) max((var_8), (((/* implicit */int) arr_4 [i_0 - 1])))))) ? ((+(2476525841U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))))));
                var_16 = ((/* implicit */short) var_11);
                var_17 = ((/* implicit */unsigned long long int) var_6);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 12; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(arr_5 [i_2] [i_2])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_2])), (arr_1 [i_2])))))) ? (((unsigned long long int) arr_5 [i_2] [i_2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        var_18 = ((/* implicit */unsigned int) min((var_18), (max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_2]))))), (max((((/* implicit */unsigned int) arr_4 [i_2])), (((unsigned int) arr_8 [i_2]))))))));
    }
}
