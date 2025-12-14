/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37722
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
    var_19 ^= ((/* implicit */unsigned long long int) var_1);
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((/* implicit */int) var_5)), (min((min((-1838880316), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((var_15) == (var_12)))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 4; i_2 < 12; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_2 [i_1] [i_1]))));
                    arr_10 [i_1] &= ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
                    var_22 ^= ((/* implicit */unsigned int) ((min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) > (((/* implicit */int) (unsigned char)0)))))));
                }
            } 
        } 
    } 
}
