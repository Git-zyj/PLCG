/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22014
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [(unsigned short)0] [i_0]);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            var_17 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) min((max((arr_1 [i_0] [i_1]), (((/* implicit */unsigned short) arr_0 [i_0])))), (((/* implicit */unsigned short) min((arr_0 [i_0]), (arr_0 [i_1]))))))), (arr_4 [14ULL] [14ULL])));
            arr_5 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
            arr_6 [i_1] = ((/* implicit */short) arr_4 [i_0] [i_1]);
        }
        var_18 -= ((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_0]), (((/* implicit */long long int) max((max((((/* implicit */unsigned short) arr_0 [i_0])), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned short) arr_0 [i_0])))))));
    }
    var_19 = var_5;
    var_20 = ((/* implicit */unsigned long long int) var_13);
}
