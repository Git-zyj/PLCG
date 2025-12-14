/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222030
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                arr_6 [(_Bool)1] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)4)), (-2489767415324478632LL)))) ? ((-(6200333100206468586LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (((~(var_2))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))), ((+(((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned int) (~((+(min((6200333100206468586LL), (6200333100206468586LL)))))));
}
