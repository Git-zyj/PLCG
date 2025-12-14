/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42382
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
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((var_9), ((signed char)82)))), (max((var_14), (4ULL)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_21 -= ((/* implicit */_Bool) min((((arr_3 [0ULL] [i_1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1])))), (((/* implicit */int) (signed char)83))));
                var_22 = (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-102)), (239826774U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_0 [i_1] [i_0]))));
                var_23 = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_1 [18ULL])), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 15665546019841995284ULL)) ? (((/* implicit */int) (signed char)86)) : (((/* implicit */int) (_Bool)1))))), (((unsigned int) 405252090390601400ULL))))));
                var_24 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_1 [(_Bool)1]))))))), (min((((((/* implicit */_Bool) 18144591028761487116ULL)) ? (302153044948064523ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
            }
        } 
    } 
    var_25 |= min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) var_8)) ^ (var_13))));
}
