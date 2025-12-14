/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209431
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
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) var_4)), (((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))))));
    var_21 = ((/* implicit */_Bool) var_7);
    var_22 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 4; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_11 [i_3] [i_3] [i_2] [i_3] [i_4] [(unsigned char)3] = ((/* implicit */unsigned short) ((unsigned char) ((long long int) var_19)));
                                arr_12 [i_0] [i_1] [i_2] [(unsigned short)7] [(signed char)0] = ((/* implicit */short) ((min((arr_3 [i_4] [i_2] [i_0]), (((/* implicit */long long int) (_Bool)1)))) >> (((max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */long long int) (-(var_3)))))) - (3762713886910963562LL)))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)10)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2] [i_2] [i_4] [(_Bool)1]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))))))) == (var_11)));
                                arr_13 [i_2] = ((/* implicit */signed char) min((arr_3 [i_4] [i_4 - 3] [i_0]), (((/* implicit */long long int) (+(((/* implicit */int) var_19)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = var_14;
                var_24 = ((/* implicit */signed char) max(((+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || ((_Bool)0)))))), (min((((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) arr_0 [i_0] [i_1])))), (((/* implicit */int) (short)10))))));
                arr_15 [i_0] [i_0] [(short)2] = ((/* implicit */signed char) max(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))));
            }
        } 
    } 
}
