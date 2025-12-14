/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249696
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_2 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : ((+(arr_0 [i_1])))));
                var_13 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_4 [(unsigned char)14]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10611))) : ((-(arr_1 [i_1])))));
                arr_6 [i_1] = ((/* implicit */short) (-(arr_0 [i_1])));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */int) (~(max((((((/* implicit */_Bool) arr_12 [i_4] [i_1] [3U] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7518))) : (arr_3 [i_1]))), (((/* implicit */long long int) -717821637))))));
                                var_15 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_1] [i_3 - 1] [i_3 + 2])) ? (arr_7 [i_1] [i_1] [10ULL] [i_3 - 1]) : (arr_7 [16LL] [i_1] [i_0] [i_3 - 1])))));
                                var_16 += ((/* implicit */_Bool) arr_11 [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1]);
                                var_17 = ((/* implicit */unsigned long long int) arr_13 [i_0] [i_1] [(short)0] [i_2] [i_0] [i_1]);
                                var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744039349813248ULL)) ? (((((/* implicit */_Bool) (short)10611)) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3892))) : (9223372036854775786LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3883))))) : (((/* implicit */long long int) (+(((/* implicit */int) max(((short)-10611), ((short)-10637)))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] [i_1] = ((/* implicit */short) arr_3 [i_1]);
            }
        } 
    } 
    var_19 = ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_10))));
    var_20 = ((/* implicit */int) max((var_11), (((/* implicit */long long int) var_3))));
}
