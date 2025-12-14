/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229447
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 -= ((/* implicit */unsigned char) 0LL);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 4; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 608282198296276033LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                                var_17 = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (_Bool)0)), (var_9))), (((/* implicit */unsigned int) arr_9 [i_1] [i_2] [i_1] [i_3]))))) ? (((/* implicit */int) ((((-17261347) > (((/* implicit */int) arr_8 [i_2] [i_3] [i_4 - 4])))) || (((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_0 [i_0]))))))) : (((/* implicit */int) ((signed char) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                    var_19 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) arr_12 [i_0] [i_1] [(signed char)6] [i_2]))) + (arr_5 [i_2] [i_2] [i_1] [i_0])));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((_Bool) var_8));
}
