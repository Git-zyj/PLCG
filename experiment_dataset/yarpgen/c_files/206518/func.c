/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206518
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46805))) <= (min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_8)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                arr_6 [i_1 - 1] [i_0 + 1] = arr_1 [i_1] [i_1];
                var_19 -= ((/* implicit */long long int) ((((arr_4 [i_0 - 2]) <= (arr_4 [i_0 + 2]))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((short) (((-(((/* implicit */int) (short)18137)))) - (((/* implicit */int) var_16)))));
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min((var_0), (((/* implicit */long long int) (-(var_5)))))))));
}
