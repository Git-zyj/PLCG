/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238374
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
    var_15 = max((max((max((((/* implicit */unsigned long long int) 33061001U)), (var_4))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_0)), (var_11)))))), (((/* implicit */unsigned long long int) ((((var_4) ^ (((/* implicit */unsigned long long int) var_8)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((((/* implicit */unsigned int) (unsigned short)16972)), (((((/* implicit */_Bool) (short)-166)) ? (4261906295U) : (4261906294U))))))));
                    var_17 += ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)24)) / (((/* implicit */int) var_1))))) * (33060993U))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_5);
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24))) & (min((((/* implicit */unsigned long long int) (unsigned char)195)), (var_6)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_6)))))))));
}
