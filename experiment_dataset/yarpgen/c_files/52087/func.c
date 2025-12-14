/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52087
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
    var_20 = ((/* implicit */unsigned long long int) ((var_7) <= (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_3))))), (var_14))))));
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) var_10)) : (max((576179277326712832ULL), (((/* implicit */unsigned long long int) -1271890135))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned char) min((1271890135), (((/* implicit */int) arr_1 [(_Bool)1]))));
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) min((1271890135), (((/* implicit */int) var_16))))) ^ (132120576U)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                var_23 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2] [i_3] [i_3]))))) / (((/* implicit */int) var_17))))), (var_12)));
                var_24 = ((/* implicit */signed char) (~(arr_11 [i_2] [i_3])));
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((int) max((arr_11 [i_2] [(unsigned short)4]), (((/* implicit */unsigned long long int) (unsigned char)129))))) << (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_12 [i_2] [i_2])) : (((/* implicit */int) arr_12 [(_Bool)1] [i_3])))))))));
                arr_13 [i_2] [i_2] = ((/* implicit */int) var_17);
            }
        } 
    } 
}
