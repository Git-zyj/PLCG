/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201062
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
    var_11 ^= ((/* implicit */unsigned int) var_3);
    var_12 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_13 *= ((((/* implicit */int) (signed char)-107)) >= (arr_6 [i_0] [i_1] [i_0] [i_2]));
                    var_14 = ((((/* implicit */int) arr_2 [i_2] [i_1])) < (arr_6 [3U] [i_1] [i_1] [(_Bool)1]));
                }
            } 
        } 
    } 
}
