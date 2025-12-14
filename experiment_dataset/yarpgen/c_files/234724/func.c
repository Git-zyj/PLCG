/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234724
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 13; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)18551))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2 - 3] [i_3] [i_4] = (-(((/* implicit */int) ((short) max((((/* implicit */short) (_Bool)0)), ((short)3555))))));
                                arr_15 [i_0] [i_0] [i_2 - 1] [i_3 - 1] [i_4] = ((((/* implicit */_Bool) min((var_5), (((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_13 [i_0] [i_3 + 1] [i_3] [i_3 - 1])))))))) ? (max((((((/* implicit */int) (unsigned short)14675)) - (arr_3 [i_2]))), (((/* implicit */int) var_5)))) : (((int) 2460619939597990628LL)));
                                arr_16 [i_0] [i_0] [i_2] [(unsigned short)7] [i_4] = ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) min((arr_7 [i_0] [(short)3] [i_0] [6] [i_0]), (((/* implicit */int) (short)16525))))), (max((((/* implicit */unsigned int) var_4)), (var_8)))))));
                                var_11 = ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_0] [i_2] [i_2] [(unsigned char)10])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [(short)6] [(unsigned char)11] [i_4] [(unsigned char)11] [i_4]))));
                                var_12 = ((/* implicit */unsigned char) arr_6 [i_3 + 1] [i_3 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) var_0);
}
