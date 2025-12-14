/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199579
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) -5995362796213254253LL))));
        arr_2 [(unsigned char)21] = (_Bool)1;
        arr_3 [i_0] = ((/* implicit */short) 5995362796213254248LL);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((max((((/* implicit */long long int) (unsigned char)215)), (min((8207046662314228127LL), (((/* implicit */long long int) (_Bool)1)))))), (max((-5995362796213254267LL), (5995362796213254241LL))))))));
        var_18 = max((min((-9223372036854775793LL), (((/* implicit */long long int) (_Bool)1)))), (max((((/* implicit */long long int) (unsigned char)187)), (-8715952626115832775LL))));
    }
    var_19 -= ((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) (_Bool)1))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) var_6)), (var_0))))))));
    var_21 = ((/* implicit */short) var_3);
}
