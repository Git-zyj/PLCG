/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242940
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_20 ^= ((/* implicit */unsigned int) ((unsigned long long int) min((arr_3 [i_0 - 1]), (arr_3 [i_0 + 1]))));
                arr_4 [(short)7] [i_0 + 1] [i_1] |= ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_12)))))))));
            }
        } 
    } 
    var_21 += ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((((/* implicit */int) (short)17016)) ^ (((/* implicit */int) (short)23494)))), ((~(((/* implicit */int) (short)23498))))))), (224936798U)));
    var_22 &= ((/* implicit */_Bool) max((min((((/* implicit */unsigned short) (short)-23494)), ((unsigned short)52684))), (((unsigned short) (short)-23494))));
    var_23 = ((/* implicit */signed char) var_4);
}
