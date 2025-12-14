/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19382
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
    var_15 -= ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_6 [(signed char)1] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0 + 1])) < (((((/* implicit */int) var_9)) - (((int) arr_1 [i_0] [i_1]))))));
                var_16 = ((/* implicit */long long int) min(((~(((/* implicit */int) arr_0 [i_0 - 1])))), (((var_4) / (((/* implicit */int) (_Bool)1))))));
                arr_7 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((6958712052500647220ULL) % (6958712052500647220ULL)));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (~(((int) 17828404865963691080ULL))))) : (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55))) : (var_12))), (((/* implicit */unsigned long long int) ((_Bool) 618339207745860550ULL)))))));
}
