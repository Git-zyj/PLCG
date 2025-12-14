/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241393
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_6 [i_0] [i_0] [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -741840802)) ? (510880314) : (-510880314)))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_6 [i_3] [i_0] [i_3])))))));
                            var_13 *= ((((/* implicit */int) min(((short)1469), (((/* implicit */short) (signed char)102))))) <= (max((((/* implicit */int) (short)1461)), (510880313))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-30549)) + (arr_9 [i_1 - 2] [i_1] [i_1 - 1] [i_1] [i_1 + 1])))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) % (((-510880314) & (((/* implicit */int) (short)-1478)))))) : (((/* implicit */int) var_6))));
                var_15 = ((/* implicit */signed char) min((min((arr_6 [i_1 + 1] [i_0] [i_1 + 1]), (((/* implicit */long long int) var_8)))), (max((((/* implicit */long long int) (short)-1470)), (arr_6 [i_1 + 1] [i_0] [i_1 + 1])))));
                var_16 = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (max((var_5), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)1461))))), (((/* implicit */unsigned int) min(((+(((/* implicit */int) (signed char)102)))), (((/* implicit */int) var_6))))))))));
}
