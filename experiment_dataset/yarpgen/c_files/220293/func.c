/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220293
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
    var_13 = ((/* implicit */long long int) ((signed char) (unsigned short)22532));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_5))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] = ((/* implicit */int) min((min((arr_11 [i_2 + 1] [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 + 1]), (((/* implicit */unsigned int) arr_0 [i_1 - 2])))), (((/* implicit */unsigned int) ((_Bool) arr_0 [i_1 - 1])))));
                            arr_15 [i_0] [i_1 - 2] [i_2] [i_2] = ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]);
                        }
                    } 
                } 
                var_15 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)37620)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_0]))))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1 + 1])))))))));
            }
        } 
    } 
}
