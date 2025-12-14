/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192283
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
    for (long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) 566428105U)) ? (((/* implicit */unsigned int) max((1991663971), (max((1134874118), (((/* implicit */int) (_Bool)0))))))) : (3728539205U))))));
                    var_15 = ((/* implicit */int) (_Bool)0);
                    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((0LL), (((/* implicit */long long int) 857852127U))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (1822589281U)))) : (((((/* implicit */_Bool) 3295358451968484653LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (max((max((9223372036854775807LL), (((/* implicit */long long int) 1068993360U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -2039438633)) ? (((/* implicit */unsigned int) -1991663972)) : (3728539207U)))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) -1899310255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (1811236125U))), (1822589271U)))))))));
                    arr_6 [i_1] [i_0] [i_0] = max((2147483647LL), (max((((/* implicit */long long int) max((566428105U), (((/* implicit */unsigned int) (_Bool)1))))), (((((/* implicit */_Bool) 939240330U)) ? (-2283326233742592734LL) : (-5078284192347223439LL))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) -4282053762545589120LL)) ? (-2039438648) : (((/* implicit */int) (_Bool)1))))));
}
