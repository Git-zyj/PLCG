/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198212
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) -253883680227118534LL))))))))));
                    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_2 - 1])), (arr_8 [i_1 + 1] [(signed char)0] [(short)1] [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned int) (!((_Bool)1)));
                                arr_16 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_12 [i_1] [i_1] [6LL] [i_1] [i_1])) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((arr_11 [i_0] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))) - (10211)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) var_4);
}
