/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47058
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) min((var_4), (var_4))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */_Bool) min((var_13), (((((/* implicit */_Bool) (unsigned short)47863)) && (((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0]))))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) var_1);
                    arr_8 [13ULL] [13LL] [i_0] [i_0] = arr_6 [i_0] [i_1] [i_2];
                }
            } 
        } 
    } 
}
