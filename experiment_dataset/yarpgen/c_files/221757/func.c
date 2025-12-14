/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221757
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
    var_17 = ((/* implicit */_Bool) (((((-(var_1))) - (((/* implicit */int) (signed char)126)))) + (((/* implicit */int) (signed char)-1))));
    var_18 = ((/* implicit */signed char) (~(var_5)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)120))) / (((((((/* implicit */long long int) 419664404)) + (var_0))) >> (max((1), (((/* implicit */int) var_13))))))));
                var_20 += ((/* implicit */signed char) max((((((/* implicit */_Bool) 899950210231167520LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (8709391119000871142LL))), (((/* implicit */long long int) ((max((899950210231167520LL), (((/* implicit */long long int) -1)))) >= (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                var_21 += ((/* implicit */int) ((min((((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0]))))), (-899950210231167521LL))) % (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0])))))));
                arr_4 [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)27604))));
            }
        } 
    } 
}
