/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20657
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_17))))))) | (((((((((/* implicit */int) (short)-17761)) ^ (((/* implicit */int) (short)17761)))) + (2147483647))) << (((((((((/* implicit */int) (unsigned short)11062)) * (((/* implicit */int) (short)-17762)))) + (196483263))) - (19)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 3; i_2 < 23; i_2 += 4) 
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) var_10);
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_6))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((696028735U) ^ (((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)22347)) / (1793841080)))))))))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned long long int) (unsigned short)47620)))));
                }
                arr_9 [(signed char)6] [(signed char)6] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-17761)) + (2147483647))) << (((var_16) - (1008662026229208859ULL)))));
            }
        } 
    } 
}
