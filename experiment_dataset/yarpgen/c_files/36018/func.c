/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36018
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
    var_11 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-25445)))) + (2147483647))) << (((var_1) - (6316993489808926513LL)))))) ? (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((var_5) << (((var_9) - (14198651456549979416ULL))))))));
    var_12 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-14092)), (var_2)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 *= ((/* implicit */short) ((unsigned int) ((-1454048893020891118LL) / (arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_16 [i_2] [i_4] = ((/* implicit */unsigned long long int) var_6);
                                arr_17 [i_0] [(unsigned char)24] [i_2] [(short)19] [i_0] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])), (arr_7 [i_4] [(unsigned short)4] [i_1] [2LL]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)15836)) && (((/* implicit */_Bool) (short)-14092)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
