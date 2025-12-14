/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54737
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
    var_16 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_17 ^= ((/* implicit */unsigned char) 430549669U);
                var_18 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) 430549673U)), (6013336364447390079LL))) << ((((((~((~(-2729072988562707471LL))))) + (2729072988562707532LL))) - (61LL)))));
                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62557)) ? (((/* implicit */int) ((((arr_1 [i_0] [i_0]) >> (((/* implicit */int) arr_4 [(_Bool)1] [i_1])))) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86)))))) <= (var_1))))));
            }
        } 
    } 
}
