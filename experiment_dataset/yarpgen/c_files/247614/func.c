/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247614
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
    var_11 = ((/* implicit */_Bool) var_9);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) var_2))), (9801952946788712807ULL)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [(short)16] [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1)))) : (((arr_6 [i_0] [i_1] [i_1] [i_2]) ^ (arr_6 [i_0] [i_1] [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4] [i_1]))) * (arr_12 [i_4] [i_4 + 1] [i_4 - 3] [i_4 + 3] [(unsigned short)11] [i_4 - 3]))));
                                var_13 = ((/* implicit */unsigned short) ((_Bool) (-(((/* implicit */int) arr_2 [i_4 - 3] [i_1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
