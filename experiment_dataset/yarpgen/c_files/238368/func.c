/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238368
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
    var_17 -= ((/* implicit */unsigned short) var_15);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((unsigned int) min((576460752303423487ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)37364))))))));
                    arr_7 [i_2] [(unsigned char)21] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_18 |= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)(-32767 - 1)))));
    var_19 = ((/* implicit */_Bool) var_6);
}
