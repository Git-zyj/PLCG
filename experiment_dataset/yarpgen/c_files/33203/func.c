/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33203
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
    var_11 = ((/* implicit */unsigned int) ((((max((((/* implicit */unsigned long long int) var_3)), (var_10))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) * (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_3)) / (-4146796523586216328LL)))), ((+(var_10)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_12 ^= ((/* implicit */unsigned int) (((+(arr_4 [i_2] [i_2]))) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
                    var_13 = ((/* implicit */signed char) ((min((((var_6) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9213))))), (((/* implicit */unsigned int) ((arr_2 [6LL]) <= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_0])))))))) | (arr_4 [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [3U] [i_2] [0LL] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [(short)14] [i_0])), ((unsigned short)56335)))) != (((/* implicit */int) max((arr_6 [i_0] [i_0]), (arr_6 [6U] [i_0]))))));
                                arr_14 [i_0] [i_0] = ((/* implicit */short) max((((unsigned short) arr_0 [i_0])), (((/* implicit */unsigned short) min((arr_11 [i_0] [13U] [i_2]), (arr_11 [i_0] [(_Bool)1] [i_4]))))));
                            }
                        } 
                    } 
                    var_14 = ((((/* implicit */_Bool) max((arr_12 [5LL] [12U]), (arr_12 [i_0] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(unsigned short)4] [i_1]))))) : (max((arr_12 [i_0] [i_1]), (((/* implicit */int) (unsigned short)56335)))));
                    var_15 *= ((/* implicit */signed char) (~(((int) max((((/* implicit */unsigned int) (unsigned short)9208)), (arr_1 [i_2] [i_2]))))));
                }
            } 
        } 
    } 
}
