/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19912
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_15 = ((_Bool) 16940660772264953385ULL);
                    arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_2] [i_1] [i_0]))) ? ((-(var_1))) : (((/* implicit */int) (_Bool)1))))) ? ((-(min((((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0])), (arr_8 [i_0] [i_1] [i_2]))))) : (((/* implicit */long long int) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) == (((/* implicit */int) arr_0 [i_0]))))))))));
                }
            } 
        } 
    } 
    var_16 += var_4;
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_0))));
}
