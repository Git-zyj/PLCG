/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230158
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
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_17 -= ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]);
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    var_18 -= ((/* implicit */_Bool) (+(((/* implicit */int) max(((_Bool)1), (min(((_Bool)1), ((_Bool)1))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] = ((/* implicit */long long int) ((((_Bool) ((var_11) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) || ((!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) (_Bool)1)))))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) min((arr_7 [i_1] [i_2 + 2] [i_3] [i_2 + 2]), (arr_7 [i_0] [i_1] [i_2] [i_0]))))) + (var_4))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) + (var_13))));
                }
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2776477196U)) ? (((4249640464528419693LL) | (arr_11 [i_0] [i_0] [i_1]))) : ((-(arr_1 [i_0])))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (var_10))))));
    var_22 ^= ((/* implicit */unsigned int) -1383706497);
}
