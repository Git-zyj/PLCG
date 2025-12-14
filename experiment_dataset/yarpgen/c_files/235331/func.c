/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235331
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (~(251658240)));
                arr_6 [i_0 - 1] [14LL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) -15LL)))) : (5862273523841202619LL)));
                arr_7 [(_Bool)1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) -16LL));
                var_13 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((arr_0 [(short)6]) % (((/* implicit */int) var_8))))) : (min((((/* implicit */long long int) (~(var_0)))), (max((((/* implicit */long long int) 4294967295U)), (0LL)))))));
                var_14 = ((((arr_0 [i_0]) + (((/* implicit */int) var_3)))) + ((+((~(((/* implicit */int) (unsigned short)10092)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_6);
    var_16 = ((/* implicit */unsigned char) var_6);
}
