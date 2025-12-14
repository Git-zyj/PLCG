/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240921
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) var_16);
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_1] [i_0] [i_0])), ((~(((/* implicit */int) var_12))))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16383)) << (((((((((/* implicit */_Bool) (unsigned char)139)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11655))))) + (9205727672038880694LL))) - (8LL))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_11);
    var_21 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-1))))), (var_17)));
}
