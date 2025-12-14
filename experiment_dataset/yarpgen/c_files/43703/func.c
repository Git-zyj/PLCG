/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43703
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
    var_14 = ((/* implicit */long long int) var_8);
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) > (var_10))))))));
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((90961683U) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5320926080990050049LL)) ? (1816848652) : (((/* implicit */int) var_2)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (var_6)))))))) : (((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */long long int) 2015369375U)) : (max((-5320926080990050049LL), (8810110824899985432LL)))))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_13))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */short) var_12);
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_8))));
                var_19 = ((/* implicit */int) (-(var_10)));
                arr_5 [i_1 - 1] = ((/* implicit */signed char) max(((-(max((((/* implicit */long long int) var_13)), (var_7))))), (max((arr_1 [i_0 - 2]), (arr_1 [i_0 + 2])))));
                var_20 ^= ((/* implicit */unsigned long long int) max((max((((-8810110824899985432LL) * (((/* implicit */long long int) ((/* implicit */int) var_5))))), (0LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1 + 1])) ? (arr_3 [i_0 - 2] [i_1 + 1]) : (arr_3 [i_0 - 2] [i_1 + 1]))))));
            }
        } 
    } 
}
