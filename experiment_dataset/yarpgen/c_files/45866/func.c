/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45866
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_10 = ((/* implicit */signed char) (!(var_3)));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_11 = ((/* implicit */short) arr_1 [i_0] [i_0]);
            var_12 = var_8;
            arr_4 [i_0] = ((/* implicit */signed char) min((9057876280549737688LL), (9057876280549737688LL)));
        }
        arr_5 [i_0] = max((var_8), (((/* implicit */unsigned long long int) (_Bool)1)));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        arr_9 [11LL] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_8 [i_2]))));
        arr_10 [i_2] = ((/* implicit */long long int) (signed char)-69);
    }
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_7))));
}
