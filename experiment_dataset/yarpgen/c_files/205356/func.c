/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205356
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (min((((/* implicit */long long int) arr_4 [i_0])), (72057594037927935LL))))), (((/* implicit */long long int) (_Bool)1))));
                    var_16 = ((/* implicit */unsigned char) -4154846140475927637LL);
                }
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_4 [i_1 - 1])), (max((min((((/* implicit */unsigned int) (_Bool)1)), (var_10))), (((/* implicit */unsigned int) (_Bool)1))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((long long int) var_3));
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */_Bool) var_7);
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_3]))) & (min((-4947405109631757320LL), (((/* implicit */long long int) arr_3 [i_3]))))));
        /* LoopSeq 1 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)59)) < (((/* implicit */int) ((unsigned char) 4095U)))));
            var_20 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 + 1]))) : (0LL))))));
        }
        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), ((unsigned short)36392))))) : (arr_6 [i_3] [i_3] [i_3])))));
    }
}
