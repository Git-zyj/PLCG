/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50776
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
    var_12 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) -6262106305916267616LL)) && (((/* implicit */_Bool) var_1)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (-(((/* implicit */int) ((short) arr_6 [i_2 - 1] [i_2 + 3] [i_2 + 3] [i_2 + 1]))))))));
                    arr_7 [i_2] [i_1] [i_1] &= ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -5752459490393346764LL)) ? ((-9223372036854775807LL - 1LL)) : ((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)4889)) || (((/* implicit */_Bool) (short)4882)))) ? ((+(((/* implicit */int) (short)(-32767 - 1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1052884258619200703LL)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (short)32762))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (arr_2 [i_1] [i_1]))));
                }
            } 
        } 
    } 
}
