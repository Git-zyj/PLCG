/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19435
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
    var_13 = ((/* implicit */int) var_3);
    var_14 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (17176664410895505535ULL) : (((/* implicit */unsigned long long int) -16))))) ? (((/* implicit */int) (short)-7729)) : (((/* implicit */int) ((unsigned short) var_11)))))));
    var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) -16)), (1270079662814046069ULL)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) max((((var_10) ^ (((/* implicit */unsigned long long int) arr_4 [(signed char)8] [i_1])))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (6605141804739128903ULL) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))))));
                var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)82))))), (17176664410895505517ULL)));
                var_17 ^= ((/* implicit */short) var_11);
            }
        } 
    } 
}
