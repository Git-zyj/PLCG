/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191767
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
    var_18 = ((/* implicit */long long int) min((var_8), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))) == (((((/* implicit */int) var_7)) | (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) max((var_19), (((((/* implicit */int) (!(((/* implicit */_Bool) -319965512))))) != (((((((/* implicit */unsigned long long int) var_11)) > (arr_0 [i_1]))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned short)9])) : (((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_2 [0U]))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [(unsigned char)11] [i_4] [i_4] [9LL] [(signed char)14] = ((/* implicit */unsigned int) max((arr_0 [i_1 - 1]), (min((((/* implicit */unsigned long long int) var_11)), (arr_0 [i_1 + 1])))));
                                var_20 = ((/* implicit */short) var_16);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned char) (_Bool)1);
}
