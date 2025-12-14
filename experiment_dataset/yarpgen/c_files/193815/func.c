/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193815
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) (short)9795))))) >= ((-(-8038202349251838421LL)))))) : (((/* implicit */int) max((min((var_9), (var_9))), (min(((unsigned char)22), ((unsigned char)252))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) var_9);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) arr_6 [i_0])))));
            arr_8 [10U] = ((/* implicit */unsigned short) min((((arr_1 [i_1 - 3]) - (arr_1 [i_1 - 1]))), (((/* implicit */long long int) (-(151454952))))));
        }
        arr_9 [i_0] [(_Bool)1] = ((/* implicit */short) arr_2 [(_Bool)1]);
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) (signed char)(-127 - 1));
        arr_13 [i_2] = ((/* implicit */unsigned long long int) arr_10 [i_2]);
    }
}
