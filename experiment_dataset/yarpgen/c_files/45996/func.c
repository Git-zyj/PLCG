/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45996
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((unsigned char) min((3702533667U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2925)) ? (((/* implicit */int) (unsigned short)62608)) : (351838717))))))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 1])) ? (((/* implicit */int) ((arr_5 [i_1 + 2] [i_1 - 2]) == (((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1]))))) : (((/* implicit */int) ((arr_5 [i_1 + 2] [i_1 - 1]) <= (arr_5 [i_1 - 4] [i_1 + 1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) arr_10 [i_2] [i_3] [i_4]))));
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) 4282457064363185107ULL)) ? (((((/* implicit */_Bool) var_10)) ? (arr_8 [i_2] [i_2]) : (arr_8 [i_2] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_3])))));
                    arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_2]);
                }
            } 
        } 
    } 
    var_17 += ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -8039373622509231941LL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)21260)))))))) ? (((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) (short)27421)), (0ULL))))) : (((/* implicit */int) var_7)));
}
