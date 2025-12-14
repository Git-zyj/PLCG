/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35517
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_7 [(unsigned short)2] [i_1 - 1] [10LL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1736125532394003714LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)));
            var_16 -= ((/* implicit */unsigned long long int) arr_4 [(unsigned short)10] [(unsigned char)7]);
            var_17 = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(signed char)10])) || (((/* implicit */_Bool) var_5)))))) <= (var_9)));
        }
        /* LoopSeq 1 */
        for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            var_19 = arr_1 [i_0] [i_2];
            var_20 |= ((/* implicit */unsigned int) (~(((((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (arr_3 [i_0])))) % (((var_5) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)177)))))))));
            var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0])) & (((/* implicit */int) arr_2 [i_0] [i_0]))))), ((((!((_Bool)1))) ? ((((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0])))))));
            var_22 = ((/* implicit */long long int) arr_8 [i_0] [i_2] [i_0]);
        }
        var_23 ^= ((/* implicit */unsigned int) min((((_Bool) (+((-9223372036854775807LL - 1LL))))), (((((/* implicit */int) (unsigned short)254)) < (((((/* implicit */int) (signed char)85)) * (((/* implicit */int) (unsigned short)28187))))))));
    }
    var_24 += ((/* implicit */long long int) ((signed char) min((var_15), (((/* implicit */unsigned int) var_3)))));
}
