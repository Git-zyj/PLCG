/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3767
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
    var_12 -= (~(((/* implicit */int) ((short) min((var_8), (-2))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_6 [i_0 - 2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_1]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)0))))) : (min((arr_3 [i_0]), (((/* implicit */unsigned int) (_Bool)1))))))) ? (((((/* implicit */_Bool) min((arr_3 [i_0]), (arr_3 [i_0])))) ? (((unsigned int) var_7)) : (arr_2 [i_0]))) : (((/* implicit */unsigned int) (((_Bool)1) ? (min((((/* implicit */int) (unsigned short)22630)), (-21))) : (arr_5 [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_0]))))));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((_Bool) max((((/* implicit */long long int) arr_3 [i_0 - 2])), (arr_1 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_3] [i_0] [i_3] [i_4] = max((((arr_8 [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) var_0)));
                                var_14 = ((/* implicit */unsigned char) arr_8 [i_3]);
                            }
                        } 
                    } 
                    var_15 ^= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0] [i_2] [i_2])), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 - 2] [i_0] [i_1] [i_1] [i_2]))) : (arr_3 [i_1])))), (var_4)))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1))));
}
