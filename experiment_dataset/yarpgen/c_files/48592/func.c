/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48592
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [i_0 - 3] [i_1] [i_2] = arr_3 [i_2] [i_1] [i_0 - 3];
                    var_18 = ((/* implicit */unsigned long long int) var_6);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) arr_1 [i_0 - 2]);
                                var_20 = ((/* implicit */signed char) ((((min((arr_2 [i_0 - 2]), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)85))) >= (var_1)))))) + (2147483647))) << (((((arr_10 [i_4] [i_3] [i_0] [i_0] [i_0]) | (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)170)))))))) - (2057810715U)))));
                                arr_13 [i_4] = ((/* implicit */int) ((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                                arr_14 [i_4] [i_3] [(unsigned char)1] [2LL] [i_4] = ((((/* implicit */_Bool) (signed char)9)) ? (min((min((9223372036854775787LL), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_4])))), (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) arr_9 [i_0] [i_0])), ((short)7)))) >= (((/* implicit */int) arr_7 [i_0 + 1] [i_2 + 1] [i_2])))))));
                            }
                        } 
                    } 
                    var_21 = ((var_15) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)40071)) ? (((/* implicit */int) arr_4 [(short)2] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_2);
}
