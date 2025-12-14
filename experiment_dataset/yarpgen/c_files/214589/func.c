/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214589
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((((min((var_9), (((/* implicit */unsigned long long int) var_0)))) > (((((/* implicit */_Bool) 13351909877043085639ULL)) ? (33554431ULL) : (var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0]), (((_Bool) (_Bool)1)))))) : (((((/* implicit */_Bool) 18396856957272296320ULL)) ? (((((/* implicit */_Bool) 14923370249018610660ULL)) ? (15587671882425341526ULL) : (12294319701552361959ULL))) : (((5725946780736123438ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
        var_14 = (+(min((15836723161830661758ULL), (((unsigned long long int) 2793848804897668701ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_15 = ((((unsigned long long int) (_Bool)0)) >> ((((-(var_1))) - (4023108147507219618ULL))));
        var_16 = ((((((/* implicit */_Bool) var_11)) ? (arr_4 [i_1]) : (var_9))) > (arr_3 [i_1]));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_17 *= ((/* implicit */unsigned long long int) ((((unsigned long long int) arr_6 [i_2])) > (((((/* implicit */_Bool) arr_7 [i_2])) ? (var_9) : (arr_7 [i_2])))));
        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_6 [i_2]), (((arr_7 [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
    }
    var_19 = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) ((4296661229621948186ULL) > (31457280ULL))))))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) max(((~(var_11))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_6)))))) ? ((-((-(var_2))))) : (var_4)))));
}
