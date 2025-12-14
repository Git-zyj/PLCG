/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249627
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((int) arr_3 [i_0])))));
                    var_17 -= ((/* implicit */short) min(((-(arr_2 [i_2 + 1] [i_0]))), (arr_2 [i_2 - 1] [i_2])));
                    var_18 = ((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_1] [i_2]), (((long long int) ((unsigned long long int) 4539628424389459968ULL)))));
                    var_19 = ((/* implicit */_Bool) (-(arr_4 [i_0] [i_1] [i_0])));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_14)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)27869)) : (((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) var_7)) ? (min((8ULL), (((/* implicit */unsigned long long int) (unsigned char)29)))) : (var_5))))))));
    var_21 -= ((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */short) var_11))))), ((-(var_2)))))));
    var_22 &= ((/* implicit */int) var_11);
}
