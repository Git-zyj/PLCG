/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197840
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
    var_19 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_15)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (short)17821))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-5630))) & ((-9223372036854775807LL - 1LL))))))));
    var_20 -= var_10;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)23668)) || (((/* implicit */_Bool) (unsigned char)58)))) ? (((((/* implicit */_Bool) -2289878993440472502LL)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (!((_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_12)), ((-9223372036854775807LL - 1LL))))))))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_9 [i_1])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (var_16))))));
                    var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)100))));
                }
            } 
        } 
    } 
}
