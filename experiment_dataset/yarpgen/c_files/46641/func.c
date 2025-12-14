/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46641
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
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((((~(((/* implicit */int) arr_3 [i_1] [i_2])))) + (2147483647))) >> (((2013265920) - (2013265919)))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : ((-(6ULL))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -2013265903)) ? (((/* implicit */int) (_Bool)1)) : (-2013265920))))))));
                    var_13 = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_1 + 1]))))), (min((-3387479093050165479LL), (((/* implicit */long long int) (_Bool)1)))))));
                    arr_8 [i_1] [i_2 - 1] [i_1] [i_1] = ((/* implicit */short) arr_0 [i_0]);
                }
            } 
        } 
    } 
    var_14 |= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) ? (3546269765U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) (_Bool)1)))))), (((((/* implicit */_Bool) (((_Bool)1) ? (-6807930608377020387LL) : (((/* implicit */long long int) 0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (((((/* implicit */_Bool) 4361127022388153423LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2605594779649819191LL)))))));
}
