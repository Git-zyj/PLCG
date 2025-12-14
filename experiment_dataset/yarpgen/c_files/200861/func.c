/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200861
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
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0 - 1] [i_0] [i_0] = ((/* implicit */signed char) ((arr_4 [i_1 - 1] [i_0 + 3] [i_0 - 1]) ^ (max((((11U) >> (((-4834322543553706409LL) + (4834322543553706412LL))))), (arr_4 [i_0] [i_1 - 1] [i_1])))));
                var_14 &= ((/* implicit */_Bool) (-(arr_1 [i_0])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            {
                var_15 &= (!(((/* implicit */_Bool) 3563369395U)));
                var_16 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24))) : (arr_10 [i_2] [i_2] [i_2])));
                var_17 = ((/* implicit */_Bool) var_6);
                arr_11 [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_10 [i_2] [i_2] [i_3])) + (-298409725916394776LL))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)12862))) - (411539461U))) * (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)2610)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) | (((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((-298409725916394779LL) - (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
}
