/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33941
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
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((long long int) arr_7 [i_2 - 1] [i_2 - 3] [i_2 - 3])) * (((/* implicit */long long int) ((arr_7 [i_2 + 3] [i_2 - 1] [i_2 + 2]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-78))))))));
                    arr_9 [i_2] = ((/* implicit */int) (+((((_Bool)0) ? (11989771585481079020ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2] [i_1] [(signed char)6]))))) ? (((arr_2 [i_0]) - (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65504))))))) / (((/* implicit */long long int) arr_5 [i_1]))));
                    arr_10 [i_2] [i_2] = ((/* implicit */long long int) ((int) min((((/* implicit */long long int) var_1)), (arr_2 [i_1]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) var_2);
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) (+(1333637596139483074ULL)))))))))));
}
