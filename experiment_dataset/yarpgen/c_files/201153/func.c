/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201153
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
    var_18 -= ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_16)) ? (8388576) : (((/* implicit */int) var_2)))) / (((/* implicit */int) var_15)))), (((/* implicit */int) var_15))));
    var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_20 &= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [(signed char)8] [(signed char)12] [i_0])) ? (((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) arr_8 [i_3] [(signed char)4] [7ULL] [i_1] [i_0] [i_0])))), (((/* implicit */int) max((arr_1 [i_3]), (arr_5 [i_3 + 2] [i_3 + 3]))))));
                            arr_9 [i_2] [i_3 + 3] = ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
                arr_10 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(min((var_9), (((/* implicit */unsigned long long int) (signed char)98))))))) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))) : ((-(((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0]))))));
                var_21 = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1] [i_0]);
            }
        } 
    } 
    var_22 &= ((/* implicit */signed char) var_14);
}
