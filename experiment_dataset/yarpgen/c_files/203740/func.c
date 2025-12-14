/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203740
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [(_Bool)1] [5LL] = ((/* implicit */unsigned char) (+(((/* implicit */int) max(((unsigned short)20754), (((/* implicit */unsigned short) (_Bool)1)))))));
                arr_7 [(short)4] [(short)4] [i_1] = ((/* implicit */unsigned short) arr_1 [i_1]);
                var_10 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_2)))))) : (((/* implicit */int) (((+(((/* implicit */int) var_6)))) == (var_3))))));
            }
        } 
    } 
    var_11 = ((((/* implicit */_Bool) var_6)) ? ((+(max((((/* implicit */unsigned int) var_8)), (var_4))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) max(((signed char)(-127 - 1)), (((/* implicit */signed char) (_Bool)1)))))))));
    var_12 = ((/* implicit */long long int) min((((max((((/* implicit */unsigned int) var_9)), (var_2))) + (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1)))))))));
    var_13 = ((/* implicit */short) var_4);
    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))));
}
