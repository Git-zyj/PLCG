/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38660
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
    var_15 = ((/* implicit */signed char) ((unsigned long long int) (-(min((9007199250546688LL), (((/* implicit */long long int) var_13)))))));
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((short) (-9223372036854775807LL - 1LL))))));
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        var_17 = (+((+(((/* implicit */int) (_Bool)1)))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */_Bool) var_2);
                    var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_6 [i_2] [i_2 + 2] [i_0 - 4])) ? (((((/* implicit */_Bool) var_3)) ? (-5645256487697539543LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-871))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)-55)))))), (((/* implicit */long long int) var_13))));
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 70368744177663ULL)) ? (var_2) : (((/* implicit */int) (signed char)0))))))) ? (var_2) : (((/* implicit */int) arr_2 [i_0]))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) arr_3 [i_2] [i_0] [i_2 - 1]));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned short) arr_6 [i_0] [i_0 + 1] [i_0]);
    }
}
