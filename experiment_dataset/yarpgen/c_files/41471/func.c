/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41471
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((11206531002882574561ULL) - (11206531002882574547ULL)))))) : (arr_4 [i_0] [i_0] [i_0]))) != (((((((/* implicit */long long int) ((/* implicit */int) var_6))) | (arr_0 [i_1]))) - (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (944449600U))))))));
                var_14 = ((/* implicit */short) (~((~(arr_4 [i_0] [i_0] [(unsigned char)6])))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 4294967291U)) ? (4U) : (1566696314U)))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (long long int i_6 = 3; i_6 < 8; i_6 += 3) 
                        {
                            {
                                arr_17 [i_3] [i_3] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-26)) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 + 1] [i_3])))))));
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */unsigned long long int) -1433283999)) : (3ULL))))));
                                var_17 += ((/* implicit */unsigned char) (-(max((min((arr_15 [i_2] [i_3] [i_4] [i_5] [i_6]), (((/* implicit */int) arr_2 [i_4] [i_3] [i_4])))), (((/* implicit */int) var_5))))));
                                arr_18 [i_2] [i_2] [i_2] [i_3] [i_6] = ((/* implicit */long long int) max((min(((~(17127824548139221188ULL))), (((/* implicit */unsigned long long int) 236506973U)))), (((/* implicit */unsigned long long int) arr_4 [i_2 - 1] [i_3] [i_3]))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_2 [i_2 + 1] [i_3] [i_4])) - (((/* implicit */int) arr_2 [i_2 + 1] [i_4] [i_4]))))));
                    var_19 = ((/* implicit */_Bool) max(((-(max((((/* implicit */long long int) var_9)), (var_12))))), (((arr_13 [i_2 - 1] [i_2 - 1]) / (arr_13 [i_2 - 1] [i_2 - 1])))));
                }
            } 
        } 
    } 
}
