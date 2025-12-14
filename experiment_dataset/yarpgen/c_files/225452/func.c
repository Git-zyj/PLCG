/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225452
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_6 [(signed char)10] &= ((/* implicit */unsigned char) max((6648788790403066401LL), (((/* implicit */long long int) ((6503228637178439506LL) >= (((/* implicit */long long int) arr_2 [i_2 - 2])))))));
                    var_19 ^= ((/* implicit */short) ((((/* implicit */long long int) arr_2 [i_2])) / (max((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)32767)), (arr_2 [i_1])))), (-3901518953611436489LL)))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 &= ((var_5) ? (((long long int) ((((/* implicit */int) arr_12 [3] [i_1] [i_2] [8] [i_4])) ^ (2083805479)))) : (min((((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_2])))), (max((((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])), (2907322471250152436LL))))));
                                arr_13 [i_0] [i_1] [6U] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) max((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))), (max((((/* implicit */long long int) arr_5 [i_1] [i_2 - 3])), (min((-3639277539646474914LL), (var_8)))))));
                                var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((_Bool) arr_12 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_3]))), (((max((arr_2 [i_0]), (((/* implicit */unsigned int) arr_1 [5])))) << (((min((-1239062822), (arr_0 [i_3]))) + (1239062851)))))));
                                arr_14 [i_4] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (min((((/* implicit */unsigned int) (signed char)7)), (var_12)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) var_13);
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) max((var_8), (max((((/* implicit */long long int) min(((unsigned short)2863), (((/* implicit */unsigned short) (short)-15425))))), (max((((/* implicit */long long int) var_12)), (var_3))))))))));
}
