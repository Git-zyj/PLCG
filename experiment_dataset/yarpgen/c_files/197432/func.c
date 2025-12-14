/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197432
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
    for (int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_2 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_0 + 1] [i_2 + 1] [i_2 - 1]) != (arr_9 [i_0 + 1] [i_2 + 1] [i_2]))))) : (((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_2 + 2] [i_2])) ? (arr_5 [i_0 - 2]) : (((/* implicit */long long int) arr_9 [i_0 + 1] [i_2 + 2] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_17 [i_2] [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((((((/* implicit */int) arr_0 [i_3])) + (2147483647))) >> (((((((/* implicit */_Bool) (signed char)64)) ? (var_14) : (((/* implicit */unsigned long long int) arr_9 [i_4] [(_Bool)1] [i_0])))) - (15767695989398913271ULL))))) : (((/* implicit */int) (unsigned short)54595))));
                                var_20 ^= ((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_1]);
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (arr_5 [i_3])))) ? ((+((+(((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1918215880790758185ULL)) ? (((/* implicit */int) (short)-15045)) : (((/* implicit */int) (_Bool)1))))) ? (min((arr_10 [i_0] [i_1] [i_2] [i_1]), (arr_10 [i_1] [i_2] [i_2] [i_4]))) : (((/* implicit */int) var_15))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */unsigned int) var_14);
}
