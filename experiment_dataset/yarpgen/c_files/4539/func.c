/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4539
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
    var_19 = ((((/* implicit */int) ((((/* implicit */int) ((17047559312065762403ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 1399184761643789212ULL)))))))) >= (((/* implicit */int) var_15)));
    var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_0)) ? (4611686018158952448ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967295U))))))));
    var_21 = ((/* implicit */_Bool) (unsigned char)252);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */long long int) var_7);
                    arr_9 [i_0] [i_0] [(short)0] [i_0] = ((/* implicit */long long int) ((1399184761643789212ULL) * (2305843009213169664ULL)));
                }
            } 
        } 
    } 
}
