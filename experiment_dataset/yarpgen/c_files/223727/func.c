/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223727
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
    var_16 = ((/* implicit */unsigned int) ((short) var_0));
    var_17 ^= ((/* implicit */short) (unsigned short)4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) var_3))) : (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3] [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2])) >= (((/* implicit */int) arr_6 [i_2]))))) : (((((/* implicit */int) ((_Bool) arr_3 [i_1]))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_2]))))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) ((unsigned char) ((((((/* implicit */int) var_0)) >= (var_12))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_1])), (var_4)))) : (max((36028797018963967ULL), (var_11))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (arr_1 [i_0])));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) var_4)) / (var_7))), (((/* implicit */long long int) var_0))));
    var_23 = ((/* implicit */int) ((((var_6) ? (((/* implicit */unsigned long long int) var_14)) : (var_1))) << (((max((var_10), (((/* implicit */unsigned int) ((short) var_14))))) - (2776536477U)))));
}
