/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219832
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_11 = ((((int) arr_3 [i_1 + 1] [i_1])) + ((-(-696445564))));
                arr_6 [i_0] = ((/* implicit */int) (unsigned char)209);
                var_12 += ((/* implicit */unsigned int) (~(-3560815858756104590LL)));
            }
        } 
    } 
    var_13 = ((/* implicit */int) min((var_5), (((/* implicit */long long int) var_3))));
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        for (int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (unsigned char i_4 = 2; i_4 < 24; i_4 += 4) 
            {
                {
                    var_14 = ((/* implicit */signed char) ((arr_14 [i_3] [i_4] [i_4] [i_4 + 1]) >> (((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (8191) : (((/* implicit */int) var_0))))), (min((var_2), (4294967295U))))) - (196444763U)))));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)18)) / (arr_11 [i_4 - 1] [i_4 - 1] [i_4 - 2])))) ? (((/* implicit */unsigned long long int) ((arr_11 [i_4 - 2] [i_4 - 1] [i_4 - 1]) / (arr_11 [i_4 - 1] [i_4 + 1] [i_4 + 1])))) : (((((/* implicit */_Bool) -1)) ? (11407402211619561659ULL) : (((/* implicit */unsigned long long int) -16)))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) var_8);
}
