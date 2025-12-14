/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223095
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
    var_15 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] = max((((/* implicit */long long int) 27U)), (2997945921444901673LL));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned char) var_2)));
                                var_17 = ((/* implicit */unsigned int) max(((((((-(((/* implicit */int) var_6)))) + (2147483647))) << (((((arr_3 [i_1] [i_3]) << (((2522901761U) - (2522901749U))))) - (1085165568U))))), (((/* implicit */int) arr_12 [i_4 - 2] [i_2] [i_2] [i_1] [16LL]))));
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_7 [i_3 + 3] [i_0] [i_0 - 2]), (arr_7 [i_0 - 3] [i_0] [i_2])))) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (unsigned char)72))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) arr_0 [(unsigned char)19]);
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((max((arr_5 [i_0 + 1]), (((/* implicit */long long int) ((var_2) << (((/* implicit */int) arr_1 [16LL] [i_1]))))))), (arr_5 [i_0 - 2]))))));
                }
            } 
        } 
    } 
    var_21 += ((((/* implicit */_Bool) ((long long int) (-9223372036854775807LL - 1LL)))) ? (((unsigned int) var_14)) : (((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)170))))))));
}
