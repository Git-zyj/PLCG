/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235403
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
    var_19 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((-8540237324097705197LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17603)))))) ? (min((var_14), (((/* implicit */int) var_5)))) : (((/* implicit */int) ((signed char) (_Bool)1))))), (var_14)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0]);
                var_20 *= ((/* implicit */unsigned char) ((_Bool) min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) var_17)))));
                var_21 += ((/* implicit */_Bool) max((((int) var_18)), (((/* implicit */int) ((_Bool) arr_1 [i_0 + 1])))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_11);
}
