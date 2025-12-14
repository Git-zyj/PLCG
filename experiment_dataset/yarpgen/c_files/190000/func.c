/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190000
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
    var_14 = ((/* implicit */unsigned long long int) var_4);
    var_15 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (~((-(arr_10 [i_0] [i_0 - 3] [i_3 + 1])))));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((95270093) != (((/* implicit */int) (unsigned char)187)))))));
                                var_18 = ((/* implicit */short) (((-(((/* implicit */int) arr_16 [i_0 - 2] [i_3 - 1] [i_3 - 1] [i_4 - 1])))) < (((((/* implicit */int) arr_16 [i_0 + 2] [i_3 + 1] [i_3 + 2] [i_4 + 2])) - (((/* implicit */int) arr_15 [i_0 - 1] [i_3 + 1] [i_2] [i_3 - 1] [i_2]))))));
                            }
                        } 
                    } 
                } 
                arr_17 [(unsigned char)6] = min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) ((unsigned char) arr_4 [i_0 - 4]))));
            }
        } 
    } 
}
