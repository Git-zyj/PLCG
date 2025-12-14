/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28081
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    arr_6 [i_2] [i_1] [i_2] = ((/* implicit */int) ((_Bool) (+(arr_0 [i_1]))));
                    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_4 [i_0] [i_0] [i_0] [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) arr_3 [i_0])))))))) - (((/* implicit */int) arr_2 [i_1] [i_1] [11LL]))));
                }
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    for (int i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        for (signed char i_5 = 2; i_5 < 17; i_5 += 3) 
                        {
                            {
                                var_20 -= ((/* implicit */_Bool) ((int) var_7));
                                var_21 -= ((/* implicit */int) (-(((max((var_10), (((/* implicit */unsigned int) arr_9 [i_0])))) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [15U] [8U] [i_3] [i_4] [i_5])) / (var_12))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_23 = ((/* implicit */short) (+(((((/* implicit */int) var_13)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
}
