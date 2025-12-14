/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240110
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
    var_11 = var_3;
    var_12 = ((/* implicit */unsigned int) (short)32767);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [(unsigned short)18] [0LL] [i_1] [(_Bool)1] |= ((/* implicit */_Bool) var_2);
                    arr_8 [i_0] [18] = ((/* implicit */short) ((unsigned short) (+(((((-1291460219377349172LL) + (9223372036854775807LL))) << (((((arr_1 [i_2]) + (1852425323))) - (35))))))));
                }
            } 
        } 
    } 
}
