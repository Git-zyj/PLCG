/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23940
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
    var_19 = ((/* implicit */unsigned int) ((-4914712445019043515LL) | (((/* implicit */long long int) ((0U) << (((3478208649U) - (3478208647U))))))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 816758646U)) + (7196348949189127561LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) 0U))))) != (((/* implicit */int) ((4294967281U) != (var_12)))))))) & (((21U) >> (((((((/* implicit */long long int) 524287U)) / (-8LL))) + (65566LL))))));
                                var_21 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 3623646192U)) || (((/* implicit */_Bool) arr_4 [i_2] [i_0]))))) != (((/* implicit */int) ((((/* implicit */_Bool) -639738250402871378LL)) && (((/* implicit */_Bool) 3478208671U))))))))) < (((((/* implicit */long long int) 4294967295U)) / (67108863LL)))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_6 [i_0] [i_1])) && (((/* implicit */_Bool) arr_1 [i_0])))) && (((var_0) <= (var_14))))) || (((((((/* implicit */long long int) var_10)) ^ (arr_5 [i_0]))) < (((((/* implicit */long long int) 0U)) % (6693965826003404LL)))))));
            }
        } 
    } 
}
