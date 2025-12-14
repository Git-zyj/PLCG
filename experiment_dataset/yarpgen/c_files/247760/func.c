/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247760
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
    var_20 = var_13;
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 8; i_1 += 4) 
        {
            {
                arr_8 [3LL] [3LL] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)32797))))))) ? (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32797))) < (524287U))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32814))) ^ (3965708388U)))) : (((unsigned long long int) arr_7 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) 268862124U))));
                var_21 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (unsigned short)60082)), (arr_1 [i_0 - 1] [i_0 - 1]))), (arr_7 [i_0] [i_0])));
                arr_9 [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned short) 2967728822981656778ULL));
                var_22 = ((/* implicit */unsigned short) arr_1 [i_1 + 2] [i_1 - 2]);
            }
        } 
    } 
}
