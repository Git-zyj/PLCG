/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204228
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [(short)10] &= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [(unsigned short)6]))))) / (((arr_1 [i_1]) / (arr_1 [i_0]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) & (arr_1 [i_1]))))))))));
                arr_6 [i_0] [(unsigned char)4] [i_1] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(arr_4 [i_1] [i_1 - 1] [i_1 - 1])))), (((unsigned long long int) arr_0 [i_1 + 1] [i_1 + 1]))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_17 &= ((/* implicit */unsigned int) (((_Bool)0) && ((_Bool)1)));
                                var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) arr_0 [i_1 - 1] [i_4 - 1])))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(((/* implicit */int) min((arr_11 [i_0] [i_2] [i_3] [i_1 - 1]), (arr_8 [i_0] [i_4 + 1] [i_2])))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_0])), (var_14))))) == (max((((/* implicit */unsigned int) (unsigned char)62)), (4231485871U))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) (-(var_16)));
}
