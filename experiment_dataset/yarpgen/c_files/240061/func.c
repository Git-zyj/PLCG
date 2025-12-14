/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240061
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
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)121)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))) + (4294967295U)))));
                    var_16 += ((/* implicit */long long int) ((unsigned int) min((((long long int) 872636845223566412LL)), (((/* implicit */long long int) ((arr_3 [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))))));
                    arr_7 [i_0] [i_0] [i_0] [(short)15] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -730569730105893515LL))));
                    var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((var_6), (((/* implicit */short) arr_1 [i_0 + 3]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0]))))) : (((/* implicit */int) (unsigned char)63))));
                    arr_8 [5LL] [i_0] [8ULL] [14] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) > (var_9));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(1290012857U)))))) ? ((+(-872636845223566413LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
}
