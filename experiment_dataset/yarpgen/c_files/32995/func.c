/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32995
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
    var_10 *= ((/* implicit */unsigned char) ((_Bool) ((unsigned int) ((unsigned int) var_2))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [(signed char)10] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((long long int) ((unsigned int) 13589938772075512768ULL))));
                arr_7 [i_0] [i_1] [i_1] |= ((/* implicit */_Bool) ((unsigned short) ((_Bool) ((unsigned long long int) (short)6667))));
                arr_8 [i_0] [i_0] [(unsigned char)18] = ((/* implicit */signed char) ((_Bool) ((unsigned short) ((short) arr_4 [i_0]))));
                var_11 |= ((/* implicit */short) ((int) ((signed char) ((unsigned short) arr_1 [i_0]))));
                arr_9 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned short) ((_Bool) ((_Bool) ((unsigned long long int) var_1))));
            }
        } 
    } 
}
