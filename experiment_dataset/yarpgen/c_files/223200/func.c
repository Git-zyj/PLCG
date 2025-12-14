/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223200
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [13ULL] = ((/* implicit */unsigned long long int) (unsigned short)24008);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_6 [(unsigned char)5] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2147483632)) ^ (0ULL)))) ? (((/* implicit */int) ((_Bool) arr_5 [i_1] [i_1] [i_0]))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)98)) || ((_Bool)0))))));
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (8594052579495100779ULL)));
            arr_8 [2U] = (~((+(((/* implicit */int) (unsigned short)20413)))));
            arr_9 [6] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) 2147483647)))));
        }
    }
    var_10 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((var_6) / (var_8)))))), (((unsigned long long int) (+(((/* implicit */int) (unsigned short)20413)))))));
}
