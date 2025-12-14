/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192701
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_6)), (var_1))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((int) min((var_3), (((/* implicit */short) (unsigned char)255))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    for (long long int i_3 = 4; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) min((var_7), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_1 + 1]))))))) > (((5062739323822468439ULL) << (((arr_1 [i_1 + 1]) - (12968162139791305886ULL))))));
                            arr_12 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (min((arr_5 [i_3 + 2]), (((arr_3 [i_3] [i_2 - 3] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))) : (var_5))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((var_0), (var_6))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_1 [i_4])))) ? (((long long int) arr_2 [i_4])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_4]))))))));
        var_18 = ((short) min(((+(((/* implicit */int) arr_3 [i_4] [i_4] [i_4])))), (((arr_0 [i_4]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))));
        var_19 = ((/* implicit */long long int) var_1);
    }
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) max((((short) var_8)), (min(((short)-1), (((/* implicit */short) var_0))))))) : (((/* implicit */int) min(((_Bool)1), ((!((_Bool)1))))))));
    var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (min((var_1), (((/* implicit */unsigned long long int) 4169669300U)))) : (((/* implicit */unsigned long long int) 125298013U))))) ? (((/* implicit */int) var_11)) : ((~(var_2)))));
}
