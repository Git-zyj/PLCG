/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230451
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((min((var_15), (((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    var_18 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    var_20 = ((/* implicit */long long int) var_12);
                    var_21 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)0)))))) <= (((/* implicit */int) (unsigned char)35))));
                    arr_6 [i_0] [i_0] [(unsigned char)20] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)195)) >> (((/* implicit */int) (unsigned short)11))))) / (var_3))));
                }
            }
        } 
    } 
}
