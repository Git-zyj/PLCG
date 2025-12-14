/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48518
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
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 += ((/* implicit */_Bool) max((((/* implicit */long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (unsigned char)12))))), (min((max((-7701555476501254546LL), (((/* implicit */long long int) arr_9 [i_0] [i_1 + 2] [(unsigned char)5])))), (((/* implicit */long long int) max((-570311565), (2147483635))))))));
                            arr_11 [i_0] [i_1 - 1] [i_1] [4LL] [i_3] |= ((/* implicit */_Bool) min((max((((/* implicit */int) var_12)), (2147483635))), (((/* implicit */int) min((var_2), (var_2))))));
                            var_16 &= min((max((((/* implicit */long long int) var_5)), (var_11))), (((/* implicit */long long int) min((max((arr_9 [i_0] [i_1 + 2] [i_3]), (((/* implicit */unsigned int) (signed char)106)))), (((/* implicit */unsigned int) (unsigned char)0))))));
                            arr_12 [i_0] [i_2] = ((/* implicit */unsigned long long int) max((-7114814339897431778LL), (7114814339897431765LL)));
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) min((((/* implicit */long long int) min((var_4), (var_14)))), (min((max((7114814339897431751LL), (((/* implicit */long long int) var_7)))), (max((((/* implicit */long long int) 580872245)), (7114814339897431733LL)))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */_Bool) max((var_9), (min((((/* implicit */long long int) max((((/* implicit */unsigned short) var_13)), (var_14)))), (min((((/* implicit */long long int) var_7)), (var_11)))))));
    var_19 = ((/* implicit */short) var_2);
}
