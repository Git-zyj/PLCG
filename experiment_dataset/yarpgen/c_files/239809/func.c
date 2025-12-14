/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239809
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
    var_12 = ((/* implicit */_Bool) var_11);
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) max((((/* implicit */int) (!((!(((/* implicit */_Bool) var_11))))))), (((int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) var_10))))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(var_2))) - (((/* implicit */int) var_7))))) ? (((int) (+(((/* implicit */int) (unsigned char)249))))) : (((/* implicit */int) ((_Bool) (-(((/* implicit */int) (signed char)127))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                arr_7 [(unsigned short)7] |= max(((~(((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) ((signed char) 6581626887152498414LL))));
                var_15 |= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) max((((/* implicit */short) arr_2 [(short)4])), (var_8)))))) != (((((/* implicit */int) ((unsigned short) -1425935717))) << (((((long long int) arr_1 [i_0])) - (45256LL)))))));
            }
        } 
    } 
}
