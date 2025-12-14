/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209563
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)0)))))) + (2147483647))) << (((((/* implicit */int) var_1)) - (112))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_0]))) & (min((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_2 [i_1]) : (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) (!(var_11)))))))))));
                var_15 -= ((/* implicit */_Bool) min((((min((var_5), (((/* implicit */int) var_7)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) || (((/* implicit */_Bool) -4525250680990982087LL)))))));
            }
        } 
    } 
    var_16 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (min((min((((/* implicit */long long int) 2447812753U)), (var_8))), (((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)229)))))));
}
