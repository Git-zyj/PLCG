/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/255
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
    var_12 ^= ((((((/* implicit */_Bool) var_3)) ? (max((0ULL), (((/* implicit */unsigned long long int) (short)0)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-2)), (var_4)))))) >> (((var_6) - (212359645))));
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) max((((var_6) & (((/* implicit */int) ((unsigned short) 0ULL))))), (((/* implicit */int) min((((signed char) var_1)), (var_8)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 -= ((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)84)) | (((/* implicit */int) (signed char)127))))));
        var_15 = ((/* implicit */unsigned long long int) var_4);
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((min((((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])), (arr_1 [i_1 - 1]))) & (((((((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])) + (2147483647))) << (((arr_6 [i_1 + 1]) - (3942565548803962225ULL)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        arr_16 [i_1] [i_1] [i_2] [i_3] [i_1] [i_4 + 1] = ((/* implicit */signed char) (~(arr_3 [i_4 + 1])));
                        var_17 = ((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) & (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1)))) | (611373201568440227LL)))));
                    }
                }
            } 
        } 
        arr_17 [i_1] = min((min((((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30))) : (3ULL))), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) (!(((_Bool) (signed char)120))))));
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_21 [i_5] = max((arr_2 [i_5 - 1] [i_5 - 1]), (arr_3 [i_5 - 1]));
        arr_22 [(short)5] [i_5] = ((((/* implicit */_Bool) ((arr_19 [i_5 - 1] [i_5 - 1]) + (((/* implicit */int) arr_0 [i_5] [i_5 - 1]))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_18 [i_5 - 1])))))) : (((/* implicit */int) var_1)));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_20 [i_5 - 1]))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_20 [i_5 - 1])), (0ULL))))));
        arr_23 [i_5] [i_5] = ((/* implicit */int) ((18446744073709551603ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)122), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_1 [i_5])) == (549755813887ULL))))))))));
    }
}
