/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22943
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
    var_20 -= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_13)), (max((((/* implicit */long long int) var_7)), (5737456637110847275LL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 1] [i_0] = ((/* implicit */_Bool) arr_2 [i_1 - 1]);
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((/* implicit */short) ((signed char) var_9))), (var_19))))));
                arr_6 [i_0 - 1] [i_0] [i_1 + 1] = ((/* implicit */long long int) max((max((((5042173130074599273ULL) << (((13404570943634952352ULL) - (13404570943634952296ULL))))), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)1))))), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0]))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)254))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (var_5)))) : (((/* implicit */int) (!((_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_19)), (5042173130074599254ULL))) <= (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_17)), (var_1)))))))) : (((unsigned long long int) (+(8589934591LL))))));
}
