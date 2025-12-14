/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248953
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
    var_20 = ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 4; i_2 < 14; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((signed char) ((_Bool) (~(((/* implicit */int) var_12)))))))));
                                arr_14 [i_0] [i_2 - 2] [i_0] [i_4] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((+(var_3))), ((+(arr_8 [i_0 + 1] [i_0 + 1] [i_0] [i_0]))))))));
                                var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) max((((signed char) var_16)), (((/* implicit */signed char) arr_10 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0]))))), (min((min((((/* implicit */long long int) var_4)), (var_19))), (((/* implicit */long long int) min((var_1), (arr_5 [i_0] [i_0]))))))));
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((short) max((((/* implicit */long long int) min((var_5), (var_7)))), ((-(var_19)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_5 = 1; i_5 < 14; i_5 += 2) 
                {
                    for (signed char i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_24 = ((signed char) min((var_7), ((!(var_13)))));
                                var_25 = ((/* implicit */int) var_2);
                                arr_22 [(unsigned char)1] [(short)11] [i_6] [i_5] [i_0] [i_0] [i_0 + 1] &= ((/* implicit */unsigned int) min((((/* implicit */short) var_4)), (max((arr_16 [10] [i_5] [i_0]), (((/* implicit */short) var_2))))));
                                arr_23 [(_Bool)1] [i_7] [i_6] [i_5] [i_1] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) var_16)), ((+(max((var_3), (((/* implicit */int) var_12))))))));
                                var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) min((var_15), (var_15))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
