/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201937
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
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [(short)6] [i_0] [i_0 + 1] = ((/* implicit */_Bool) arr_4 [i_1 - 1] [(_Bool)1] [i_0 - 1]);
                var_10 += ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_1] [i_0] [i_0 - 2]))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_11 = ((short) var_7);
        var_12 &= min(((short)-6005), (((/* implicit */short) (_Bool)0)));
        var_13 = ((/* implicit */long long int) arr_0 [8ULL]);
    }
    var_14 &= ((/* implicit */int) var_8);
    var_15 = ((/* implicit */_Bool) 28ULL);
}
