/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207715
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
    var_16 = ((/* implicit */_Bool) max((min((3557097645011944240LL), (((4669648404793632687LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))), (((long long int) var_7))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (!(var_5)))) << (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (var_5))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_2])) ? (max((((var_9) ^ (var_4))), (arr_4 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                    var_19 &= ((/* implicit */_Bool) max((max((arr_6 [i_0] [i_1] [i_2]), (arr_6 [i_0] [i_1] [i_2]))), (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) -2102117769272719557LL))))));
                }
            } 
        } 
    } 
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned long long int) var_9)) ^ (var_7))) : (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
}
