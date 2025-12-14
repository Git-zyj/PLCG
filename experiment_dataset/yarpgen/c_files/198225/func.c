/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198225
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
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (((((-(((/* implicit */int) arr_6 [i_0 + 2] [i_0 - 1] [11LL] [i_1 - 2])))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_1] [i_1 - 2])) > (((/* implicit */int) arr_6 [i_0 + 2] [i_0] [(unsigned short)12] [i_1 - 2])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [15] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3] [i_1 - 2])) ? (((arr_2 [i_0] [i_0 + 1]) | (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))) : (((/* implicit */long long int) (~(max((((/* implicit */int) arr_4 [i_1] [i_2])), (var_11))))))));
                                arr_14 [i_0] [i_4] [i_2] [i_3] [i_4] [i_3] [i_3] = ((/* implicit */int) max((((/* implicit */long long int) ((unsigned int) arr_2 [14LL] [7LL]))), (var_10)));
                                var_17 += ((/* implicit */unsigned int) ((max((arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_1 + 1] [i_1 - 1] [13LL] [i_4]), (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_3] [i_0]))))))) | (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 2386625906U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_0 [10U] [(_Bool)1]))) < ((+(1908341380U)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))))), (var_2)));
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_15)), (((((var_1) || (((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9))))) : ((-(-2986027064565456533LL)))))));
}
