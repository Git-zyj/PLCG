/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235621
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_18 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)199)) ^ (((/* implicit */int) (signed char)-111))));
                    var_19 += ((/* implicit */signed char) min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)111)), ((unsigned char)0)))), ((~(((unsigned int) arr_5 [i_0] [i_0] [i_2] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((min(((+(((/* implicit */int) var_3)))), ((+(((/* implicit */int) var_8)))))) % ((+(((/* implicit */int) var_14))))));
                var_21 += ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_7 [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_7 [i_4 - 1] [i_4 - 1])))) + (2147483647))) << (((((unsigned int) var_9)) - (109U)))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? ((((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((var_5) - (1349132699U))))) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)127)), (var_0))))))) : (((/* implicit */long long int) 2851593163U))));
}
