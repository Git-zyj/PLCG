/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223599
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) min((((/* implicit */long long int) arr_0 [i_1] [i_1])), (((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)67))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)87))) : (arr_6 [i_1] [i_0]))))))))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */signed char) (~(min((var_3), (var_6)))));
            }
        } 
    } 
    var_13 &= ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) var_0)), (min((var_2), (((/* implicit */long long int) (_Bool)1))))))));
    var_14 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -6170747459579920061LL)) ? (((/* implicit */int) (unsigned char)134)) : (1835008)))), (2625160741U))))));
    /* LoopNest 2 */
    for (unsigned int i_2 = 1; i_2 < 11; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [(signed char)5]))));
                var_16 = ((/* implicit */unsigned short) 1835008);
                var_17 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 2])) ? (arr_0 [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 162145305))))))) + ((((_Bool)1) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)196)))))));
            }
        } 
    } 
}
