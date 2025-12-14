/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26539
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
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (15080121878662425034ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(0U)))), (var_7)))))))));
    var_19 = ((/* implicit */long long int) ((unsigned long long int) ((short) ((((/* implicit */unsigned long long int) 702184609)) > (3189196451139792052ULL)))));
    var_20 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [i_1 - 1] [8ULL] [i_1 - 1])) ? (((/* implicit */unsigned long long int) max((4294967277U), (((/* implicit */unsigned int) arr_2 [i_1] [i_1] [i_1 - 1]))))) : (7478270321889675002ULL))), (((/* implicit */unsigned long long int) min((((arr_3 [i_0] [12ULL]) <= (17ULL))), (((_Bool) arr_1 [i_0])))))));
                arr_6 [i_0] [i_0] = ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -4097159598652482111LL)), (15257547622569759566ULL)))) ? (5842450092678013926LL) : (((/* implicit */long long int) 702184608))));
                arr_7 [12] [(_Bool)1] [(_Bool)1] &= ((/* implicit */long long int) 296097344U);
            }
        } 
    } 
}
