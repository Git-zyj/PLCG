/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205106
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
    var_14 = ((/* implicit */unsigned short) (+(min((((unsigned int) var_0)), ((+(var_13)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = 7259533912344151318ULL;
        var_15 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)228))) : (-4138245912624985526LL)));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_1])) ^ (((/* implicit */int) arr_6 [i_1]))));
        arr_7 [i_1] = ((/* implicit */int) ((arr_5 [i_1]) * (11187210161365400298ULL)));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) 1023)))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-(11187210161365400298ULL))))));
    }
}
