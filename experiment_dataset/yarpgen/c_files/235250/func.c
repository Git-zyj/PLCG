/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235250
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
    var_20 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) arr_0 [(short)9])) / (arr_4 [(unsigned short)16])))))));
                arr_6 [i_0] [i_1] = ((((/* implicit */int) (short)-32745)) & (((/* implicit */int) (_Bool)1)));
                arr_7 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_10))))), (((((/* implicit */int) var_18)) * (((/* implicit */int) var_4))))))) * (((long long int) var_2))));
}
