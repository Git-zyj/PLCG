/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204181
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
    var_15 = ((/* implicit */int) var_13);
    var_16 &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (var_14)));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_4 [(signed char)2] [(signed char)4] = ((/* implicit */long long int) (_Bool)1);
                var_17 = ((/* implicit */unsigned int) (-(-1827380700)));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)117)) / (((/* implicit */int) var_13))))) && (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (short)-16123))) | (-6022477454647125977LL))) % (((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)-121)) : (((/* implicit */int) var_2)))))))))))));
            }
        } 
    } 
}
