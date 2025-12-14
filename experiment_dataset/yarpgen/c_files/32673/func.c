/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32673
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
    var_19 = var_16;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (~(((((/* implicit */_Bool) 17712570026518582347ULL)) ? (734174047190969268ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(_Bool)1] [i_2]))))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_3] [i_1] [i_1]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) : (-1LL)));
                                var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)1)));
                                var_23 = ((/* implicit */short) (((((!((_Bool)0))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [(unsigned char)4] [i_4] [i_3] [i_2] [0LL] [0LL]))) : (var_8))) << (((max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)511)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_5)))) - (24605)))));
                                var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((max((6002747226515656945ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))) | (((var_1) ? (6161651366136369308ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) var_10);
    var_26 = ((/* implicit */short) var_12);
}
