/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201876
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
    var_16 = ((/* implicit */int) var_1);
    var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
                var_19 &= ((((/* implicit */_Bool) (-(((((/* implicit */long long int) var_14)) & (52552595047183259LL)))))) ? (((arr_2 [i_0] [i_1]) + (((/* implicit */long long int) var_8)))) : (max((((/* implicit */long long int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)40710)))), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) & (var_10))))));
            }
        } 
    } 
}
