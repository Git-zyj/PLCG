/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32428
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
    for (unsigned short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_2] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) var_9);
                    arr_11 [(unsigned short)8] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((/* implicit */int) var_0))))), (((((/* implicit */_Bool) (short)-13847)) ? (8727325393511471495LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [(signed char)3])), (arr_2 [(short)11] [i_0 + 1]))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) && (((((/* implicit */int) var_0)) == (((/* implicit */int) var_2))))))) : (((/* implicit */int) var_9))));
}
