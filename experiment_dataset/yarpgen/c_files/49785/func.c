/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49785
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_11) : (var_7))))))) > (((/* implicit */int) var_10))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((long long int) -477832578))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_4] [i_0])))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) arr_9 [i_4] [i_4])) : (((/* implicit */int) arr_12 [i_0]))))))))));
                                arr_13 [i_1 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) 15273209806439758722ULL))));
                            }
                        } 
                    } 
                    var_17 ^= ((/* implicit */unsigned long long int) min((((((arr_6 [i_2] [i_1 + 1]) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) var_1)) != (arr_6 [i_0] [i_1 + 1])))) - (1))))), (max((min((var_3), (arr_1 [i_1 + 1]))), (((((/* implicit */_Bool) var_6)) ? (-66708317) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_2]))))))));
                }
            } 
        } 
    } 
}
