/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201865
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
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) 33521664)) / (1077516118U))) / (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))) : (5473325100214417790LL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_21 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2]))) : (-5473325100214417790LL))), (((/* implicit */long long int) max((1077516116U), (((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_0 + 2])))))));
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 11708406130894315465ULL)) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((((/* implicit */_Bool) arr_2 [19ULL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (5473325100214417783LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))))) : (-5473325100214417790LL))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0] [i_1] [(signed char)13] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [6] [i_3 + 2]))));
                            arr_15 [i_3] = ((/* implicit */int) (~((+(arr_2 [i_0 + 1])))));
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (short)-32757))));
                            arr_16 [i_0] [i_0 + 2] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) 266837926));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 266837935)) ? (((((/* implicit */unsigned long long int) (-(var_2)))) / (max((((/* implicit */unsigned long long int) 488350649U)), (var_7))))) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
}
