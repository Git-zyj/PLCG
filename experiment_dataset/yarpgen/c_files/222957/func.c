/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222957
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) 18446744073709551615ULL);
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (var_11)))) % (var_5)))) ? (((((18446744073709551615ULL) + (((/* implicit */unsigned long long int) var_5)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) min((((var_10) >> (((var_12) - (310346775U))))), (((/* implicit */long long int) ((unsigned short) var_6))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)170)))) ? (((/* implicit */int) ((signed char) 0ULL))) : (((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))), (var_3))))));
                    var_18 = ((/* implicit */unsigned char) ((unsigned long long int) ((_Bool) var_7)));
                }
            } 
        } 
        var_19 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_1)))))), (((7947610636778956943ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215)))))));
    }
    var_20 |= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned short)33221))))));
    var_21 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_9))))));
}
