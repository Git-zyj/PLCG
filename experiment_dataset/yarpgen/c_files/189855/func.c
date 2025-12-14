/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189855
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
    var_11 = ((/* implicit */long long int) -321038386);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                var_12 |= (-(((/* implicit */int) arr_1 [i_1 + 1])));
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (+(-321038388))))));
                var_14 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_1]))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 321038371)) ? (321038387) : (-321038386)))) % (2261386778U)));
    var_16 |= ((/* implicit */int) min((32767U), (((/* implicit */unsigned int) (_Bool)1))));
    var_17 = ((/* implicit */unsigned short) max((max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) 873529841U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1)))))), (((/* implicit */int) var_2))));
}
