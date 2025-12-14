/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192559
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
    var_16 = ((/* implicit */unsigned long long int) ((14862188631796168871ULL) == (3584555441913382730ULL)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                arr_6 [(unsigned char)6] [10ULL] [i_0] = min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_10))))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))), (3584555441913382721ULL))));
                arr_7 [i_1 + 1] [7ULL] [i_0] = ((/* implicit */short) 523309091U);
            }
        } 
    } 
}
