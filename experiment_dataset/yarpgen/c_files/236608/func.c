/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236608
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) -3686242987660587808LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (max((((/* implicit */unsigned long long int) 0U)), (13ULL))))) >= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((unsigned char) 6385324078854716650ULL))), (11U))))));
                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_1 [i_1] [i_0]))));
            }
        } 
    } 
    var_22 ^= var_1;
}
