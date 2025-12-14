/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234372
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
    for (unsigned int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */short) min((3802824007039216940ULL), (min((3802824007039216940ULL), (((/* implicit */unsigned long long int) (signed char)88))))));
                var_19 = ((/* implicit */unsigned char) (-(((var_11) ? (((((/* implicit */int) (signed char)-122)) * (((/* implicit */int) (signed char)91)))) : (((/* implicit */int) (signed char)91))))));
                var_20 *= ((/* implicit */_Bool) min((min((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 3] [i_0 - 1])), (-1))), (((/* implicit */int) var_11))));
                arr_5 [(_Bool)1] [i_0] [i_0 - 3] = ((/* implicit */unsigned int) (+(min((min((14643920066670334675ULL), (((/* implicit */unsigned long long int) (unsigned char)25)))), (((/* implicit */unsigned long long int) ((signed char) var_2)))))));
            }
        } 
    } 
    var_21 *= ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
    var_22 &= ((/* implicit */short) min((((/* implicit */int) min((var_2), (((/* implicit */short) var_1))))), (min((((/* implicit */int) (!(var_7)))), ((-(((/* implicit */int) (signed char)94))))))));
}
