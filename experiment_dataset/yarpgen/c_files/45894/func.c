/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45894
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)16384))))) | (var_7)))) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)127)) : (((/* implicit */int) var_5)))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-49)), ((unsigned char)99)))))) : (((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)49138)) == (((/* implicit */int) (short)-30681))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */short) 11817327006217416194ULL);
                var_18 = ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
}
