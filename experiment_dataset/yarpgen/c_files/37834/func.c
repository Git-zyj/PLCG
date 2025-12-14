/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37834
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
    var_17 = ((/* implicit */signed char) ((long long int) ((unsigned long long int) ((short) var_5))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_1 - 1] [i_2 - 1] = ((/* implicit */unsigned char) ((_Bool) ((unsigned char) -7645538936703429808LL)));
                    arr_9 [i_2] = ((/* implicit */unsigned long long int) ((_Bool) ((long long int) ((unsigned long long int) 2075619008575852360LL))));
                    var_18 = ((unsigned short) ((signed char) ((unsigned long long int) arr_4 [i_2 + 2] [i_1 - 2] [0LL])));
                    arr_10 [i_2 - 1] [i_2] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((signed char) ((unsigned int) var_8))));
                }
            } 
        } 
    } 
    var_19 = ((int) ((unsigned short) ((long long int) (short)-24018)));
}
