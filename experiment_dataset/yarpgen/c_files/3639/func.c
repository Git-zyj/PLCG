/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3639
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? ((~(18446744073709551603ULL))) : (((/* implicit */unsigned long long int) max((min((arr_1 [i_1] [i_1]), (((/* implicit */unsigned int) (unsigned char)171)))), (((/* implicit */unsigned int) (unsigned char)193)))))));
                arr_6 [i_0] [i_0] = ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])), (var_6))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_1)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_11))))) : (7359708188258516649ULL))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((18446744073709551593ULL), (((/* implicit */unsigned long long int) arr_14 [i_4 - 1] [i_4 - 1] [10] [i_4 - 1]))))) ? (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned long long int) (+((-9223372036854775807LL - 1LL))))) : (15ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_4 - 1]))))))))));
                    var_15 &= ((/* implicit */long long int) ((((((var_5) ? (((/* implicit */unsigned long long int) var_8)) : (var_6))) * ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_1))))) / (((((/* implicit */_Bool) 1422587618)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_3]))))) : ((~(var_1)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) 23ULL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (4017733998U)))))))));
}
