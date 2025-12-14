/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212613
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (~(9223372036854775807LL))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) ((9223372036854775807LL) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))))));
                arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) -7629392414964121742LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))) : (arr_4 [i_0] [i_0])))) ? (((((/* implicit */int) (signed char)20)) | (((/* implicit */int) arr_0 [i_1 - 2])))) : (((/* implicit */int) (((-(1073741823LL))) == (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0])))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((var_2) & (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
    var_15 += ((/* implicit */unsigned short) (~(var_0)));
    var_16 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
}
