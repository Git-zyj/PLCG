/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236
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
    for (short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_6 [i_1] [i_0 + 2])))), (min((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) arr_6 [i_1] [i_1])))), ((-(((/* implicit */int) (signed char)-113)))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [2U] [i_4] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((1868634070U) > (((/* implicit */unsigned int) 290132885))));
                                arr_18 [i_0] [i_3] [i_3] [i_0] [i_2 - 2] [i_2 - 2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (arr_9 [(short)5] [i_0])))) : (((/* implicit */int) (!(arr_9 [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    arr_19 [i_0] [i_0] [i_0] [i_0 - 2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_15)))) ? (var_3) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_13) : (((/* implicit */int) (_Bool)0))))))))));
                    var_21 = ((/* implicit */int) var_15);
                }
            } 
        } 
    } 
    var_22 *= ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) ((1653608524U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108)))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -290132886)) : (var_8)))))));
}
