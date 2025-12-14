/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50505
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
    var_14 = ((/* implicit */short) (-(((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) -6740328079107254425LL)) : (0ULL))) + (((/* implicit */unsigned long long int) -6740328079107254433LL))))));
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 6740328079107254440LL)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (short)32737))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */long long int) var_12);
                    arr_8 [i_0] = ((/* implicit */unsigned char) 28ULL);
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max(((unsigned short)0), ((unsigned short)0))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */_Bool) max((((arr_5 [i_1 - 1] [i_1 + 2] [i_1 + 3]) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)9854))) : (3U)))))), (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) (unsigned short)0))))))));
                }
            } 
        } 
    } 
}
