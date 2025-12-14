/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190381
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
    var_10 = var_5;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_11 += ((/* implicit */unsigned long long int) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) (_Bool)1)), (2985268755591031167LL))) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) (+(var_1))))));
                                var_13 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1))))) ? (arr_13 [i_2] [i_3] [i_3] [i_3] [i_3 - 1] [i_3] [i_3 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1]))))) ^ (((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4 + 3] [i_0])) ? (var_4) : (0ULL)))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)48));
                    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])) : (0ULL)))) ? (((arr_7 [i_0] [i_0] [i_2]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1]))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 22U)) ? (var_7) : (((/* implicit */long long int) min((var_1), (((/* implicit */unsigned int) (unsigned char)192)))))))) ? (((((/* implicit */_Bool) (-(-9223372036854775799LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_2]))) : (min((((/* implicit */unsigned long long int) var_3)), (var_4))))) : (((2348566594833923419ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60)))))));
                }
            } 
        } 
    } 
}
