/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27486
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
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_7 [i_1] [i_0] [i_0 + 1] = var_11;
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (int i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (var_0)))))) && (((/* implicit */_Bool) max((((arr_8 [i_0 + 4] [i_0 + 4]) ? (arr_3 [i_1] [i_1]) : (var_0))), (((/* implicit */unsigned int) ((unsigned char) 2782390568U))))))));
                                arr_17 [i_0] [i_1] [i_0] [i_0] [(signed char)0] [i_3 - 3] [i_4 + 1] = ((/* implicit */signed char) min(((_Bool)1), ((!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [(unsigned char)5]))))));
                                var_17 ^= ((/* implicit */short) (~(((((((/* implicit */int) arr_2 [i_1])) + (2147483647))) << (((arr_12 [i_0 + 1] [i_0 + 1] [i_2] [i_3 + 1] [i_3 - 1] [i_4 + 3]) - (1318691079U)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))) >= (((((/* implicit */int) var_2)) - (((/* implicit */int) var_14)))))) ? (-11LL) : (max((var_12), (((/* implicit */long long int) (short)-17241))))));
    var_19 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 262143LL)))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) - (var_3))))));
}
