/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240753
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
    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) min((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_0)) ? (4661952472226306173LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45075))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */short) var_2)))))))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_6 [i_0 - 1] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (signed char)42))));
                    var_11 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) (short)-16267)))))), (((((/* implicit */_Bool) 992432077U)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-88))))) : (((0ULL) ^ (((/* implicit */unsigned long long int) arr_1 [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
}
