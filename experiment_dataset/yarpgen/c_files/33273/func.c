/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33273
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_6 [i_0]))))) ? ((+(13175514546974392080ULL))) : (((/* implicit */unsigned long long int) var_0))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 - 2])) ? (((/* implicit */long long int) var_4)) : (5015006631724976777LL)))) > (((var_8) + (((/* implicit */unsigned long long int) arr_3 [i_1 - 1]))))));
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) max((((unsigned int) 5271229526735159535ULL)), (((/* implicit */unsigned int) var_7)))))));
                            }
                        } 
                    } 
                    var_13 *= min((((/* implicit */long long int) (((+(var_1))) <= (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (((((/* implicit */long long int) max((((/* implicit */int) arr_9 [i_0] [i_1] [1LL] [i_2] [i_0])), (var_6)))) + (arr_2 [5LL] [i_2] [i_0]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (long long int i_6 = 3; i_6 < 8; i_6 += 3) 
        {
            {
                var_14 ^= ((/* implicit */unsigned int) var_2);
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 5271229526735159511ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_13 [i_5])))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) var_2)) >> (((/* implicit */int) var_5)))) : (var_0))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (arr_12 [i_5])))))))));
            }
        } 
    } 
}
