/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228090
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
    var_14 = ((/* implicit */short) (-(((((((/* implicit */int) (short)20321)) ^ (((/* implicit */int) var_12)))) >> (((((1988089298U) >> (((/* implicit */int) var_5)))) - (7554U)))))));
    var_15 = ((/* implicit */int) (short)20321);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) >= (arr_3 [i_0] [i_1]))))) >= (min((((/* implicit */unsigned int) arr_0 [i_0 + 2])), (var_8)))))) * (((/* implicit */int) (short)20321))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_3] [9U] [15ULL] [i_4] = ((((/* implicit */long long int) ((((unsigned int) arr_10 [i_0] [i_1] [i_2] [i_3])) * (((/* implicit */unsigned int) ((((/* implicit */int) (short)20321)) / (((/* implicit */int) arr_6 [i_2] [(unsigned short)14] [9U])))))))) * (min((((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_3] [i_4 - 1])), (arr_10 [i_4] [i_3] [i_2] [i_1])))), (((long long int) (unsigned short)0)))));
                                arr_15 [i_0] [i_3] [i_3] [i_1] [i_0] = (i_3 % 2 == 0) ? (((/* implicit */short) ((min((max((var_7), (((/* implicit */unsigned long long int) (unsigned short)65535)))), (var_7))) << (((((max((arr_11 [i_3]), (((/* implicit */unsigned int) arr_0 [i_0])))) << (((arr_11 [i_3]) - (2624078833U))))) - (1300234236U)))))) : (((/* implicit */short) ((min((max((var_7), (((/* implicit */unsigned long long int) (unsigned short)65535)))), (var_7))) << (((((((max((arr_11 [i_3]), (((/* implicit */unsigned int) arr_0 [i_0])))) << (((((arr_11 [i_3]) - (2624078833U))) - (3622217126U))))) - (1300234236U))) - (2871443437U))))));
                                var_17 ^= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_0 [i_0])), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 1078767509004624990ULL))))), (((((/* implicit */long long int) var_8)) + (arr_5 [i_3] [i_2] [i_1])))))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((0ULL) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((int) (unsigned short)65535))))) : ((-(arr_5 [i_0 - 1] [i_0] [i_0 - 1])))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */int) (short)12639);
}
