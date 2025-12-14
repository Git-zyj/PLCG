/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208077
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
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */unsigned int) arr_6 [(unsigned short)5] [i_1 - 3] [i_0]);
                    var_11 -= ((((var_4) == (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 4] [i_1 - 3]))))) ? (((/* implicit */unsigned long long int) ((((((var_4) | (var_4))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_2 [i_1] [i_2])) - (60962)))))) : (max((((unsigned long long int) arr_4 [i_0] [i_1] [i_2])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_2]))))))));
                    arr_7 [i_2] [4ULL] [i_2] [i_2] = ((unsigned short) (+((+(((/* implicit */int) var_7))))));
                    arr_8 [i_2] [2LL] [i_2] = ((/* implicit */signed char) max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) arr_4 [i_2] [8LL] [i_0]))));
                    arr_9 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) max((min((((int) (unsigned short)34017)), (((/* implicit */int) ((unsigned short) arr_5 [i_2] [i_1] [i_0] [i_0]))))), (min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)55751))))))));
                }
            } 
        } 
    } 
    var_12 |= ((/* implicit */signed char) var_5);
    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
}
