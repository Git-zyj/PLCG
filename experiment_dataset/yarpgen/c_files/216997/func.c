/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216997
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
    var_14 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 24; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */int) (-(((arr_3 [i_0 + 3]) & (((/* implicit */unsigned int) var_1))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_16 *= ((/* implicit */short) (unsigned char)253);
                            var_17 = (+(((/* implicit */int) var_2)));
                            var_18 = ((/* implicit */int) arr_3 [i_2]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), ((+(0U)))))) || (((_Bool) ((((/* implicit */_Bool) 2473839107U)) ? (var_5) : (var_7))))));
}
