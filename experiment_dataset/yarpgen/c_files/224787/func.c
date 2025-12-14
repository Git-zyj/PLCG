/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224787
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_17 += ((/* implicit */_Bool) (+(((/* implicit */int) min((arr_4 [i_1 + 1] [i_1] [(short)16]), (((/* implicit */unsigned char) (signed char)127)))))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((_Bool) max((((/* implicit */unsigned int) var_12)), (arr_3 [i_0 - 1] [i_2 + 2]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((min((9223372036854775807LL), (((/* implicit */long long int) arr_3 [i_3] [i_3])))), (((/* implicit */long long int) ((unsigned char) arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0])))));
                                arr_13 [i_0] = ((/* implicit */_Bool) min((min((min((15430442445572648684ULL), (var_7))), (((/* implicit */unsigned long long int) max((-2366891840675756784LL), (((/* implicit */long long int) arr_4 [i_0] [i_1] [i_0]))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((_Bool) arr_2 [i_0] [i_0]))), (max((1834807725616556346LL), (((/* implicit */long long int) var_5)))))))));
                                arr_14 [i_0] [i_0] [i_3] [i_2] [i_0] [i_0] &= ((/* implicit */signed char) min((((/* implicit */long long int) min((var_12), (var_5)))), (max((var_13), (-9223372036854775802LL)))));
                                var_19 = ((/* implicit */unsigned char) ((unsigned int) -9223372036854775802LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 |= ((/* implicit */long long int) var_6);
    var_21 ^= ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (416298001U)))), (var_10))), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) var_15)), (2546169286U))), (((/* implicit */unsigned int) min((var_1), (((/* implicit */unsigned char) var_15))))))))));
}
