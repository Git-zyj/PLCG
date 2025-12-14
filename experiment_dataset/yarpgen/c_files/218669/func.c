/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218669
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
    var_17 = ((/* implicit */unsigned long long int) (-(-1)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 - 2] [(unsigned char)5]))))))));
                arr_4 [i_1] [i_0] [i_1] = (-(((((/* implicit */int) (signed char)-12)) ^ (((/* implicit */int) (unsigned char)249)))));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 8; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (-(max((((/* implicit */int) (short)0)), ((-2147483647 - 1)))))))));
                                var_20 -= ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) -1166766976)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)97))) : (0U)))))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2])) ? (arr_3 [i_2 + 3] [i_3 - 3] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)127)), ((short)5312)))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (3839702187U)))));
                var_22 = ((/* implicit */int) arr_2 [i_0] [3] [i_1]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) -1956065853);
    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) (unsigned char)3))));
    var_25 = ((/* implicit */unsigned int) var_13);
}
