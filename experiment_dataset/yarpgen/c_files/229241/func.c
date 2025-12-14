/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229241
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
    var_15 = (+(min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)21960)))), (((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_12);
                var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_1 + 1]))) >= (var_11))))) - (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_1 + 2])) ? (735905501071608806LL) : (((/* implicit */long long int) (+(1226934601))))))));
                var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (var_14)));
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)0))) ^ (-8611659403124821507LL)))) : (3409504237954813200ULL));
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)0)) << (((/* implicit */int) (short)0))))) ? (((((/* implicit */int) var_1)) << (((140737487306752LL) - (140737487306746LL))))) : (((/* implicit */int) var_2))))) : ((+(var_6))))))));
    var_20 = ((/* implicit */long long int) (+(var_12)));
}
