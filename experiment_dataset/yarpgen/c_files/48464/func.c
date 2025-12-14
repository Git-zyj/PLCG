/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48464
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
    var_16 = ((/* implicit */unsigned char) (short)10976);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2])) : (((((/* implicit */_Bool) -1282440793)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (unsigned short)2345))))))) < (268435200U)));
                    arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */int) var_14)), (var_15)));
                    arr_11 [i_0] [i_1] [i_1] [i_2] |= arr_6 [i_0] [i_1] [i_2];
                    var_17 = ((/* implicit */short) arr_7 [i_1 + 1] [i_1 - 2] [i_1 - 2]);
                }
            } 
        } 
    } 
}
