/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42534
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
    for (unsigned long long int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (-(max((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [19LL])) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_1] [i_0])), ((unsigned short)65535)))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) min(((-(((/* implicit */int) var_7)))), (((/* implicit */int) max((arr_4 [i_0] [i_0]), (arr_4 [i_0] [i_0]))))));
                            var_12 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) max((1462570391), (((/* implicit */int) var_9))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) 1462570390)) : (32767U))))) + (((/* implicit */unsigned int) max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) arr_0 [i_0 + 2] [i_1 - 1])))))));
                            var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) 1073741816U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8)))) : (max((var_2), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0 + 2] [(signed char)20] [i_0 + 2] [i_1 - 2] [i_1]))))));
                            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_2] [i_3]))))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(_Bool)1] [i_2])))));
                            arr_12 [i_0] [i_0] [i_1 + 3] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((int) (!(((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) var_3)))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((_Bool) max((((/* implicit */short) (!((_Bool)1)))), (min((arr_6 [i_0] [i_1] [i_0] [i_0]), (((/* implicit */short) arr_1 [i_1]))))))))));
            }
        } 
    } 
    var_16 = var_9;
}
