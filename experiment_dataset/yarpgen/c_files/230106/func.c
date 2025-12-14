/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230106
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
    var_12 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) var_1)) < (((/* implicit */int) (unsigned short)30056)))));
    var_13 = (-2147483647 - 1);
    var_14 = ((/* implicit */long long int) var_2);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_15 -= arr_2 [i_0];
            arr_5 [i_0] = ((/* implicit */unsigned char) (short)24859);
        }
        var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_0] [3ULL] [i_0]), (((/* implicit */signed char) (_Bool)1)))))) != (arr_2 [i_0])))), (((((/* implicit */_Bool) var_4)) ? (((arr_2 [i_0]) * (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (arr_2 [i_0])))));
    }
}
