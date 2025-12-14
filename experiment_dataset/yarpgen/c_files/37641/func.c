/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37641
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(var_5))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-31185)) : (((/* implicit */int) var_9)))))))) ? (((/* implicit */int) var_1)) : (((int) ((var_7) * (((/* implicit */int) var_3)))))));
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (_Bool)1))) ? (min((4019268044751674888ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (var_7)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */int) (unsigned char)45)) : (((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)));
                arr_6 [i_0] = ((signed char) (_Bool)1);
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) var_2);
}
