/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193645
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
    for (short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_12 = ((((/* implicit */_Bool) 1146819761118072414ULL)) ? (6191807754124941823ULL) : (18126084481567689107ULL));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_4);
                    arr_9 [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */_Bool) arr_6 [(unsigned short)15] [i_0 + 1] [15ULL] [i_2]);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) var_9);
    var_14 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (320659592141862509ULL))))) * (18126084481567689107ULL)));
}
