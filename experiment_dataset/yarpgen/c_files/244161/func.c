/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244161
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
    for (short i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1])) == (((((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_3 [i_0] [i_1] [i_0 - 2]))) << (((min((((/* implicit */unsigned int) var_8)), (3552794787U))) - (22791U)))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (max((((/* implicit */unsigned int) ((short) var_4))), (457607839U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((9223372036854775807LL) >> (((1666129607433663770LL) - (1666129607433663729LL)))))) || (((/* implicit */_Bool) 4294967295U))))))));
                var_20 = ((/* implicit */unsigned int) var_1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (short i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */long long int) 4294967295U)), (((7609584237807869741LL) << (((((/* implicit */_Bool) (short)27294)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)15042))))))));
                arr_13 [i_3] = ((/* implicit */unsigned long long int) -7575524664914253537LL);
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24576))) | (min((arr_3 [i_3] [i_3 - 1] [i_2]), (((/* implicit */unsigned long long int) arr_1 [i_3 + 1])))))))));
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((long long int) -8527389444099936952LL))))) ? (arr_0 [i_3 + 1] [i_3 - 1]) : (((/* implicit */int) (signed char)63)))))));
                var_23 = arr_2 [i_3];
            }
        } 
    } 
    var_24 = ((/* implicit */short) (+(((/* implicit */int) var_17))));
}
