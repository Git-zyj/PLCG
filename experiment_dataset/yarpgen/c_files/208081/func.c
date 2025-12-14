/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208081
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    var_20 = var_18;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 2])))) ? (((((/* implicit */_Bool) var_15)) ? (var_16) : (arr_0 [i_0 + 2]))) : (((arr_0 [i_0 + 2]) << (((((/* implicit */int) (unsigned char)241)) - (214)))))));
                            arr_10 [i_3] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3])) ? (1314614287) : (((/* implicit */int) arr_9 [i_1] [i_3]))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) var_4);
                arr_11 [i_0] [(unsigned short)1] = ((((/* implicit */_Bool) ((arr_7 [i_0] [i_1] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) 10ULL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (5415891123669204973ULL))) : (((((((/* implicit */_Bool) arr_9 [3] [3])) ? (5143168602664277488ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((671572970U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))))))));
                var_23 = ((/* implicit */unsigned short) min((var_23), ((unsigned short)12723)));
                var_24 -= ((/* implicit */signed char) var_16);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 1; i_4 < 15; i_4 += 4) 
    {
        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            {
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [i_4 + 3] [i_4 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4 + 3] [i_4 - 1]))) : (-5209355956098139647LL))) + (((/* implicit */long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) ^ (13303575471045274128ULL))))))))));
                arr_16 [14] [i_4] = ((/* implicit */unsigned char) ((short) arr_12 [i_4 + 3]));
            }
        } 
    } 
}
