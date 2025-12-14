/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20774
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
    var_19 ^= ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned int) 8384512))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (short i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_0] [1LL] = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                            arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [(short)0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((var_18), (((((/* implicit */int) arr_1 [i_3])) - (((/* implicit */int) (_Bool)1)))))))));
                            arr_15 [(short)5] [(unsigned short)9] = ((/* implicit */unsigned int) 12675713428397024025ULL);
                            arr_16 [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((short)14907), ((short)(-32767 - 1))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0] [4U])) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3])) != (((/* implicit */int) arr_5 [i_1 - 1])))))))) : (((3502319444U) >> (((((/* implicit */int) (unsigned short)12048)) - (12019)))))));
                        }
                    } 
                } 
                var_21 += ((/* implicit */short) (+(((/* implicit */int) (signed char)-125))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_10);
    var_23 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_18)), (var_3)));
}
