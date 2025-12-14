/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232963
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) (unsigned short)60783)))))), ((unsigned char)3)));
                arr_6 [i_1] [i_1] = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((0ULL) * (((/* implicit */unsigned long long int) var_6))))))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_3))))))) : ((-(((((/* implicit */_Bool) (short)0)) ? (var_2) : (-1331843717)))))));
}
