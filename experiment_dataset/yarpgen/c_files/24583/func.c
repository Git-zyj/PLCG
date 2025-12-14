/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24583
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) / (2405975711122704062ULL)));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_14 = ((/* implicit */long long int) (short)-24410);
            var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)56216)))))));
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_10))));
        }
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0]))));
    }
    var_18 -= ((/* implicit */unsigned long long int) (~((+(3637929822939402441LL)))));
}
