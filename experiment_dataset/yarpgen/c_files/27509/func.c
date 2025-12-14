/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27509
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 3288060017U)) ? (max((((/* implicit */unsigned int) (_Bool)1)), (1736800182U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 5842197696290136274ULL)) ? (((/* implicit */int) (short)0)) : (var_2)))))))))));
    var_19 = 14011141117789770727ULL;
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) (unsigned short)19728)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_7))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-43)), (-1LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), ((unsigned short)19728))))) : ((-(var_14)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])))))));
                    var_21 = ((/* implicit */long long int) (~(arr_5 [i_2] [i_2] [i_2])));
                }
            } 
        } 
    } 
}
