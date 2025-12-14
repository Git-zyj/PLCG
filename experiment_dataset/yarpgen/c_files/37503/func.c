/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37503
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_17 -= ((/* implicit */unsigned int) min(((unsigned short)59593), (((/* implicit */unsigned short) (signed char)-93))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] = ((/* implicit */signed char) ((((min((((((/* implicit */int) var_10)) / (((/* implicit */int) var_0)))), (((/* implicit */int) var_0)))) + (2147483647))) >> (((((((/* implicit */int) var_5)) << (((((((/* implicit */int) var_0)) + (635))) - (4))))) - (241172474)))));
                                arr_15 [i_0] = ((/* implicit */signed char) var_11);
                                var_18 = ((/* implicit */unsigned short) var_10);
                                var_19 = ((/* implicit */unsigned long long int) var_9);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_8)) << (((var_12) + (7486858040493514811LL))))) >> (((((((/* implicit */long long int) ((/* implicit */int) var_11))) | (var_14))) + (3218LL))))) * (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_4)))))));
}
