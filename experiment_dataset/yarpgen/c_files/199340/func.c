/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199340
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0] [i_0]))))) : (var_18)))) ? (var_12) : (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_1)))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [(unsigned char)14] [23ULL] [i_3] = ((/* implicit */unsigned char) ((arr_7 [i_0] [i_0] [2U] [i_0] [(unsigned char)13]) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) 2868933365U))))))) : (((/* implicit */int) var_8))));
                            var_20 ^= ((/* implicit */long long int) (-((-((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [21] [i_1] [i_0]))))))));
                            var_21 &= (+(((/* implicit */int) arr_0 [i_0] [i_0])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_12);
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967295U)) ? (var_6) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-23154)))))));
    var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
}
