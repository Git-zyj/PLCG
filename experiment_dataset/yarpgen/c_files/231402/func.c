/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231402
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
    var_15 = ((/* implicit */unsigned long long int) ((long long int) (~(((var_11) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-(var_0)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((signed char) max((13539712589793056915ULL), (((/* implicit */unsigned long long int) (unsigned char)106))))))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(1969574129U)))), (var_9)))) && (((/* implicit */_Bool) (-(var_2)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_18 &= ((/* implicit */short) (!(((17592186044415ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                var_19 = ((/* implicit */long long int) max((((/* implicit */int) min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))), (((var_13) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
