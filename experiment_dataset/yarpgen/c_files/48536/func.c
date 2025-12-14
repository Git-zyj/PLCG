/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48536
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
    var_12 = 17115231056770253318ULL;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [2LL]))) < (-4219828599884408441LL))))));
                    arr_8 [1LL] [i_1] [i_1] [i_1] = ((/* implicit */short) min((arr_6 [i_1] [i_0] [i_0]), (arr_7 [i_1] [(unsigned char)4])));
                }
            } 
        } 
    } 
}
