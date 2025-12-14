/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245634
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
    var_15 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_7))))) : ((((_Bool)1) ? (var_5) : (var_13))))));
    var_16 = ((/* implicit */unsigned short) max((((var_2) ? (max((var_5), (var_13))) : (((/* implicit */long long int) -469455383)))), (((/* implicit */long long int) (+(((/* implicit */int) var_3)))))));
    var_17 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((_Bool) max((var_4), (((/* implicit */long long int) var_12)))))), (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)32)), (-1481357331)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (arr_1 [i_0])))))));
                var_19 = ((/* implicit */int) min((var_11), (((/* implicit */long long int) 622495361U))));
                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)76)) >> (((min((arr_1 [i_0]), (arr_1 [i_0]))) + (7029436862428074962LL))))) - (((/* implicit */int) min((((signed char) (unsigned short)65453)), (((/* implicit */signed char) max(((_Bool)0), (arr_3 [i_1] [i_0])))))))));
                var_21 = ((/* implicit */unsigned short) (((!(arr_3 [i_1] [i_0]))) ? ((~(arr_1 [i_0]))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))));
            }
        } 
    } 
}
