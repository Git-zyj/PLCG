/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200576
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (~(var_11))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (4095LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38121)))));
                                arr_11 [i_0] [i_0] [i_2 - 2] [i_3] [i_0] [i_4] [i_2] &= ((/* implicit */short) min(((~((~(((/* implicit */int) arr_4 [i_4])))))), (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) min(((signed char)39), (((/* implicit */signed char) var_8))))))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    arr_15 [i_0] [i_0] [i_0] [i_5] &= (-(9120625313715710447LL));
                    arr_16 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 2147483647);
                    var_16 += ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_9 [i_0] [i_0] [i_1 + 1] [i_1 + 1])));
                }
                arr_17 [i_0] [i_0] [(_Bool)1] = min((((/* implicit */long long int) max((((((/* implicit */int) var_1)) ^ (var_12))), ((((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (9002801208229888LL)))) ? (((/* implicit */long long int) ((arr_3 [i_1] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (536870904U)))) : ((~(var_5))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((var_17), (var_11)));
    var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)0)), (var_5)));
}
