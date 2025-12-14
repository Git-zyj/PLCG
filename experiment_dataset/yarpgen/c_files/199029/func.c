/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199029
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
    var_15 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_6 [(signed char)8] [(signed char)8] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) (unsigned char)60)) >> (((-2147483645) - (-2147483646)))))))) ? (min((min((((/* implicit */unsigned int) (_Bool)1)), (4290772992U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */unsigned int) min((2147483645), (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_3)))))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0]))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) min((((/* implicit */int) (signed char)-1)), (-2147483647)));
}
