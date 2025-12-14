/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245801
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
    var_19 = (!(((/* implicit */_Bool) var_17)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [(unsigned char)4] [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_0)) ? (max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned int) var_18)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
                    arr_11 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) ((((4956749366842459151LL) / (-4955014067448611363LL))) != (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) min((var_4), ((unsigned char)249)))), (max((arr_3 [i_1] [i_0]), (((/* implicit */unsigned int) var_6)))))))))));
                }
            } 
        } 
    } 
}
