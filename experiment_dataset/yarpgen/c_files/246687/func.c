/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246687
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
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (signed char)-35))));
    var_13 = var_2;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)1))))))) ? ((-(var_6))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [7])))));
                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)17))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))) / (562949953413120ULL)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)17)) < (((/* implicit */int) (unsigned short)32134)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32110))) == (var_6)))) : ((~(((/* implicit */int) (_Bool)1))))))) : ((((-(arr_3 [i_0] [i_0]))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)228)))))))));
            }
        } 
    } 
    var_15 = min((var_0), (((/* implicit */unsigned int) ((min((((/* implicit */long long int) var_11)), (var_1))) <= (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
}
