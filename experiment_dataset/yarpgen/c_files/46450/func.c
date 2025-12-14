/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46450
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_0 [i_1 + 1] [i_1 - 3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_1])))))))), (((((/* implicit */_Bool) max((2376715151655727285ULL), (9393702127954237606ULL)))) ? (((unsigned long long int) arr_4 [i_0])) : (((((/* implicit */_Bool) 5530851690026327270ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (var_5))))))))));
                arr_5 [i_0] [i_0] = ((((((/* implicit */_Bool) var_5)) ? (arr_0 [i_1 - 3] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4071765799U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0])))))))) | (((/* implicit */unsigned long long int) var_6)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) arr_7 [i_2]);
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_11) ^ (var_12)))))))));
                    var_16 += ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_2])))))));
                }
            } 
        } 
    } 
}
