/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48010
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
    var_11 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) 2147483647))))))) : (min((((/* implicit */int) ((_Bool) var_3))), (((int) (_Bool)1))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) arr_1 [i_1]);
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((var_5) >> (((/* implicit */int) arr_2 [i_0 + 1])))))) ? (((/* implicit */int) ((unsigned char) 3120311927U))) : (((/* implicit */int) ((max((8249370058728016394ULL), (((/* implicit */unsigned long long int) (unsigned short)4)))) > (((/* implicit */unsigned long long int) (+(1029008266)))))))));
            }
        } 
    } 
}
