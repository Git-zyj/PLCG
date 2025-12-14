/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48446
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
    var_13 = ((/* implicit */unsigned int) min((((long long int) ((var_9) >> (((var_11) - (2519166377747818302ULL)))))), ((~(var_12)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)65511)), (17U))))))), (((((/* implicit */_Bool) -2509645424723217533LL)) ? (arr_0 [i_0]) : (arr_0 [i_1])))));
                arr_5 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_2 [i_1] [i_1]))))), (max((1369463942606638845LL), (var_9)))))) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(0U)))) + (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_12) : (((/* implicit */long long int) 17U)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) (+((~(((((/* implicit */_Bool) (unsigned short)65535)) ? (-10LL) : (((/* implicit */long long int) 4294967280U))))))));
}
