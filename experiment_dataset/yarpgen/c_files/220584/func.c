/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220584
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
    var_16 = ((/* implicit */unsigned long long int) var_14);
    var_17 = ((/* implicit */signed char) -467107684);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_7 [i_1 + 4] = ((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_4 [i_0] [i_1 + 3] [i_2])))));
                    arr_8 [i_0] = ((/* implicit */unsigned short) (unsigned char)115);
                }
            } 
        } 
    } 
}
