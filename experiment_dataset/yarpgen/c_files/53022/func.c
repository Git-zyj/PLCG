/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53022
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
    var_19 = ((/* implicit */signed char) min(((unsigned short)17324), (((/* implicit */unsigned short) (unsigned char)255))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [8U])) < (((/* implicit */int) min(((unsigned short)17324), ((unsigned short)52290))))))) << (((((((arr_0 [5U] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)101), ((unsigned char)112))))))) - (14830955399908482302ULL))))))));
                arr_4 [10U] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
            }
        } 
    } 
}
