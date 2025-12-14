/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23416
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [(short)6] = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [14ULL]))))), (((((/* implicit */_Bool) min((255LL), (((/* implicit */long long int) var_5))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -1107072838))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            var_13 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_0])) + (((/* implicit */int) arr_1 [i_0]))))), ((+(var_9))))))));
            var_14 = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((arr_0 [i_0]), (arr_0 [i_0])))), (((long long int) max((var_3), (((/* implicit */int) var_6)))))));
            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min((min((arr_5 [8] [16] [8]), (((/* implicit */long long int) arr_3 [i_1] [i_0])))), (max((((/* implicit */long long int) max((var_10), (var_10)))), (max((((/* implicit */long long int) (unsigned char)47)), (arr_5 [i_0] [i_1] [i_1]))))))))));
        }
    }
    var_16 *= ((/* implicit */unsigned long long int) var_3);
}
