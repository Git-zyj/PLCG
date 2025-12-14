/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237480
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
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */long long int) arr_2 [i_0] [i_1]);
                    arr_9 [i_0] [(unsigned short)8] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-24287)) ? (14939101509455638615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_10 [i_0] [i_2] = ((/* implicit */long long int) var_9);
                    arr_11 [i_0] [i_1] [i_2] [i_1] &= ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_1 [i_0]))))) && (((/* implicit */_Bool) arr_7 [i_2 + 3] [i_2 + 2] [i_2]))))), (arr_3 [i_1] [i_2])));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_5)) - (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (13676132076501215261ULL)))));
}
