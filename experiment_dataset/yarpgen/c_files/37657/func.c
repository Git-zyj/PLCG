/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37657
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(signed char)18] = ((/* implicit */long long int) ((arr_3 [i_0] [i_1] [i_1]) >= (max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) >> (0ULL))))))));
                var_13 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_2)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((var_6) >> (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) - (69))))))))) + (((((18446744073709551615ULL) % (1ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) -918502414);
                arr_8 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_3 [i_0] [(unsigned short)11] [i_0]))), (arr_3 [i_0] [i_1] [i_1])));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_14 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) <= (var_3))))) >= (max((var_1), (((/* implicit */unsigned long long int) arr_2 [i_2] [i_2] [i_2]))))))) >= (((/* implicit */int) var_4))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 3; i_3 < 14; i_3 += 4) 
        {
            for (unsigned int i_4 = 2; i_4 < 14; i_4 += 4) 
            {
                {
                    arr_16 [i_3] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL))))))), (max((((((/* implicit */int) var_8)) % (var_6))), (((/* implicit */int) arr_11 [i_2] [i_2]))))));
                    var_15 += ((((/* implicit */unsigned long long int) ((int) var_9))) >= (18ULL));
                }
            } 
        } 
    }
}
