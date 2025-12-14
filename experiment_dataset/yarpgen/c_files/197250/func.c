/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197250
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [22ULL]);
                                arr_13 [i_3] [i_3] [(_Bool)1] [i_3] [i_0] [i_3] [i_1 + 1] = ((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3 + 3] [i_2])) ? (((/* implicit */int) arr_4 [i_2] [i_1])) : (((/* implicit */int) (unsigned short)21748)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_12 *= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 5506461754718797832ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))) : (12940282318990753798ULL))) : (((/* implicit */unsigned long long int) (~(arr_9 [i_5] [i_2] [i_1 - 1] [i_5])))))));
                                var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (arr_9 [i_5 + 1] [(_Bool)1] [i_5] [i_5]) : (((/* implicit */long long int) var_10)))) > (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)1)) ? (arr_5 [i_5 + 1] [i_1 + 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34855)))))) ? (((((/* implicit */_Bool) arr_0 [i_5 - 2])) ? (((/* implicit */unsigned long long int) arr_0 [i_5 + 1])) : (arr_12 [i_1 - 1] [i_1 + 1] [i_1] [i_0] [i_1 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_5 - 2] [i_1 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_0 [i_5 + 1]))))));
                                var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_2] [i_5 - 1])) ? (((/* implicit */int) arr_10 [i_6] [i_1 - 1] [i_2] [i_5 - 1])) : (((/* implicit */int) (unsigned short)44974))))), (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])), (arr_7 [i_0] [i_1] [i_2])))));
                                var_16 = ((/* implicit */long long int) (~(((12940282318990753798ULL) + (arr_12 [i_0] [i_2] [i_2] [i_0] [i_6])))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max(((+(((arr_0 [i_1 + 1]) + (((/* implicit */long long int) 310564366U)))))), (((/* implicit */long long int) ((((/* implicit */int) (short)-28620)) + (((/* implicit */int) (unsigned char)224))))))))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_1 + 2] [i_1 + 2] [12ULL] [i_1 + 2] [i_1 + 2]))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 + 2] [i_0])), (arr_11 [i_1 + 2] [i_1 + 2] [i_0])))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) var_10);
    var_20 -= ((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) ((_Bool) (short)31))), (min((var_10), (var_6))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */long long int) ((var_7) * (var_7))))));
}
