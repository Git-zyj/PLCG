/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242355
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((4783357914599064348ULL), (min((13663386159110487263ULL), (((/* implicit */unsigned long long int) 262143))))))) || (((/* implicit */_Bool) ((4783357914599064356ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12087))))))));
                arr_5 [8ULL] [i_1 + 2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)8)) >> (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) min((((/* implicit */int) ((((((/* implicit */unsigned long long int) -262143)) + (35184372088831ULL))) > (((/* implicit */unsigned long long int) var_11))))), (((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53456)) || (((/* implicit */_Bool) 18446744073709551609ULL))))) - (((/* implicit */int) (_Bool)1))))));
}
