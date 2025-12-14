/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52167
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
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_11)), (4458833242680919750LL)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_21 += ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) var_9))) | (min((arr_14 [(unsigned short)2] [i_1] [i_1] [i_1] [i_1] [(unsigned short)4]), (((/* implicit */long long int) (_Bool)0)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1])))))));
                                var_22 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2 - 1] [i_2] [i_1] [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0])))))));
                                arr_18 [i_4] [(unsigned char)5] [i_4] = ((/* implicit */unsigned long long int) var_12);
                                arr_19 [i_0] [i_1] [i_2] [(unsigned short)2] [i_0] &= ((/* implicit */_Bool) (~(((((/* implicit */int) var_13)) << (((((/* implicit */int) var_11)) - (38219)))))));
                            }
                        } 
                    } 
                    arr_20 [4LL] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4458833242680919750LL)) ? (((/* implicit */long long int) max((-407610166), (arr_4 [i_0])))) : (max((var_0), (arr_7 [(_Bool)1] [i_0 + 1] [i_1]))))))));
                    arr_21 [i_0] = ((/* implicit */signed char) max((-407610168), (((/* implicit */int) (unsigned char)255))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (-(var_2))))))));
    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
}
