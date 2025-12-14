/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52037
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
    var_12 += ((/* implicit */unsigned char) ((signed char) (+(min((((/* implicit */unsigned long long int) var_3)), (var_10))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((min((((int) arr_3 [i_1] [i_1] [i_1])), ((+(((/* implicit */int) (unsigned short)53527)))))), ((-(((/* implicit */int) arr_1 [9]))))));
                var_14 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((max((((/* implicit */long long int) var_6)), (var_4))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned char) var_10);
                                arr_14 [(unsigned char)7] [(signed char)5] [(short)11] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(short)3] [i_1] [i_4 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_4 - 2] [i_0] [i_3])) ? (1670228414) : (-1670228405)))) : (var_7)))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_10))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0)))))));
                                arr_15 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_5)) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (0U)))) : (min((var_1), (((/* implicit */long long int) arr_0 [i_2]))))))));
                                var_16 = ((/* implicit */unsigned int) (!(((_Bool) (!(((/* implicit */_Bool) 4294967287U)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
