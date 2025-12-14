/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233465
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned short)1023)))))));
    var_15 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (!((_Bool)1))))));
                                var_17 = ((((((/* implicit */_Bool) arr_5 [i_1 + 4] [i_1 - 1])) ? (((arr_9 [(unsigned char)7] [i_2] [i_1 - 1] [i_0 - 3]) ^ (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)32512))) | (var_10))))) * (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) var_6)))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2] [i_2])) && (((/* implicit */_Bool) var_9))))))))));
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) arr_5 [i_1] [i_3]))));
                                var_19 = ((/* implicit */short) ((((/* implicit */int) (short)32498)) | (((/* implicit */int) (unsigned char)0))));
                                var_20 = ((/* implicit */short) ((unsigned short) 18446744073709551615ULL));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) var_4);
                var_22 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)103))))), (arr_4 [i_0])));
                var_23 = ((/* implicit */unsigned int) ((int) arr_6 [i_1 + 4] [i_1 + 4] [i_0 + 1]));
            }
        } 
    } 
}
