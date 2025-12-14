/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191151
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
    var_12 = var_9;
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [(signed char)7] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0 + 4] [i_0 + 4])) || (((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0 - 3])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0 - 3] [i_0 - 3])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_4)))))));
                    arr_8 [i_0] [i_1] [(unsigned char)3] = ((/* implicit */long long int) min((((unsigned int) (~(((/* implicit */int) (short)7))))), (((/* implicit */unsigned int) (_Bool)1))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_13 = (~(var_7));
                    var_14 = ((/* implicit */unsigned long long int) ((unsigned short) (~(((((/* implicit */_Bool) arr_15 [i_5 - 1] [i_3] [i_3])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_8)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (signed char)-39);
}
