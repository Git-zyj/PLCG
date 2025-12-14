/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219862
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
    var_11 = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) -1209242584303348691LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1209242584303348691LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))))), (((/* implicit */long long int) min((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) -1209242584303348691LL)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (signed char)11)))))))));
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (-(-5694443894368076717LL))))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) % (-1209242584303348691LL)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((-1209242584303348694LL) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1])))))), (((((/* implicit */_Bool) 1209242584303348685LL)) ? (1209242584303348694LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)198)), (1574703655980236563ULL)))) ? (17654800140322235812ULL) : (((/* implicit */unsigned long long int) -1209242584303348691LL)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) - (6386796067055067766LL))))));
    }
    var_15 = ((/* implicit */unsigned int) ((unsigned char) min((min((-439583179921275227LL), (((/* implicit */long long int) (unsigned short)42248)))), (min((1209242584303348694LL), (((/* implicit */long long int) (unsigned short)58653)))))));
}
