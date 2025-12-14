/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203147
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
    for (long long int i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) ((unsigned short) arr_0 [i_0] [i_0]));
                arr_7 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_1]))));
                arr_8 [i_0] [(_Bool)1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((+((+(((/* implicit */int) arr_3 [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65527)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_0 - 3] [(_Bool)1] [(unsigned short)16]))))) && (((/* implicit */_Bool) ((long long int) (unsigned short)65535))))))));
            }
        } 
    } 
    var_15 = (+(((long long int) (_Bool)1)));
    var_16 = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
}
