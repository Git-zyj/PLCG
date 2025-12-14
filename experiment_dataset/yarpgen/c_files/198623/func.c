/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198623
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_19 = max(((((!((_Bool)0))) ? (((/* implicit */int) arr_0 [i_1 - 2])) : (((/* implicit */int) (_Bool)0)))), (((int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (!(((((/* implicit */int) min((((/* implicit */short) var_18)), ((short)25288)))) <= (((/* implicit */int) var_12))))));
    var_21 -= ((/* implicit */unsigned long long int) max((max(((+(((/* implicit */int) var_12)))), (((/* implicit */int) var_2)))), (((/* implicit */int) (unsigned short)25598))));
}
