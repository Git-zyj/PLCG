/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235182
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
    var_19 = ((((/* implicit */_Bool) var_7)) ? ((-(((/* implicit */int) var_17)))) : (((/* implicit */int) var_15)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_1 [i_0 + 2])))) ? (((arr_1 [i_0 - 3]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20768))))) : ((+(4799103688004028581ULL)))));
                arr_7 [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) max((13647640385705523034ULL), (4799103688004028581ULL)))))));
                var_20 = ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)51033)) & (-1))) << (((((/* implicit */_Bool) -1698512692)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_0 - 3]))) : (13647640385705523037ULL)))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_17)) : (max((1048575), (((/* implicit */int) (unsigned char)0))))))));
    var_22 = ((/* implicit */unsigned long long int) var_13);
    var_23 = ((/* implicit */int) var_0);
}
