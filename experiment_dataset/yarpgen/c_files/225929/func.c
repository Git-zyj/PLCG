/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225929
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [8ULL] [i_1] [i_2] &= ((/* implicit */int) (short)7936);
                    arr_9 [0] [0] [0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (short)7936)) >= (1831359744))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))))) ? ((+(1399676789897639362LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)82))));
}
