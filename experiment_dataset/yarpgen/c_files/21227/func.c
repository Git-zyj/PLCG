/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21227
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min(((+((+(arr_5 [i_0] [i_1]))))), (min((((arr_5 [i_1] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)30019)))))))));
                var_18 = ((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)-6872)));
                var_19 = ((/* implicit */int) arr_3 [i_0]);
                arr_6 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65521)))))), (max((((/* implicit */long long int) (short)13505)), (var_11))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_15))));
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)496))) : (var_6))))));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_11)) == (var_2)));
}
