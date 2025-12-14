/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222877
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
    var_20 -= ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [(unsigned char)4] [i_0] [i_0] = ((/* implicit */unsigned int) (~(var_10)));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_21 = max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (unsigned char)131)) + (-2147483637))))), (((9594315344347125503ULL) + (((/* implicit */unsigned long long int) 4198890949U)))));
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */short) arr_0 [i_0] [i_0]);
                                var_22 += ((/* implicit */short) max((4198890931U), (((/* implicit */unsigned int) (unsigned char)124))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(96076364U)))) ? (max((((/* implicit */unsigned long long int) max(((unsigned char)248), (((/* implicit */unsigned char) var_16))))), (arr_12 [(unsigned short)11]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned char)124)) - (113))))))));
                                arr_14 [i_0] [i_2] [i_0] = ((/* implicit */int) max((var_9), (((/* implicit */unsigned int) var_4))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_6)))))))))))));
}
