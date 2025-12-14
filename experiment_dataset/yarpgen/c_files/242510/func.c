/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242510
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
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 6; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)18685)), (arr_3 [i_2 - 2])))) / (((long long int) ((unsigned short) 2ULL)))));
                    var_21 |= ((((/* implicit */int) (unsigned short)65535)) ^ ((((~(((/* implicit */int) arr_4 [i_2] [(short)5] [i_0])))) ^ (-266189376))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) (~(((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15)))))));
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (signed char)120))) && (((/* implicit */_Bool) 1460662442))));
}
