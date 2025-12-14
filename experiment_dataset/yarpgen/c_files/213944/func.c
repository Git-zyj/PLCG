/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213944
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7481)) ? ((+((+(((/* implicit */int) (unsigned short)38970)))))) : ((~(max((((/* implicit */int) (short)7493)), (arr_4 [i_0])))))));
                var_14 = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((var_4), (((/* implicit */long long int) (((~(((/* implicit */int) var_11)))) * (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)15)))))))));
                var_16 = ((/* implicit */unsigned short) max(((-(max((arr_8 [i_2]), (((/* implicit */int) arr_6 [i_2])))))), (((/* implicit */int) (short)-7483))));
                var_17 = ((/* implicit */unsigned char) max((1419833309188173920LL), (((/* implicit */long long int) ((short) ((int) var_7))))));
                arr_13 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2]))) / (var_6)))) ? (max((((/* implicit */unsigned long long int) (unsigned short)26566)), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))))) : ((((!(((/* implicit */_Bool) var_4)))) ? (15678833597578040437ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_0))))))))));
            }
        } 
    } 
    var_18 = var_5;
}
