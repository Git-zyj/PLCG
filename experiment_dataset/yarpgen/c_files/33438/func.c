/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33438
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
    var_14 = ((/* implicit */signed char) min((max((var_12), (((/* implicit */long long int) (signed char)33)))), (((/* implicit */long long int) var_9))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_0 [i_2 - 1]))))) % (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-5)) || (((/* implicit */_Bool) arr_0 [i_2 - 1])))))));
                            arr_9 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1])) + (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]))))) ? (((((/* implicit */_Bool) arr_1 [i_2 - 1])) ? (((/* implicit */long long int) ((var_2) >> (((var_1) - (17985902832280487546ULL)))))) : (8810937527811813328LL))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_1]) != (((/* implicit */long long int) ((((/* implicit */_Bool) 140703128616960LL)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [(unsigned char)3])) : (((/* implicit */int) arr_3 [i_2] [i_1] [i_2 - 1])))))))))));
                            arr_10 [i_0] [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) ((arr_5 [i_0] [i_1] [i_2]) ? (arr_6 [i_0] [i_1] [(signed char)9] [i_0] [i_3] [i_1]) : (((unsigned long long int) arr_1 [i_2 - 1]))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) ((((arr_7 [i_0] [i_1] [i_1]) + (9223372036854775807LL))) << (((max((((((-8810937527811813359LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_3)) - (223))))), (((/* implicit */long long int) max((arr_0 [i_1]), (((/* implicit */short) (_Bool)1))))))) - (100692018809317LL)))));
            }
        } 
    } 
    var_16 = ((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
}
