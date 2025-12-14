/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191029
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
    for (signed char i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(arr_1 [i_0])))), (min((min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_0 [i_0])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -1967987791293182878LL)))))))));
                var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))))) ? (min((2835744860U), (((/* implicit */unsigned int) -862191823)))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_0 - 2] [i_0] [i_1])), (arr_4 [i_0])))) ? (1459222432U) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_1])))))))));
            }
        } 
    } 
    var_20 = ((((/* implicit */int) min((var_16), (((/* implicit */short) var_1))))) > (min((((/* implicit */int) var_16)), (((((/* implicit */int) var_16)) + (((/* implicit */int) (_Bool)1)))))));
}
