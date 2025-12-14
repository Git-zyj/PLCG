/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207090
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
    var_20 &= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (1398769927099353054LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)23487))))) : (var_10))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (-1398769927099353082LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (9223372036854775807LL))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((unsigned int) 1ULL)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_17 [i_3] [i_3] [i_3] [i_1] [i_3] = ((/* implicit */unsigned long long int) var_2);
                                arr_18 [i_4] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_13 [i_0 + 1] [i_4] [i_0 + 1] [i_3] [i_2] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
