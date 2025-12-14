/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206853
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
    var_19 = ((/* implicit */unsigned short) ((long long int) max((((/* implicit */int) (_Bool)1)), (var_4))));
    var_20 = ((/* implicit */unsigned short) ((var_9) & (((/* implicit */long long int) min((var_4), ((((_Bool)1) ? (var_4) : (var_8))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) (((-(((/* implicit */int) ((((/* implicit */long long int) -77892657)) > (var_14)))))) * (((arr_5 [i_0] [i_0] [i_0]) / (((/* implicit */int) (_Bool)1))))));
                arr_7 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(arr_5 [(unsigned short)8] [i_1] [i_1])))), (18446744073709551615ULL)));
                arr_8 [i_0] [i_0] = ((/* implicit */signed char) max((((int) (_Bool)1)), (((((/* implicit */int) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) 1885488634))))) * (((/* implicit */int) arr_2 [i_0]))))));
            }
        } 
    } 
}
