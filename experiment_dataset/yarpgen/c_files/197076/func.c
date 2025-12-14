/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197076
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
    var_19 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) ((((/* implicit */int) (short)31744)) == (((/* implicit */int) var_11))))))), (((/* implicit */int) (signed char)-45))));
    var_20 = ((/* implicit */long long int) ((unsigned long long int) var_0));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */_Bool) var_17);
                    arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) (short)31747)), (var_2)))) + ((((_Bool)1) ? (((/* implicit */int) (short)31747)) : (((/* implicit */int) arr_1 [i_1]))))));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    } 
}
