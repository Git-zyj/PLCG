/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233042
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
    var_10 -= ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((long long int) ((var_5) ^ (var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */long long int) (+(((max((-53616484), (var_4))) >> (((/* implicit */int) ((((/* implicit */_Bool) 4001990649U)) || (((/* implicit */_Bool) -2095073746)))))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((arr_2 [i_1 - 1]) % (((/* implicit */int) var_3))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */long long int) 292976646U)) : (-8249093994048405634LL))))));
                                var_12 += ((/* implicit */int) arr_10 [(_Bool)1] [i_0]);
                                var_13 = ((/* implicit */short) ((unsigned long long int) var_9));
                                arr_12 [4] [(short)9] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4 - 1])) ? (4001990637U) : (((/* implicit */unsigned int) arr_2 [i_4 + 2]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-113))))) : (16U)));
                                var_14 *= ((/* implicit */unsigned short) arr_11 [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
                var_15 = (((-(((4001990649U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))));
            }
        } 
    } 
}
