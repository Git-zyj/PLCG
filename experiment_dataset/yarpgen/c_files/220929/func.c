/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220929
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
    var_11 ^= var_1;
    var_12 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_9)), (min((var_1), (((/* implicit */unsigned long long int) var_5))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) min((13691193302578943089ULL), (14341833454129904695ULL)));
                var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_3 [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned long long int) 686735933401328189LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)23812), (((/* implicit */unsigned short) arr_2 [i_1] [i_1 + 1] [i_1 - 1])))))) : (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (10498573474807237447ULL) : (arr_3 [i_1 + 1] [i_1 - 1])))));
            }
        } 
    } 
}
