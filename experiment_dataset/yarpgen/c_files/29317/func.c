/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29317
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_21 = max((((((/* implicit */_Bool) max((arr_7 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_6 [i_3] [i_1] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_2)), (arr_0 [i_0] [i_3])))) : (((((/* implicit */_Bool) var_16)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))), (var_18));
                                var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_3 - 1] [i_2] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2199023255552LL)))) : ((-((-(2199023255559LL)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1 - 1] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) * (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 2] [i_1 - 1] [i_0])) ? (2199023255524LL) : (((/* implicit */long long int) arr_12 [i_0] [(short)2] [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((arr_8 [i_0] [i_1] [12LL] [i_1]) - (arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) (+(var_18)));
}
