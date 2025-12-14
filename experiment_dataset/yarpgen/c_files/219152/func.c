/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219152
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
    var_10 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) & (1519438099067083827LL)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 19832415U)), (((((/* implicit */_Bool) 5198790219817238263ULL)) ? (5198790219817238252ULL) : (((/* implicit */unsigned long long int) 19832415U))))));
                    var_12 = ((/* implicit */unsigned short) ((arr_3 [i_0 + 1] [i_0 + 1]) ? (1383527745) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) arr_8 [i_0 - 2] [(_Bool)1] [i_2] [i_2])) : (1665367711981718642LL))) < (((/* implicit */long long int) 871372553U)))))));
                }
            } 
        } 
    } 
}
