/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249550
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
    var_20 = (signed char)0;
    var_21 = ((/* implicit */signed char) (((((_Bool)1) ? ((~(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_15)))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0 + 1] = arr_3 [(signed char)14];
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) ((unsigned int) arr_1 [(unsigned char)9]))))));
            }
        } 
    } 
}
