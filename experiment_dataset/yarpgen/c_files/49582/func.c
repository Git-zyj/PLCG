/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49582
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
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [i_1] = ((unsigned long long int) ((unsigned long long int) ((((/* implicit */_Bool) 12802904093312692843ULL)) ? (274877841408ULL) : (12802904093312692843ULL))));
                    arr_8 [i_1] [1ULL] [i_2] [3ULL] = arr_6 [i_0] [i_2 + 2] [i_2] [i_2];
                }
            } 
        } 
    } 
    var_15 = var_9;
    var_16 = ((unsigned long long int) ((unsigned long long int) var_5));
}
