/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45466
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
    var_15 = ((/* implicit */signed char) ((-6049235349250863362LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)24)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (((((((_Bool)1) || ((_Bool)1))) || (((((/* implicit */_Bool) var_2)) || (arr_0 [i_0]))))) || (((((/* implicit */_Bool) (short)-5090)) && (((/* implicit */_Bool) var_12))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_16 = ((((/* implicit */int) var_3)) == (((/* implicit */int) (signed char)-120)));
            arr_6 [(_Bool)1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)86)) ^ (((((/* implicit */int) var_1)) % (((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)11]))))));
            var_17 = ((2623094776002652301LL) ^ (-5525635180560533496LL));
        }
        arr_7 [i_0] = ((/* implicit */_Bool) ((((var_13) || (((/* implicit */_Bool) -7550822956824417842LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-113)) || (((/* implicit */_Bool) (short)19488)))))) : ((((_Bool)1) ? (-5352737068357367635LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
    }
    var_18 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19486)) ? (-2623094776002652298LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((/* implicit */int) var_12)) : (((var_10) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)6735)))))) < (((((((/* implicit */int) var_10)) <= (((/* implicit */int) var_7)))) ? (((var_13) ? (((/* implicit */int) (short)-5062)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) var_5)))));
}
