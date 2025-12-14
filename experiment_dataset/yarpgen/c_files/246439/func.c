/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246439
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) & (((/* implicit */int) (signed char)-102))))) ? (((((/* implicit */_Bool) (signed char)50)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_14))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min(((~(3739271214U))), (((/* implicit */unsigned int) (_Bool)1))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-37))) : (-2494375993846005111LL))))) ? (var_6) : (((/* implicit */int) ((short) ((arr_2 [i_0 + 1] [i_0]) && ((_Bool)1)))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2]))))) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])))))));
        var_18 = ((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2]))))) : (max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_0] [(short)14]))))));
    }
    for (signed char i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) arr_3 [i_1] [i_1]);
        var_20 ^= ((/* implicit */unsigned short) 6978247540650761758ULL);
        var_21 = ((/* implicit */signed char) ((int) arr_2 [(signed char)1] [i_1 - 1]));
    }
    var_22 = ((/* implicit */int) var_8);
}
