/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46912
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
    var_11 -= ((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) ((var_6) < (((/* implicit */long long int) 4294967292U))))), (((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229))))))));
    var_12 = ((/* implicit */unsigned long long int) min(((_Bool)1), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_3)), (var_7)))) || (((/* implicit */_Bool) var_8))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (var_10)))) ? (((/* implicit */int) (short)-10782)) : (((/* implicit */int) (_Bool)1))))), (var_0)));
                    var_14 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-10810)) && (((/* implicit */_Bool) min((2199023255551ULL), (((/* implicit */unsigned long long int) var_1)))))))) & (((/* implicit */int) arr_3 [i_2]))));
                    var_15 = min((var_7), (arr_6 [i_0]));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */long long int) ((max((((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_6)))) % (((15699715803812937081ULL) / (((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) var_0))))))));
}
