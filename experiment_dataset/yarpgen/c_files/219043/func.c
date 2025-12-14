/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219043
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) var_0))));
    var_11 = ((/* implicit */signed char) max((var_11), (var_0)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (293997860U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))) << (((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (unsigned short)31266))))));
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((13148562307543921321ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))))))));
        arr_4 [i_0] = ((/* implicit */int) ((unsigned char) -785880615505875898LL));
        arr_5 [2U] [2U] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0]))))) > (((max((var_9), (((/* implicit */unsigned long long int) arr_0 [i_0] [16ULL])))) << (((/* implicit */int) ((var_3) != (3787457043U))))))));
        var_14 = ((/* implicit */short) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))))) ? (((/* implicit */int) min((((unsigned char) 4294705152U)), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 5055328171135296877LL)) > (var_7))))))) : (((/* implicit */int) min((arr_0 [i_0] [i_0]), (((/* implicit */short) var_2)))))));
    }
}
