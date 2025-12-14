/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191307
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
    for (long long int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [16LL] [17] [(unsigned char)7] = ((/* implicit */long long int) var_10);
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            arr_10 [i_3] [i_1] [i_2] [i_1] = (~(((/* implicit */int) (_Bool)1)));
                            arr_11 [i_0] [i_1] [i_2] = (+(((((/* implicit */_Bool) 32767LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((var_14), (((/* implicit */short) var_10))));
    var_16 = ((/* implicit */_Bool) (~(min((((/* implicit */int) ((unsigned short) var_8))), (((int) var_4))))));
}
