/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201456
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned int) ((unsigned short) 2514609930U))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16))) : (var_10)))) ? (1169732139U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)16)))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((min((var_6), (((/* implicit */long long int) arr_2 [i_0] [i_0])))), (((/* implicit */long long int) var_1))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */int) (short)21834)) - (((/* implicit */int) min((((/* implicit */short) ((var_12) < (var_3)))), (var_8))))));
    var_17 = ((/* implicit */long long int) ((unsigned char) (~(5184941291204617931ULL))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-19)) < (((/* implicit */int) (signed char)-35))))), (1001581159U))) : (((/* implicit */unsigned int) (+((+(((/* implicit */int) (signed char)26)))))))));
}
