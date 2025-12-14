/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206421
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
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)24317))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [8ULL] [i_0] &= ((/* implicit */_Bool) ((short) (-(var_1))));
        var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_2 [i_0] [i_0]))))));
        arr_5 [i_0] = ((/* implicit */short) var_0);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned short) (signed char)-76);
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((unsigned short) (unsigned short)24313)))));
        var_17 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) 535047847)) ^ (2928326037672625440LL)));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) arr_10 [i_2]))));
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_9 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10261)))));
        var_19 |= ((/* implicit */int) var_12);
    }
}
