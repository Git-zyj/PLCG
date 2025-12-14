/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41830
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
    var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) var_11)), ((~(var_7)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [(short)8] [i_1] [i_1] = ((/* implicit */_Bool) 4294967295U);
                var_19 = ((/* implicit */short) min(((~(((/* implicit */int) (((-9223372036854775807LL - 1LL)) == (((/* implicit */long long int) arr_4 [i_1]))))))), (((/* implicit */int) min((arr_0 [i_1 - 2]), ((_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_3 + 1] [i_3] [i_3] = ((/* implicit */signed char) (~(min((-1LL), (((/* implicit */long long int) var_16))))));
                            var_20 = max(((-(var_15))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0] [i_0] [(short)5] [i_1] [i_3 + 1]))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
