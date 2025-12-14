/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54177
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (unsigned short)54568))))), (var_2)))) || (((/* implicit */_Bool) max((max((var_2), (var_12))), (((/* implicit */long long int) ((unsigned short) var_9)))))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((var_2) >= (max((arr_9 [i_0 - 2] [i_1] [i_2 + 2] [i_3 + 2] [i_4] [i_4]), (arr_9 [i_0] [i_1] [i_2 - 2] [i_3 - 1] [i_4 - 1] [i_3 - 2]))))))));
                                arr_14 [i_0 + 1] [i_1] [i_0 + 2] [i_3] [i_1 + 1] [i_3] [i_4] = ((/* implicit */long long int) arr_4 [(unsigned char)1] [i_4]);
                                var_15 = ((/* implicit */unsigned int) (~((~(((arr_3 [i_0] [i_1] [i_2 + 2]) - (((/* implicit */unsigned long long int) var_1))))))));
                                var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_0 + 3]))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_0 - 1])))) : ((~(arr_9 [i_1 - 2] [i_1 - 2] [i_2 - 1] [i_3 + 2] [i_3 + 2] [i_4])))));
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0 + 4] [i_1 - 2])) ^ (arr_11 [i_0 - 2] [i_1 - 2] [i_2] [i_2 + 2]))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) max((var_8), (((/* implicit */long long int) max((var_1), (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10967))))))))));
}
