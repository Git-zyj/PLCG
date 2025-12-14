/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237185
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            {
                var_13 += ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_9)))))))) < ((~((+(((/* implicit */int) (signed char)-40))))))));
                var_14 -= ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) arr_5 [i_1 - 1] [i_1 + 1] [i_0])), (min((((/* implicit */unsigned long long int) (unsigned short)1339)), (arr_1 [i_0] [1ULL])))))));
                var_15 = ((int) (-(((((/* implicit */_Bool) var_9)) ? (-477701437) : (477701445)))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        for (int i_3 = 1; i_3 < 14; i_3 += 4) 
        {
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((int) (unsigned char)185)))));
                arr_11 [(_Bool)1] [i_2] [i_2] = ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)195)) - (((/* implicit */int) arr_4 [i_2]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (var_6))))) / (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (short)32495)))), (((((/* implicit */int) var_10)) + (477701437)))))));
                var_18 += ((/* implicit */unsigned char) (-(max((max((((/* implicit */unsigned long long int) arr_6 [i_2] [i_2])), (var_6))), (((/* implicit */unsigned long long int) arr_6 [(_Bool)1] [4LL]))))));
            }
        } 
    } 
}
