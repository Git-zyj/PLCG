/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54713
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
    var_20 = ((/* implicit */unsigned char) min((1789843416), (((/* implicit */int) var_6))));
    var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) var_14)), (var_18)));
    var_22 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_1] [(signed char)4] = ((signed char) max((((/* implicit */unsigned long long int) ((unsigned int) (signed char)14))), (max((((/* implicit */unsigned long long int) arr_1 [13U])), (var_9)))));
                var_23 ^= ((/* implicit */int) arr_4 [i_0] [10LL]);
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_16 [i_2] [i_1] [i_4] [i_3] [i_4] [12LL] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 3276790260U)) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2] [i_1 + 1])) : (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [1ULL] [i_1 - 1] [i_0] [10LL] [i_4])))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (2954339905666669455ULL) : (((/* implicit */unsigned long long int) -1255955205))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((unsigned char) var_2)))))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_9 [i_1 - 1] [i_2] [i_3] [i_4])), (arr_14 [i_1] [i_2])))) ? (arr_4 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)13)) > (((/* implicit */int) (unsigned short)61433)))))))), (((/* implicit */long long int) (-(-1255955205)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
