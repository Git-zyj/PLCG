/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246578
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((17179869183LL) << (((/* implicit */int) (_Bool)1)))))))));
                arr_6 [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1] [i_1])) ? (((/* implicit */int) (short)9926)) : (((/* implicit */int) arr_5 [i_1 - 1] [10] [4ULL]))))) ? (((((/* implicit */_Bool) arr_5 [i_1 - 2] [(_Bool)1] [2U])) ? (-654652499) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8035212405141760439LL)) && ((_Bool)1)));
    var_13 = ((((/* implicit */_Bool) -502429935)) ? (-8035212405141760439LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
}
