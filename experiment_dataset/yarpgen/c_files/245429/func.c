/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245429
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
    var_19 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (1678081584962176397ULL) : (1678081584962176390ULL)))) ? (10092123410097846994ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) * (18446744073709551606ULL)));
    var_20 = ((/* implicit */unsigned long long int) var_3);
    var_21 = (((_Bool)0) ? (((/* implicit */int) (short)18731)) : (((/* implicit */int) (short)-5575)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_8) : (((/* implicit */int) (short)18731))))) / (arr_0 [i_0] [(_Bool)1])));
        var_23 = ((((/* implicit */int) ((16768662488747375239ULL) != (5076082831979426252ULL)))) % (((/* implicit */int) ((unsigned char) 1678081584962176382ULL))));
        var_24 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 16768662488747375239ULL)) ? (5076082831979426281ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
        var_25 = ((/* implicit */long long int) arr_2 [(_Bool)1]);
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */short) ((unsigned long long int) 5076082831979426281ULL));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                {
                    var_27 = ((/* implicit */long long int) (~((+(1678081584962176397ULL)))));
                    var_28 = ((/* implicit */int) max((min((16768662488747375239ULL), (16768662488747375219ULL))), (max((((((/* implicit */_Bool) (signed char)31)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2] [i_3]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))))));
                }
            } 
        } 
    }
}
