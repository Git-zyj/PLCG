/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216744
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
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 4; i_2 < 17; i_2 += 4) 
                {
                    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2 + 1] [i_0])))))) : (max((max((((/* implicit */unsigned long long int) arr_5 [i_0])), (18446744073709551615ULL))), (14115144418414812763ULL)))));
                    var_11 -= ((/* implicit */int) min((14115144418414812763ULL), (((/* implicit */unsigned long long int) var_8))));
                    arr_7 [i_1] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */int) (short)3243)), (-397066054))));
                }
                var_12 = ((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (18377659929265070690ULL) : (var_7)));
                var_13 = ((/* implicit */short) arr_6 [i_0] [12] [i_0]);
                var_14 = ((/* implicit */int) (((_Bool)1) ? (15362561629831581100ULL) : (2106411467393697377ULL)));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_6);
}
