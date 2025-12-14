/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202417
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
    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((((8846948638687958211ULL) >> ((((~(9599795435021593415ULL))) - (8846948638687958163ULL))))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1))))))));
        arr_2 [i_0] = ((/* implicit */signed char) (-((((~(((/* implicit */int) arr_1 [(unsigned short)3])))) + (((((/* implicit */int) arr_1 [i_0 + 1])) | (((/* implicit */int) arr_1 [16ULL]))))))));
        arr_3 [(_Bool)1] = ((/* implicit */unsigned short) max((((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_1 [i_0]))))) >> ((((~(((/* implicit */int) arr_0 [(signed char)9])))) - (17))))), (((/* implicit */int) arr_0 [i_0 + 1]))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) var_5);
    }
}
