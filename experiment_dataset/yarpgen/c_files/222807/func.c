/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222807
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (max((min(((unsigned short)4134), ((unsigned short)16090))), (((unsigned short) var_13))))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)64480)), (((((/* implicit */_Bool) ((unsigned short) 17721572898288078479ULL))) ? (((/* implicit */int) (unsigned short)39592)) : (((((/* implicit */_Bool) (unsigned short)1999)) ? (((/* implicit */int) (unsigned short)33173)) : (((/* implicit */int) (unsigned short)28453)))))))))));
            }
        } 
    } 
    var_19 = var_13;
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((unsigned short) var_11))))))));
    var_21 = var_15;
}
