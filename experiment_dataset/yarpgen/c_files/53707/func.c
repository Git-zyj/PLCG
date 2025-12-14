/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53707
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_13 [i_3] [i_1] [(unsigned char)14] [i_3] [i_4] [(unsigned char)14] [i_4 - 1] = max((((((/* implicit */long long int) ((/* implicit */int) (signed char)-122))) & (-6490384286858319552LL))), (min((((/* implicit */long long int) min((var_4), (((/* implicit */short) arr_6 [i_0] [i_1] [i_2 - 2]))))), (arr_5 [i_2 + 3] [i_3] [i_4] [i_0]))));
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2 + 2])) ? (((/* implicit */int) arr_2 [i_4 + 1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_4 + 2] [i_0 + 1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_4 + 2] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_4 - 1] [i_0 - 1])))))));
                                var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)32750)) && ((!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_4 + 2]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_5] [i_0 - 1]))) / (min((-7624940959573293661LL), (7624940959573293634LL)))));
                                arr_19 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [4ULL] [i_2 + 3] [(short)4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((var_13), (var_14))), (((/* implicit */short) var_2)))))) : (((((/* implicit */unsigned long long int) ((arr_6 [i_0] [i_1] [i_2]) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_2] [i_5])) : (((/* implicit */int) arr_18 [i_2 + 1] [i_2 + 1] [(_Bool)1]))))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [(unsigned char)6] [i_2] [i_5] [i_6])) : (arr_11 [i_6] [i_0] [i_0])))))));
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1 + 3] [i_1])), (arr_7 [i_0] [i_1] [i_0 + 1] [i_2 - 2] [i_6 - 1])))) ? (min((((/* implicit */unsigned long long int) ((-7624940959573293681LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30)))))), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)32765), ((short)-32765))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */signed char) min((var_10), (((/* implicit */unsigned short) var_0))));
    var_21 = ((((min((var_8), (((/* implicit */long long int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_10))))))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_10)) - (44615))));
}
