/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247607
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
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3] [i_0 - 1] [i_0])) * (((((/* implicit */int) arr_9 [(unsigned short)10] [i_0] [i_2] [i_0] [i_0 - 2] [i_3])) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_3] [i_0 - 1] [i_1]))))));
                            var_15 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_3 [(unsigned short)10] [i_0] [i_0 - 2])) / (((/* implicit */int) arr_3 [(short)1] [i_1] [i_0 - 1])))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 + 3] [i_0] [i_0]))) : (arr_0 [i_0])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (arr_4 [i_1] [i_1] [i_0 + 2] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_1])))))));
                var_17 = (i_0 % 2 == 0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_13))) + (9223372036854775807LL))) >> ((+(((/* implicit */int) arr_7 [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_1] [23U] [i_1])), (arr_3 [i_0] [i_0] [i_0 + 1]))))) == (min((((/* implicit */long long int) var_0)), (var_12)))))) : (((/* implicit */int) arr_9 [i_0 - 2] [i_0] [(signed char)7] [i_0] [i_0 - 2] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_13))) + (9223372036854775807LL))) >> ((((+(((/* implicit */int) arr_7 [i_0])))) - (83)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0] [i_1] [23U] [i_1])), (arr_3 [i_0] [i_0] [i_0 + 1]))))) == (min((((/* implicit */long long int) var_0)), (var_12)))))) : (((/* implicit */int) arr_9 [i_0 - 2] [i_0] [(signed char)7] [i_0] [i_0 - 2] [i_0])))));
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */long long int) arr_8 [i_0] [6U] [i_0] [i_0 + 2] [i_1] [i_1])), (var_4)))))));
                var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_0 + 3] [5U] [i_0] [i_0])) && (((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), (arr_5 [i_0 + 2] [i_0 + 2] [i_0] [(unsigned short)0]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) var_8);
}
