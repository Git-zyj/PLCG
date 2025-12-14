/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28034
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
    var_14 = ((/* implicit */signed char) ((short) ((unsigned long long int) (short)-15032)));
    var_15 = ((/* implicit */_Bool) ((unsigned short) ((_Bool) ((_Bool) var_11))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((long long int) ((unsigned int) ((short) 4294967290U))));
                    var_17 = ((/* implicit */long long int) ((_Bool) ((unsigned long long int) ((_Bool) arr_3 [i_0] [i_1 + 1]))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */_Bool) ((short) ((short) ((unsigned int) var_3))));
    }
}
