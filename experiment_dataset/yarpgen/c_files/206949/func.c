/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206949
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1])))))), (((((/* implicit */int) arr_7 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_2])) / (((/* implicit */int) arr_7 [i_3 + 1] [i_3] [i_3 + 1] [i_2]))))));
                            arr_10 [i_2] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((unsigned char) arr_8 [i_3 - 2] [i_2] [(signed char)10] [i_1] [i_0]))), (arr_4 [i_2 + 2] [i_0 - 1]))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) / (((/* implicit */int) arr_7 [i_2 - 1] [i_3 - 1] [i_3 - 1] [i_2])))))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((long long int) max((((((/* implicit */_Bool) arr_3 [(unsigned char)4] [(_Bool)1] [i_3])) ? (((/* implicit */int) arr_3 [(unsigned char)13] [i_1] [i_3])) : (((/* implicit */int) var_14)))), (((/* implicit */int) arr_2 [i_0 - 1] [i_3 - 2]))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))))), (arr_1 [(_Bool)1])));
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) / (max((((/* implicit */unsigned long long int) max((var_16), (((/* implicit */long long int) var_4))))), (max((var_6), (((/* implicit */unsigned long long int) 9223372036854775807LL))))))));
    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_18))));
}
