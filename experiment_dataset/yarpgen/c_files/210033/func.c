/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210033
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_16 &= ((/* implicit */unsigned char) ((unsigned short) var_6));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) arr_2 [i_0] [i_0]))));
                arr_5 [i_0] [i_1] &= ((/* implicit */long long int) (unsigned short)50010);
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) (unsigned char)196);
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) (signed char)-1))))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)48401))))))))));
}
