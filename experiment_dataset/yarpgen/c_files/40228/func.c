/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40228
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_10)))))))));
                    var_15 = ((((((/* implicit */_Bool) (-(17592186044415LL)))) ? (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (var_1))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_10)))) && (((/* implicit */_Bool) max((var_4), (var_4)))))))));
                }
            } 
        } 
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3920680469U)) ? (17592186044393LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
    }
    var_17 -= ((/* implicit */unsigned char) max((-17592186044427LL), (((/* implicit */long long int) 0U))));
}
