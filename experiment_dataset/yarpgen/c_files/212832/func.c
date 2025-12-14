/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212832
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
    var_14 ^= ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((short) arr_0 [i_0 - 2]))), (((((/* implicit */_Bool) (signed char)41)) ? (3834460862U) : (460506448U)))));
                var_15 ^= ((/* implicit */short) arr_3 [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) 3834460871U);
    var_17 += ((/* implicit */long long int) ((((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (var_4))) || (((/* implicit */_Bool) var_1))))) != (((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_11))))));
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        for (long long int i_3 = 3; i_3 < 18; i_3 += 1) 
        {
            for (unsigned short i_4 = 4; i_4 < 19; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_6 [i_6])) ? (((/* implicit */int) var_8)) : (arr_9 [i_2] [i_3 + 2])))));
                                var_19 = ((var_2) * (((arr_13 [i_3] [i_3 - 1] [i_3 + 2]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_13))))) : (arr_14 [(unsigned short)5] [17ULL] [i_3] [6LL]))));
                                var_20 = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */unsigned long long int) 721302566U)), (4447999503663752794ULL))));
                            }
                        } 
                    } 
                    arr_18 [i_2] [i_3] [i_4] = ((/* implicit */short) (-((((~(((/* implicit */int) var_6)))) | (((((/* implicit */int) var_11)) & (((/* implicit */int) var_6))))))));
                }
            } 
        } 
    } 
}
