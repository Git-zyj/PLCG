/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219532
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : ((+(((((/* implicit */_Bool) (unsigned char)139)) ? (var_15) : (var_2)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_5))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (unsigned char)3);
                                arr_15 [i_0] [i_3 - 1] [i_2] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_2] [i_1 - 3] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)62720))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43430)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_4]))))) : (min((((/* implicit */unsigned long long int) var_12)), (arr_5 [i_3] [i_4])))))));
                                arr_16 [i_0] = ((/* implicit */unsigned char) -2147483642);
                                arr_17 [(signed char)20] [i_1] [12ULL] [0] &= arr_3 [i_1 - 3] [i_1 - 3];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
