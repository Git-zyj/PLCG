/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209671
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
    var_16 = ((/* implicit */unsigned char) 312376092U);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_11 [(signed char)14] [i_1] [i_2] [i_0] = ((/* implicit */signed char) min((arr_6 [(signed char)14] [i_2 - 2]), (((/* implicit */int) arr_10 [14ULL] [i_1] [i_0]))));
                    arr_12 [i_0] [i_1] [i_2 + 2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-21050))))) ^ (min((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) (short)23786)) ? (((/* implicit */unsigned long long int) var_2)) : (18446744073709551615ULL)))))));
                }
            } 
        } 
    } 
}
