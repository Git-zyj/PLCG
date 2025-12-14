/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39252
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
    var_17 = ((/* implicit */unsigned char) (-(var_5)));
    var_18 = ((/* implicit */short) (~(((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (((-(var_0))) != (((/* implicit */unsigned long long int) (~(min((((/* implicit */int) (unsigned char)188)), (arr_5 [i_2]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_20 = (~(min((min((((/* implicit */unsigned long long int) arr_1 [i_0])), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14))))))));
                                arr_11 [i_2] [i_1] [i_2] [i_3] [(unsigned short)11] = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)65));
                                arr_12 [i_0] [i_1] [i_2] [(unsigned char)7] [i_4] = ((/* implicit */unsigned short) arr_4 [i_1 + 1] [i_1 + 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) var_8);
}
