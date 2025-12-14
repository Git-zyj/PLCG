/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213918
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
    var_18 = ((/* implicit */unsigned int) 11ULL);
    var_19 = ((/* implicit */unsigned long long int) ((var_5) != (((/* implicit */int) ((unsigned short) ((int) var_13))))));
    var_20 += ((/* implicit */unsigned short) var_8);
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_16))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_22 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_5 [i_0 + 1] [i_0 + 1]) >> (((-5077394735388470907LL) + (5077394735388470915LL))))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_5)) > (min((((/* implicit */long long int) arr_1 [i_0 + 1] [i_0 + 1])), (min((((/* implicit */long long int) (short)2016)), (arr_10 [i_2] [i_1] [i_2] [i_2] [(unsigned char)1] [i_2])))))));
                            arr_11 [0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) arr_7 [i_1]);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [5ULL] [i_1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])) ? ((-(arr_10 [i_0] [i_1] [i_0 + 1] [i_0 + 1] [3U] [i_0 + 1]))) : ((~(arr_10 [i_0] [i_1] [i_0 + 1] [i_0 + 1] [(short)6] [i_0 + 1])))));
                var_25 = ((/* implicit */unsigned short) max((((((/* implicit */int) (!(((/* implicit */_Bool) 3811493302U))))) / (((/* implicit */int) arr_1 [i_0 + 1] [i_1])))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1533482443U)) ? (511U) : (1634953701U)))))));
                arr_12 [i_1] [2U] = ((/* implicit */int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 677577797U)) ? (((/* implicit */int) var_12)) : (var_6)))), (414432161U))) < (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [1] [i_0 + 1]), (arr_2 [i_0] [i_0 + 1])))))));
            }
        } 
    } 
}
