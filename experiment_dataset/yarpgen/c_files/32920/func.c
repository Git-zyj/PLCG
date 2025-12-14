/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32920
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))))));
                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((!((_Bool)1))) ? (((/* implicit */long long int) max((1166764914U), (4294967282U)))) : (var_2)))) ? (((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (-1604119195) : (((/* implicit */int) ((short) (_Bool)1))))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5078))) : (3128202382U)))) ? (((((/* implicit */_Bool) (+(-5692064370062628310LL)))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 1604119194)) : (var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(-7873482738442545415LL))) < ((((_Bool)1) ? (((/* implicit */long long int) 4141637697U)) : (var_11)))))))));
                    var_20 = (((_Bool)0) ? (((/* implicit */long long int) min((4294967282U), (var_4)))) : (-9223372036854775800LL));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) var_5))) | (((unsigned long long int) ((signed char) (short)-1501)))));
                    arr_10 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((var_1) / (((arr_1 [(short)11]) * (((/* implicit */long long int) ((/* implicit */int) var_12))))))), (((/* implicit */long long int) 1166764914U))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
    var_23 = ((/* implicit */unsigned long long int) var_9);
}
