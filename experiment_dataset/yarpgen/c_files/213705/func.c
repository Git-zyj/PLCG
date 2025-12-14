/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213705
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
    var_14 = ((/* implicit */long long int) min((var_14), (((long long int) ((((/* implicit */_Bool) 9223372036854775799LL)) ? ((~(var_7))) : (((/* implicit */long long int) -341774513)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_15 [i_2] = ((/* implicit */unsigned short) (!(((min((-9223372036854775800LL), (((/* implicit */long long int) var_0)))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3]))))))))));
                                var_15 = ((/* implicit */unsigned int) ((long long int) ((arr_14 [i_0] [i_2] [i_2] [i_3] [i_3] [i_4]) ? (((/* implicit */int) (short)252)) : (((/* implicit */int) arr_14 [3LL] [i_2] [i_2] [i_2] [i_3] [i_3])))));
                                var_16 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) arr_10 [i_2] [i_1] [i_2])) ? (((/* implicit */int) arr_6 [(unsigned short)1] [i_0])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(signed char)7])))), (((/* implicit */int) var_10)))), (((/* implicit */int) (unsigned short)17487))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                        {
                            {
                                var_17 &= ((/* implicit */_Bool) (-(max((((/* implicit */int) ((((/* implicit */int) arr_14 [10ULL] [i_7] [i_5] [i_5] [i_7] [i_5])) > (((/* implicit */int) (short)31124))))), (((((/* implicit */int) arr_18 [(unsigned char)3] [i_1] [i_1] [i_1] [i_1])) + (((/* implicit */int) arr_6 [i_5] [i_7]))))))));
                                var_18 = ((/* implicit */int) max((((/* implicit */long long int) max(((short)-31125), ((short)31111)))), (511LL)));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
