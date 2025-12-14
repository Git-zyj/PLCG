/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35614
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
    var_14 = ((/* implicit */int) max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) == (var_7)))) < (((/* implicit */int) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51)))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-51))) + (arr_3 [i_2] [i_1] [i_0])));
                    arr_8 [i_0] [i_1 - 2] [i_1 - 2] [i_0] = ((/* implicit */signed char) min((arr_2 [i_1 - 2] [i_1 - 2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (signed char)59)))))));
                }
            } 
        } 
    } 
}
