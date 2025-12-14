/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44251
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
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) min((((long long int) (_Bool)1)), (((/* implicit */long long int) arr_5 [(_Bool)1] [2U]))));
                var_15 = ((/* implicit */long long int) ((unsigned int) var_10));
                var_16 ^= ((/* implicit */unsigned char) ((max((arr_3 [i_0] [i_0 + 2]), (arr_3 [i_0] [i_0 + 2]))) ? (max((5913875612587606514ULL), (((/* implicit */unsigned long long int) arr_3 [i_0 - 1] [i_0 - 2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3] [i_0 - 1])))));
                arr_7 [(_Bool)1] [i_1] = ((/* implicit */signed char) var_8);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_10);
}
