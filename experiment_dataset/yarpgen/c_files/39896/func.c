/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39896
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
    var_14 = ((/* implicit */_Bool) min((4355999157792742677ULL), (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) 3065580751596503378LL);
                arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (4120976546U)))) < ((~(var_11)))));
                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3065580751596503365LL))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) var_4)), (var_9)))))) ? (((/* implicit */long long int) 1051998383)) : ((-(3065580751596503373LL)))));
                var_18 -= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (-(2265484048515493118LL)))), (min((var_11), (((/* implicit */unsigned long long int) -3684749317784554939LL)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) % (max((((/* implicit */int) var_5)), (1051998394))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_5);
}
