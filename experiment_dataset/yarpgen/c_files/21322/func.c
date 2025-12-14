/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21322
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
    var_16 += ((/* implicit */short) ((var_10) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3626626870U)) ? (((/* implicit */unsigned long long int) 125444905U)) : (1447988062284699821ULL))))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)103)) >> (((16998756011424851796ULL) - (16998756011424851794ULL)))))) || (((((/* implicit */int) (signed char)-79)) >= (((/* implicit */int) var_14))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_18 = ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 3416133210U)) || (((/* implicit */_Bool) (signed char)107)))))) >> (((((((/* implicit */int) var_10)) + (((/* implicit */int) var_3)))) - (171))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) 0LL);
                }
            } 
        } 
    } 
}
