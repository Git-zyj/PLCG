/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226188
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
    var_18 ^= ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) min(((+(max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) arr_0 [i_1])))))), (((/* implicit */long long int) (~((-(((/* implicit */int) arr_1 [i_1])))))))));
                arr_5 [i_0] = ((/* implicit */_Bool) (-(max((min((1167807334U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) max((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_1] [i_1]))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (-2147483641)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */short) arr_3 [i_0] [i_0] [i_0])))))))) : (min((((/* implicit */long long int) max((arr_1 [i_0]), (((/* implicit */short) arr_3 [i_0] [i_1] [i_0]))))), (min((((/* implicit */long long int) arr_1 [i_1])), (arr_2 [i_1] [i_0])))))));
            }
        } 
    } 
}
