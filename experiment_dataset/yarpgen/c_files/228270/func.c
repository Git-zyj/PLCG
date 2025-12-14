/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228270
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
    var_13 |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) ((2009315461U) << (((37702790) - (37702762)))))))));
    var_14 &= ((/* implicit */long long int) max(((((-(((/* implicit */int) var_9)))) - (((/* implicit */int) var_4)))), (var_0)));
    var_15 = ((/* implicit */int) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (!(((arr_6 [i_0] [i_1]) || (arr_6 [i_0] [i_1])))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((min((arr_6 [i_0] [i_1]), (var_9))) ? (max((2285651827U), (((/* implicit */unsigned int) 409301040)))) : (var_1)))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0]))))), ((-(arr_4 [i_0])))))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) 1419428733290247926LL);
            }
        } 
    } 
}
